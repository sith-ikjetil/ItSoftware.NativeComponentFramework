
#ifndef __CENCODER_H__
#define __CENCODER_H__
#include "stdafx.h"
#include "CSession.h"
#include "CNCFEncoderParams.h"
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

class CEncoder
{
private:
	GUID m_audioFormat;
	IID m_transcodeContainerFormat;
	UINT32 m_avgBytesPerSecond;
	bool m_bAsyncExtractionFinsihed;
	long m_lAsyncProgressValue;
	bool m_bAsyncExtractionSucceeded;

	void ResetWorkingVariables()
	{
		this->m_bAsyncExtractionFinsihed = false;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_lAsyncProgressValue = 0;
	}

public:
	CEncoder(const GUID audioFormat, const IID transcodeContainerFormat)
		:	m_audioFormat(audioFormat), 
			m_transcodeContainerFormat(transcodeContainerFormat)			
	{
		if (this->m_audioFormat == MFAudioFormat_MP3) 
		{
			this->m_avgBytesPerSecond = 40000; // BEST QUALITY
		}
		else if (this->m_audioFormat == MFAudioFormat_AAC) 
		{
			this->m_avgBytesPerSecond = 24000; // BEST QUALITY
		}
		else if (this->m_audioFormat == MFAudioFormat_WMAudioV9)
		{
			this->m_avgBytesPerSecond = 32004; // BEST QUALITY
		}
		else {
			this->m_avgBytesPerSecond = 0;		// NOT USED
		}

		this->ResetWorkingVariables();
	}

	void Reset()
	{
		this->ResetWorkingVariables();
	}

	long GetAsyncProgressValue() {
		return this->m_lAsyncProgressValue;
	}

	bool GetAsyncExtractionFinished()
	{
		return this->m_bAsyncExtractionFinsihed;
	}

	bool GetAsyncExtractionSucceeded()
	{
		return this->m_bAsyncExtractionSucceeded;
	}

private:
	STDMETHODIMP GetCollectionObject(IMFCollection *pCollection, DWORD index, IMFMediaType **ppObj)
	{
		IUnknown *pUnk;
		HRESULT hr = pCollection->GetElement(index, &pUnk);
		if (SUCCEEDED(hr))
		{
			hr = pUnk->QueryInterface(IID_PPV_ARGS(ppObj));
			pUnk->Release();
		}
		return hr;
	}


