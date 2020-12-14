// CNCFMp3Encoder.cpp : Implementation of CNCFMp3Encoder

#include "stdafx.h"
#include "CNCFMp3Encoder.h"
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

DWORD WINAPI Mp3EncoderThread(PVOID pvParam);

// CNCFMp3Encoder
STDMETHODIMP CNCFMp3Encoder::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] =
	{
		&IID_INCFMp3Encoder
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
	CNCFMp3Encoder *pCNCFMp3Encoder;
	INCFEncoderParams* pINCFEncoderParams;
	INCFMp3Tag *pINCFMp3Tag;
	BSTR in_filename;
	BSTR out_filename;
	VARIANT_BOOL async;
};


STDMETHODIMP CNCFMp3Encoder::Encode(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFMp3Tag *pINCFMp3Tag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async)
{
	if (async == VARIANT_FALSE) {
		return EncodeWork(pINCFEncoderParams, pINCFMp3Tag, in_filename, out_filename);
	}

	Encode_Param *pparam = new Encode_Param();
	pparam->pINCFEncoderParams = pINCFEncoderParams;
	pparam->out_filename = CComBSTR(out_filename).Copy();
	pparam->in_filename = CComBSTR(in_filename).Copy();
	pparam->pCNCFMp3Encoder = this;
	pparam->pINCFMp3Tag = pINCFMp3Tag;
	pparam->async = async;

	DWORD dwExtractTrackThreadID(0);
	HANDLE hThread = CreateThread(NULL, 0, Mp3EncoderThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

DWORD WINAPI Mp3EncoderThread(PVOID pvParam)
{
	Encode_Param *pparam = reinterpret_cast<Encode_Param*>(pvParam);

	HRESULT hr = pparam->pCNCFMp3Encoder->EncodeWork(pparam->pINCFEncoderParams, pparam->pINCFMp3Tag, pparam->in_filename, pparam->out_filename);

	SysFreeString(pparam->out_filename);
	SysFreeString(pparam->in_filename);
	delete pparam;

	return 0;
}

STDMETHODIMP CNCFMp3Encoder::EncodeWork( /*[in]*/ INCFEncoderParams* pINCFEncoderParams,
	/*[in]*/ INCFMp3Tag *pINCFMp3Tag,
	/*[in]*/ BSTR in_filename,
	/*[in]*/ BSTR out_filename)
{
	HRESULT hr = this->m_pEncoder->EncodeWork(pINCFEncoderParams, in_filename, out_filename);
	if (FAILED(hr)) {
		return Error("Encoder FAILED!", IID_INCFMp3Encoder, hr);
	}

	if (pINCFMp3Tag != nullptr) {
		hr = pINCFMp3Tag->SaveToFile(out_filename);
		if (FAILED(hr)) {
			return Error(L"Error executing WMCreateEditor", IID_INCFMp3Encoder, hr);
		}
	}

	return hr;
}

STDMETHODIMP CNCFMp3Encoder::get_ExtractionFinished( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFMp3Encoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionFinished();
	return S_OK;
}

STDMETHODIMP CNCFMp3Encoder::get_ExtractionSucceeded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFMp3Encoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionSucceeded();
	return S_OK;
}

STDMETHODIMP CNCFMp3Encoder::get_ExtractionErrorMessage( /*[out, retval]*/ BSTR *error_message)
{
	if (error_message == nullptr) {
		return Error(L"error_message is NULL", IID_INCFMp3Encoder, E_INVALIDARG);
	}

	*error_message = this->m_bstrAsyncExtractionErrorMessage.Copy();
	return S_OK;
}

STDMETHODIMP CNCFMp3Encoder::GetExtractionProgressPercent( /*[out, retval]*/ long *progress_value)
{
	if (progress_value == nullptr) {
		return Error(L"progress_value is NULL", IID_INCFMp3Encoder, E_INVALIDARG);
	}

	*progress_value = this->m_pEncoder->GetAsyncProgressValue();
	return S_OK;
}