// CNCFWmaEncoder.cpp : Implementation of CNCFWmaEncoder

#include "stdafx.h"
#include "CNCFWmaEncoder.h"
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

DWORD WINAPI WmaEncoderThread(PVOID pvParam);

// CNCFWmaEncoder
STDMETHODIMP CNCFWmaEncoder::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] =
	{
		&IID_INCFWmaEncoder
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
	CNCFWmaEncoder *pCNCFWmaEncoder;
	INCFEncoderParams* pINCFEncoderParams;
	INCFWmaTag *pINCFWmaTag;
	BSTR in_filename;
	BSTR out_filename;
	VARIANT_BOOL async;
};


STDMETHODIMP CNCFWmaEncoder::Encode(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFWmaTag *pINCFWmaTag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async)
{
	if (async == VARIANT_FALSE) {
		return EncodeWork(pINCFEncoderParams, pINCFWmaTag, in_filename, out_filename, async);
	}

	Encode_Param *pparam = new Encode_Param();
	pparam->pINCFEncoderParams = pINCFEncoderParams;
	pparam->out_filename = CComBSTR(out_filename).Copy();
	pparam->in_filename = CComBSTR(in_filename).Copy();
	pparam->pCNCFWmaEncoder = this;
	pparam->pINCFWmaTag = pINCFWmaTag;
	pparam->async = async;

	DWORD dwExtractTrackThreadID(0);
	HANDLE hThread = CreateThread(NULL, 0, WmaEncoderThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

DWORD WINAPI WmaEncoderThread(PVOID pvParam)
{
	Encode_Param *pparam = reinterpret_cast<Encode_Param*>(pvParam);

	HRESULT hr = pparam->pCNCFWmaEncoder->EncodeWork(pparam->pINCFEncoderParams, pparam->pINCFWmaTag, pparam->in_filename, pparam->out_filename, pparam->async);

	SysFreeString(pparam->out_filename);
	SysFreeString(pparam->in_filename);
	delete pparam;

	return 0;
}

STDMETHODIMP CNCFWmaEncoder::EncodeWork( /*[in]*/ INCFEncoderParams* pINCFEncoderParams,
	/*[in]*/ INCFWmaTag *pINCFWmaTag,
	/*[in]*/ BSTR in_filename,
	/*[in]*/ BSTR out_filename,
	/*[in]*/ VARIANT_BOOL async)
{
	HRESULT hr = this->m_pEncoder->EncodeWork(pINCFEncoderParams, in_filename, out_filename);
	if (FAILED(hr)) {
		return Error("Encoder FAILED!", IID_INCFWmaEncoder, hr);
	}

	if (pINCFWmaTag != nullptr) {
		hr = pINCFWmaTag->SaveToFile(out_filename);
		if (FAILED(hr)) {
			return Error(L"Error executing WMCreateEditor", IID_INCFWmaEncoder, hr);
		}
	}

	return hr;
}

STDMETHODIMP CNCFWmaEncoder::get_ExtractionFinished( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFWmaEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionFinished();
	return S_OK;
}

STDMETHODIMP CNCFWmaEncoder::get_ExtractionSucceeded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFWmaEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionSucceeded();
	return S_OK;
}

STDMETHODIMP CNCFWmaEncoder::get_ExtractionErrorMessage( /*[out, retval]*/ BSTR *error_message)
{
	if (error_message == nullptr) {
		return Error(L"error_message is NULL", IID_INCFWmaEncoder, E_INVALIDARG);
	}

	*error_message = this->m_bstrAsyncExtractionErrorMessage.Copy();
	return S_OK;
}

STDMETHODIMP CNCFWmaEncoder::GetExtractionProgressPercent( /*[out, retval]*/ long *progress_value)
{
	if (progress_value == nullptr) {
		return Error(L"progress_value is NULL", IID_INCFWmaEncoder, E_INVALIDARG);
	}

	*progress_value = this->m_pEncoder->GetAsyncProgressValue();
	return S_OK;
}