	STDMETHODIMP CreateProfile(INCFEncoderParams* pINCFEncoderParams, IMFAttributes **ppAttributes)
	{
		if (pINCFEncoderParams == nullptr) 
		{
			return E_INVALIDARG;
		}

		if (ppAttributes == nullptr) {
			return E_INVALIDARG;
		}
		
		CComPtr<IMFCollection>   pAvailableTypes;
		CComPtr<IMFMediaType>    pAudioType;
		CComPtr<IMFAttributes>   pAudioAttrs;

		long paramSamplesPerSecond(0);
		HRESULT hr = pINCFEncoderParams->get_SamplesPerSecond(&paramSamplesPerSecond);

		short paramBitsPerSample(0);
		hr = pINCFEncoderParams->get_BitsPerSample(&paramBitsPerSample);

		short paramNumberOfChannels(0);
		hr = pINCFEncoderParams->get_NumberOfChannels(&paramNumberOfChannels);		

		if (this->m_audioFormat == MFAudioFormat_PCM) 
		{
			HRESULT hr = MFCreateMediaType(&pAudioType);
			if (FAILED(hr)) {
				return hr;
			}

			pAudioType->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Audio);
			pAudioType->SetGUID(MF_MT_SUBTYPE, MFAudioFormat_PCM);
			pAudioType->SetUINT32(MF_MT_AUDIO_SAMPLES_PER_SECOND, paramSamplesPerSecond);
			pAudioType->SetUINT32(MF_MT_AUDIO_NUM_CHANNELS, paramNumberOfChannels);
			pAudioType->SetUINT32(MF_MT_AUDIO_BITS_PER_SAMPLE, paramBitsPerSample);
			pAudioType->SetUINT32(MF_MT_AUDIO_PREFER_WAVEFORMATEX, 1);
			pAudioType->SetUINT32(MF_MT_ALL_SAMPLES_INDEPENDENT, 1);
			pAudioType->SetUINT32(MF_MT_FIXED_SIZE_SAMPLES, 1);
		}
		else
		{		
			DWORD dwFlags =
				(MFT_ENUM_FLAG_ALL & (~MFT_ENUM_FLAG_FIELDOFUSE)) |
				MFT_ENUM_FLAG_SORTANDFILTER;

			hr = MFTranscodeGetAudioOutputAvailableTypes(this->m_audioFormat, dwFlags, NULL, &pAvailableTypes);
			if (FAILED(hr)) {
				return hr;
			}

			DWORD dwMTCount = 0;
			hr = pAvailableTypes->GetElementCount(&dwMTCount);
			if (FAILED(hr))
			{
				return hr;
			}

			if (dwMTCount == 0)
			{
				return E_FAIL;
			}
			
			bool bFound = false;
			for (int iMT = 0; iMT < dwMTCount; iMT++)
			{
				if (pAudioType != NULL)
				{
					pAudioType.Release();
					pAudioType = NULL;
				}

				// Get the first audio type in the collection and make a copy.
				hr = GetCollectionObject(pAvailableTypes, iMT, &pAudioType);
				if (FAILED(hr))
				{
					return hr;
				}

				UINT32 samplesPerSecond;
				hr = pAudioType->GetUINT32(MF_MT_AUDIO_SAMPLES_PER_SECOND, &samplesPerSecond);

				UINT32 numChannels;
				hr = pAudioType->GetUINT32(MF_MT_AUDIO_NUM_CHANNELS, &numChannels);

				UINT32 avgBps(0);
				hr = pAudioType->GetUINT32(MF_MT_AUDIO_AVG_BYTES_PER_SECOND, &avgBps);

				UINT32 bitsPerSample(0);
				hr = pAudioType->GetUINT32(MF_MT_AUDIO_BITS_PER_SAMPLE, &bitsPerSample);

				if (samplesPerSecond == paramSamplesPerSecond &&
					numChannels == paramNumberOfChannels &&
					(bitsPerSample == paramBitsPerSample || bitsPerSample == 0) &&
					avgBps == this->m_avgBytesPerSecond)
				{
					bFound = true;
					break;
				}
			}

			if (!bFound) {
				return E_FAIL;
			}
		}

		hr = MFCreateAttributes(&pAudioAttrs, 0);
		if (FAILED(hr))
		{
			return hr;
		}

		hr = pAudioType->CopyAllItems(pAudioAttrs);
		if (FAILED(hr))
		{
			return hr;
		}

		if (SUCCEEDED(hr))
		{
			*ppAttributes = pAudioAttrs.Detach();
		}

