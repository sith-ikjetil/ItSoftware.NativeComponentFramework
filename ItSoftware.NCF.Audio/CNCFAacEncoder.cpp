// CNCFAacEncoder.cpp : Implementation of CNCFAacEncoder

#include "stdafx.h"
#include "CNCFAacEncoder.h"
#include "windows.h"
#include "wmcodecdsp.h"
#include "mftransform.h"
#include "mfidl.h"
#include "mfapi.h"
#include "shlwapi.h"
#include "mferror.h"
#include "wmsdkidl.h"
#include "../Include/itsoftware.h"
#include "../Include/itsoftware-com.h"
// mfuuid.lib evr.lib mf.lib mfplat.lib  mfreadwrite.lib dxva2.lib mfplay.lib 
using namespace ItSoftware;
using namespace ItSoftware::COM;

DWORD WINAPI AacEncoderThread(PVOID pvParam);

// CNCFAacEncoder
STDMETHODIMP CNCFAacEncoder::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] =
	{
		&IID_INCFAacEncoder
	};

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

struct Encode_Param
{
	CNCFAacEncoder *pCNCFAacEncoder;
	INCFEncoderParams* pINCFEncoderParams;
	INCFAacTag *pINCFAacTag;
	BSTR in_filename;
	BSTR out_filename;
	VARIANT_BOOL async;
};


STDMETHODIMP CNCFAacEncoder::Encode(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFAacTag *pINCFAacTag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async)
{	
	if (async == VARIANT_FALSE) {
		return EncodeWork(pINCFEncoderParams, pINCFAacTag, in_filename, out_filename, async);
	}

	Encode_Param *pparam = new Encode_Param();
	pparam->pINCFEncoderParams = pINCFEncoderParams;
	pparam->out_filename = CComBSTR(out_filename).Copy();
	pparam->in_filename = CComBSTR(in_filename).Copy();
	pparam->pCNCFAacEncoder = this;
	pparam->pINCFAacTag = pINCFAacTag;
	pparam->async = async;

	DWORD dwExtractTrackThreadID(0);
	HANDLE hThread = CreateThread(NULL, 0, AacEncoderThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

DWORD WINAPI AacEncoderThread(PVOID pvParam)
{
	Encode_Param *pparam = reinterpret_cast<Encode_Param*>(pvParam);

	HRESULT hr = pparam->pCNCFAacEncoder->EncodeWork(pparam->pINCFEncoderParams, pparam->pINCFAacTag, pparam->in_filename, pparam->out_filename, pparam->async);

	SysFreeString(pparam->out_filename);
	SysFreeString(pparam->in_filename);
	delete pparam;

	return 0;
}

STDMETHODIMP CNCFAacEncoder::EncodeWork( /*[in]*/ INCFEncoderParams* pINCFEncoderParams,
	/*[in]*/ INCFAacTag *pINCFAacTag,
	/*[in]*/ BSTR in_filename,
	/*[in]*/ BSTR out_filename,
	/*[in]*/ VARIANT_BOOL async)
{
	HRESULT hr = this->m_pEncoder->EncodeWork(pINCFEncoderParams, in_filename, out_filename);
	if (FAILED(hr)) {
		return Error("Encoder FAILED!", IID_INCFAacEncoder, hr);
	}	

	/*if (pINCFAacTag != nullptr) {
		hr = pINCFAacTag->SaveToFile(out_filename);
		if (FAILED(hr)) {
			return Error(L"Error executing WMCreateEditor", IID_INCFAacEncoder, hr);
		}	
	}*/

	return hr;
}

STDMETHODIMP CNCFAacEncoder::get_ExtractionFinished( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionFinished();
	return S_OK;
}

STDMETHODIMP CNCFAacEncoder::get_ExtractionSucceeded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionSucceeded();
	return S_OK;
}

STDMETHODIMP CNCFAacEncoder::get_ExtractionErrorMessage( /*[out, retval]*/ BSTR *error_message)
{
	if (error_message == nullptr) {
		return Error(L"error_message is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*error_message = this->m_bstrAsyncExtractionErrorMessage.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacEncoder::GetExtractionProgressPercent( /*[out, retval]*/ long *progress_value)
{
	if (progress_value == nullptr) {
		return Error(L"progress_value is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*progress_value = this->m_pEncoder->GetAsyncProgressValue();
	return S_OK;
}