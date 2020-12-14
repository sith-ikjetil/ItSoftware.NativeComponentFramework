// CNCFEncoderParams.cpp : Implementation of CNCFEncoderParams

#include "stdafx.h"
#include "CNCFEncoderParams.h"


// CNCFEncoderParams

STDMETHODIMP CNCFEncoderParams::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFEncoderParams
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFEncoderParams::get_NumberOfChannels(/*[out, retval]*/ short* count)
{
	if (count == nullptr) {
		return Error(L"Argument 'count' is NULL.", IID_INCFEncoderParams, E_INVALIDARG);
	}
	*count = this->m_wNumberOfChannels;
	return S_OK;
}

STDMETHODIMP CNCFEncoderParams::put_NumberOfChannels(/*[in]*/ short count)
{
	this->m_wNumberOfChannels = count;
	return S_OK;
}

STDMETHODIMP CNCFEncoderParams::get_SamplesPerSecond(/*[out, retval]*/ long* samples)
{
	if (samples == nullptr) {
		return Error(L"Argument 'samples' is NULL.", IID_INCFEncoderParams, E_INVALIDARG);
	}
	*samples = this->m_lSamplesPerSecond;
	return S_OK;
}

STDMETHODIMP CNCFEncoderParams::put_SamplesPerSecond(/*[in]*/ long samples)
{
	this->m_lSamplesPerSecond = samples;
	return S_OK;
}

STDMETHODIMP CNCFEncoderParams::get_BitsPerSample(/*[out, retval]*/ short* bits)
{
	if (bits == nullptr) {
		return Error(L"Argument 'bits' is NULL.", IID_INCFEncoderParams, E_INVALIDARG);
	}
	*bits = this->m_wBitsPerSample;
	return S_OK;
}

STDMETHODIMP CNCFEncoderParams::put_BitsPerSample(/*[in]*/ short bits) 
{
	this->m_wBitsPerSample = bits;
	return S_OK;
}