		return hr;
	}




	STDMETHODIMP CreateTranscodeProfile(INCFEncoderParams* pINCFEncoderParams, IMFTranscodeProfile **ppProfile)
	{
		CComPtr<IMFTranscodeProfile> pProfile;
		CComPtr<IMFAttributes> pAudio;
		CComPtr<IMFAttributes> pVideo;
		CComPtr<IMFAttributes> pContainer;

		HRESULT hr = MFCreateTranscodeProfile(&pProfile);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing MFCreateTranscodeProfile", IID_INCFMp3Encoder, hr);
		}

		// Audio attributes.
		hr = CreateProfile(pINCFEncoderParams, &pAudio);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing MFCreateTranscodeProfile", IID_INCFMp3Encoder, hr);
		}

		hr = pProfile->SetAudioAttributes(pAudio);
		if (FAILED(hr))
		{
			return hr; // Error(L"Error executing SetAudioAttributes", IID_INCFMp3Encoder, hr);
		}

		// Container attributes.
		hr = MFCreateAttributes(&pContainer, 1);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing MFCreateAttributes", IID_INCFMp3Encoder, hr);
		}

		hr = pContainer->SetGUID(MF_TRANSCODE_CONTAINERTYPE, this->m_transcodeContainerFormat);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing SetGUID", IID_INCFMp3Encoder, hr);
		}

		hr = pProfile->SetContainerAttributes(pContainer);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing SetContainerAttributes", IID_INCFMp3Encoder, hr);
		}

		*ppProfile = pProfile.Detach();

		return S_OK;
	}

	STDMETHODIMP CreateMediaSource(PCWSTR pszURL, IMFMediaSource **ppSource)
	{
		MF_OBJECT_TYPE ObjectType = MF_OBJECT_INVALID;

		CComPtr<IMFSourceResolver> pResolver = NULL;
		CComPtr<IUnknown> pSource = NULL;

		// Create the source resolver.
		HRESULT hr = MFCreateSourceResolver(&pResolver);
		if (FAILED(hr))
		{
			return hr;
		}

		// Use the source resolver to create the media source
		hr = pResolver->CreateObjectFromURL(pszURL, MF_RESOLUTION_MEDIASOURCE,
			NULL, &ObjectType, &pSource);
		if (FAILED(hr))
		{
			return hr;
		}

		// Get the IMFMediaSource interface from the media source.
		hr = pSource->QueryInterface(IID_PPV_ARGS(ppSource));

		return hr;
	}

	STDMETHODIMP GetSourceDuration(IMFMediaSource *pSource, MFTIME *pDuration)
	{
		*pDuration = 0;

		IMFPresentationDescriptor *pPD = NULL;

		HRESULT hr = pSource->CreatePresentationDescriptor(&pPD);
		if (SUCCEEDED(hr))
		{
			hr = pPD->GetUINT64(MF_PD_DURATION, (UINT64*)pDuration);
			pPD->Release();
		}
		return hr;
	}

	STDMETHODIMP RunEncodingSession(CSession *pSession, MFTIME duration)
	{
		const DWORD WAIT_PERIOD = 500;
		const int   UPDATE_INCR = 5;

		HRESULT hr = S_OK;
		MFTIME pos;
		LONGLONG prev = 0;
		while (1)
		{
			hr = pSession->Wait(WAIT_PERIOD);
			if (hr == E_PENDING)
			{
				hr = pSession->GetEncodingPosition(&pos);

				LONGLONG percent = (100 * pos) / duration;
				this->m_lAsyncProgressValue = percent;
			}
			else
			{
				break;
			}
		}
		return hr;
	}

public:
	STDMETHODIMP EncodeWork( /*[in]*/ INCFEncoderParams* pINCFEncoderParams,		
		/*[in]*/ BSTR in_filename,
		/*[in]*/ BSTR out_filename)
	{
		CComPtr<IMFMediaSource> pSource;
		CComPtr<IMFTopology> pTopology;
		CSession *pSession = NULL;

		MFTIME duration = 0;

		HRESULT hr = MFStartup(MF_VERSION);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing MFStartup", IID_INCFMp3Encoder, hr);
		}

		hr = CreateMediaSource(in_filename, &pSource);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing CreateMediaSource", IID_INCFMp3Encoder, hr);
		}

		hr = GetSourceDuration(pSource, &duration);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing GetSourceDuration", IID_INCFMp3Encoder, hr);
		}

		CComPtr<IMFTranscodeProfile> pProfile;
		hr = CreateTranscodeProfile(pINCFEncoderParams, &pProfile);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing CreateTranscodeProfile", IID_INCFMp3Encoder, hr);
		}

		hr = MFCreateTranscodeTopology(pSource, out_filename, pProfile, &pTopology);
		if (FAILED(hr))
		{
			CComBSTR bstr;
			bstr = ItsError::GetCoLastErrorInfoDescription();
			return hr;// Error(L"Error executing MFCreateTranscodeTopology", IID_INCFMp3Encoder, hr);
		}

		hr = CSession::Create(&pSession);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing CSession::Create", IID_INCFMp3Encoder, hr);
		}

		hr = pSession->StartEncodingSession(pTopology);
		if (FAILED(hr))
		{
			return hr;// Error(L"Error executing StartEncodingSession", IID_INCFMp3Encoder, hr);
		}

		this->ResetWorkingVariables();

		hr = RunEncodingSession(pSession, duration);

		if (pSource)
		{
			pSource->Shutdown();
		}

		if (SUCCEEDED(hr)) {
			this->m_bAsyncExtractionFinsihed = true;
			this->m_lAsyncProgressValue = 100;
			this->m_bAsyncExtractionSucceeded = true;
		}
		else {
			this->m_bAsyncExtractionSucceeded = false;
		}

		/*if (pINCFMp3Tag != nullptr) {
			//hr = pINCFMp3Tag->SaveToFile(out_filename);
			if (FAILED(hr)) {
				return hr;// Error(L"Error executing WMCreateEditor", IID_INCFMp3Encoder, hr);
			}		
		}*/

		return hr;
	}

	
};

#endif
