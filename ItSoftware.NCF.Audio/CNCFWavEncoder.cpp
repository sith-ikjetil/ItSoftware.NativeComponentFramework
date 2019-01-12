// CNCFWavEncoder.cpp : Implementation of CNCFWavEncoder

#include "stdafx.h"
#include "CNCFWavEncoder.h"
#include "windows.h"
#include "wmcodecdsp.h"
#include "mftransform.h"
#include "mfreadwrite.h"
#include "mfidl.h"
#include "mfapi.h"
#include "shlwapi.h"
#include "mferror.h"
#include "wmsdkidl.h"
#include "../ItSoftware.NCF.IO/ItSoftwareNCFIO_i.h"
#include "../Include/itsoftware.h"
#include "../Include/itsoftware-com.h"
// mfuuid.lib evr.lib mf.lib mfplat.lib  mfreadwrite.lib dxva2.lib mfplay.lib 
using namespace ItSoftware;
using namespace ItSoftware::COM;

DWORD WINAPI WavEncoderThread(PVOID pvParam);

// CNCFWavEncoder
STDMETHODIMP CNCFWavEncoder::InterfaceSupportsErrorInfo(REFIID riid)
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
	CNCFWavEncoder *pCNCFWavEncoder;
	INCFEncoderParams* pINCFEncoderParams;	
	BSTR in_filename;
	BSTR out_filename;
	VARIANT_BOOL async;
};


STDMETHODIMP CNCFWavEncoder::Encode(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async)
{
	if (async == VARIANT_FALSE) {
		return EncodeWork(pINCFEncoderParams, in_filename, out_filename);
	}

	Encode_Param *pparam = new Encode_Param();
	pparam->pINCFEncoderParams = pINCFEncoderParams;
	pparam->out_filename = CComBSTR(out_filename).Copy();
	pparam->in_filename = CComBSTR(in_filename).Copy();
	pparam->pCNCFWavEncoder = this;	
	pparam->async = async;

	DWORD dwExtractTrackThreadID(0);
	HANDLE hThread = CreateThread(NULL, 0, WavEncoderThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::EncodeToStream(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ BSTR in_filename, /*[in]*/ INCFStream* pINCFStream)
{
	if (pINCFEncoderParams == nullptr) {
		return Error(L"Argument 'pINCFEncoderParams' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}
	if (in_filename == nullptr) {
		return Error(L"Argument 'in_filename' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}
	if (SysStringLen(in_filename) == 0) {
		return Error(L"Argument 'in_filename' has invalid length.", IID_INCFWavEncoder, E_INVALIDARG);
	}

	CComPtr<INCFFile> pINCFFile;
	HRESULT hr = pINCFFile.CoCreateInstance(L"ItSoftware.NCF.File");
	if (FAILED(hr)) {
		return Error(L"Could not create type ItSoftware.NCF.File.", IID_INCFWavEncoder, hr);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	hr = pINCFFile->Exists(in_filename, &status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_FALSE) {
		return Error(L"Could not find file.", IID_INCFWavEncoder, E_FAIL);
	}

	// OK go ahead and encode to wav

	CComPtr<IMFSourceReader> pIMFSourceReader;

	hr = MFStartup(MF_VERSION);
	if (FAILED(hr)) {
		return hr;
	}

	hr = MFCreateSourceReaderFromURL(CComBSTR(in_filename).operator LPWSTR(), NULL, &pIMFSourceReader);
	if (FAILED(hr))
	{
		return Error(L"Could not create source reader from filename.", IID_INCFWavEncoder, hr);
	}
	
	hr = WriteWaveData(pIMFSourceReader, pINCFEncoderParams, pINCFStream);
	if (FAILED(hr))
	{
		return Error(L"Could not write wave data to stream, or writing failed.", IID_INCFWavEncoder, hr);
	}
		
	MFShutdown();

	return S_OK;
}

//-------------------------------------------------------------------
// WriteWaveFile
//
// Writes a WAVE file by getting audio data from the source reader.
//
//-------------------------------------------------------------------

STDMETHODIMP CNCFWavEncoder::WriteWaveData(IMFSourceReader *pReader, INCFEncoderParams* pINCFEncoderParams,  INCFStream* pINCFStream)	
{	
	DWORD cbHeader = 0;         // Size of the WAVE file header, in bytes.	

	CComPtr<IMFMediaType> pIMFMediaType;    // Represents the PCM audio format.

	// Configure the source reader to get uncompressed PCM audio from the source file.
	HRESULT hr = ConfigureAudioStream(pReader, pINCFEncoderParams, &pIMFMediaType);
	if (FAILED(hr)) {
		return hr;
	}

	// Write the WAVE file header.
	//if (SUCCEEDED(hr))
	//{
	//	hr = WriteWaveHeader(hFile, pIMFMediaType, &cbHeader);
	//}

		
	DWORD cbAudioData = 0;
	DWORD cbBuffer = 0;
	BYTE *pAudioData = NULL;

	

	// Get audio samples from the source reader.
	while (true)
	{
		CComPtr<IMFSample> pSample;
		CComPtr<IMFMediaBuffer> pBuffer;

		DWORD dwFlags = 0;

		// Read the next sample.
		hr = pReader->ReadSample(
			(DWORD)MF_SOURCE_READER_FIRST_AUDIO_STREAM,
			0, NULL, &dwFlags, NULL, &pSample);

		if (FAILED(hr) || pSample == nullptr) { break; }

		if (dwFlags & MF_SOURCE_READERF_CURRENTMEDIATYPECHANGED)
		{
			//printf("Type change - not supported by WAVE file format.\n");
			break;
		}
		if (dwFlags & MF_SOURCE_READERF_ENDOFSTREAM)
		{
			//printf("End of input file.\n");
			break;
		}

		if (pSample == NULL)
		{
			//printf("No sample\n");
			continue;
		}

		// Get a pointer to the audio data in the sample.

		hr = pSample->ConvertToContiguousBuffer(&pBuffer);

		if (FAILED(hr)) { break; }

		hr = pBuffer->Lock(&pAudioData, NULL, &cbBuffer);

		if (FAILED(hr)) 
		{
			pBuffer->Unlock();
			break; 
		}		

		hr = pINCFStream->WriteFrom(pAudioData, cbBuffer);

		if (FAILED(hr)) 
		{
			pBuffer->Unlock();
			break; 
		}

		// Unlock the buffer.
		hr = pBuffer->Unlock();
		pAudioData = nullptr;

		if (FAILED(hr)) 
		{
			pBuffer->Unlock();
			break; 
		}		

		pBuffer->Unlock();
	}

	// Fix up the RIFF headers with the correct sizes.
	//if (SUCCEEDED(hr))
	//{
	//	hr = FixUpChunkSizes(hFile, cbHeader, cbAudioData);
	//}
	

	return hr;
}
/*
HRESULT WriteWaveHeader(
HANDLE hFile,               // Output file.
IMFMediaType *pMediaType,   // PCM audio format.
DWORD *pcbWritten           // Receives the size of the header.
)
{
HRESULT hr = S_OK;
UINT32 cbFormat = 0;

WAVEFORMATEX *pWav = NULL;

*pcbWritten = 0;

// Convert the PCM audio format into a WAVEFORMATEX structure.
hr = MFCreateWaveFormatExFromMFMediaType(pMediaType, &pWav, &cbFormat);

// Write the 'RIFF' header and the start of the 'fmt ' chunk.
if (SUCCEEDED(hr))
{
DWORD header[] = {
// RIFF header
FCC('RIFF'),
0,
FCC('WAVE'),
// Start of 'fmt ' chunk
FCC('fmt '),
cbFormat
};

DWORD dataHeader[] = { FCC('data'), 0 };

hr = WriteToFile(hFile, header, sizeof(header));

// Write the WAVEFORMATEX structure.
if (SUCCEEDED(hr))
{
hr = WriteToFile(hFile, pWav, cbFormat);
}

// Write the start of the 'data' chunk

if (SUCCEEDED(hr))
{
hr = WriteToFile(hFile, dataHeader, sizeof(dataHeader));
}

if (SUCCEEDED(hr))
{
*pcbWritten = sizeof(header) + cbFormat + sizeof(dataHeader);
}
}


CoTaskMemFree(pWav);
return hr;
}

*/

STDMETHODIMP CNCFWavEncoder::ConfigureAudioStream(IMFSourceReader *pReader, INCFEncoderParams* pINCFEncoderParams,  IMFMediaType **ppPCMAudio)
{
	CComPtr<IMFMediaType> pUncompressedAudioType = NULL;
	CComPtr<IMFMediaType> pPartialType = NULL;

	// Select the first audio stream, and deselect all other streams.
	HRESULT hr = pReader->SetStreamSelection(
		(DWORD)MF_SOURCE_READER_ALL_STREAMS, FALSE);

	if (SUCCEEDED(hr))
	{
		hr = pReader->SetStreamSelection(
			(DWORD)MF_SOURCE_READER_FIRST_AUDIO_STREAM, TRUE);
	}

	// Create a partial media type that specifies uncompressed PCM audio.
	hr = MFCreateMediaType(&pPartialType);

	if (SUCCEEDED(hr))
	{
		hr = pPartialType->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Audio);
	}

	if (SUCCEEDED(hr))
	{
		hr = pPartialType->SetGUID(MF_MT_SUBTYPE, MFAudioFormat_PCM);
	}

	long paramSamplesPerSecond(0);
	hr = pINCFEncoderParams->get_SamplesPerSecond(&paramSamplesPerSecond);

	short paramBitsPerSample(0);
	hr = pINCFEncoderParams->get_BitsPerSample(&paramBitsPerSample);

	short paramNumberOfChannels(0);
	hr = pINCFEncoderParams->get_NumberOfChannels(&paramNumberOfChannels);


	pPartialType->SetUINT32(MF_MT_AUDIO_SAMPLES_PER_SECOND, paramSamplesPerSecond);
	pPartialType->SetUINT32(MF_MT_AUDIO_NUM_CHANNELS, paramNumberOfChannels);
	pPartialType->SetUINT32(MF_MT_AUDIO_BITS_PER_SAMPLE, paramBitsPerSample);

	// Set this type on the source reader. The source reader will
	// load the necessary decoder.
	if (SUCCEEDED(hr))
	{
		hr = pReader->SetCurrentMediaType(
			(DWORD)MF_SOURCE_READER_FIRST_AUDIO_STREAM,
			NULL, pPartialType);
	}

	// Get the complete uncompressed format.
	if (SUCCEEDED(hr))
	{
		hr = pReader->GetCurrentMediaType(
			(DWORD)MF_SOURCE_READER_FIRST_AUDIO_STREAM,
			&pUncompressedAudioType);
	}

	// Ensure the stream is selected.
	if (SUCCEEDED(hr))
	{
		hr = pReader->SetStreamSelection(
			(DWORD)MF_SOURCE_READER_FIRST_AUDIO_STREAM,
			TRUE);
	}

	// Return the PCM format to the caller.
	if (SUCCEEDED(hr))
	{
		*ppPCMAudio = pUncompressedAudioType.Detach();		
	}
	
	return hr;
}

DWORD WINAPI WavEncoderThread(PVOID pvParam)
{
	Encode_Param *pparam = reinterpret_cast<Encode_Param*>(pvParam);

	HRESULT hr = pparam->pCNCFWavEncoder->EncodeWork(pparam->pINCFEncoderParams, pparam->in_filename, pparam->out_filename);

	SysFreeString(pparam->out_filename);
	SysFreeString(pparam->in_filename);
	delete pparam;

	return 0;
}

STDMETHODIMP CNCFWavEncoder::EncodeWork( /*[in]*/ INCFEncoderParams* pINCFEncoderParams,	
	/*[in]*/ BSTR in_filename,
	/*[in]*/ BSTR out_filename)
{
	HRESULT hr = this->m_pEncoder->EncodeWork(pINCFEncoderParams, in_filename, out_filename);
	if (FAILED(hr)) {
		return Error("Encoder FAILED!", IID_INCFAacEncoder, hr);
	}	

	return hr;
}

STDMETHODIMP CNCFWavEncoder::get_ExtractionFinished( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionFinished();
	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::get_ExtractionSucceeded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) {
		return Error(L"status is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*status = this->m_pEncoder->GetAsyncExtractionSucceeded();
	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::get_ExtractionErrorMessage( /*[out, retval]*/ BSTR *error_message)
{
	if (error_message == nullptr) {
		return Error(L"error_message is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*error_message = this->m_bstrAsyncExtractionErrorMessage.Copy();
	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::GetExtractionProgressPercent( /*[out, retval]*/ long *progress_value)
{
	if (progress_value == nullptr) {
		return Error(L"progress_value is NULL", IID_INCFAacEncoder, E_INVALIDARG);
	}

	*progress_value = this->m_pEncoder->GetAsyncProgressValue();
	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::WriteWaveHeader(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ long fileSize, /*[in]*/ BYTE* pWaveHeader)
{
	if (pINCFEncoderParams == nullptr) {
		return Error(L"Argument 'pINCFEncoderParams' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}
	if (pWaveHeader == nullptr) {
		return Error(L"Argument 'pWaveHeader' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}

	WAVHEADER wh = FillWavHeader(pINCFEncoderParams, fileSize);

	memcpy(pWaveHeader, &wh, sizeof(wh));

	return S_OK;
}

STDMETHODIMP CNCFWavEncoder::WriteWaveHeaderToStream(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ long fileSize, /*[in]*/ INCFStream* pINCFStream)
{
	if (pINCFEncoderParams == nullptr) {
		return Error(L"Argument 'pINCFEncoderParams' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL.", IID_INCFWavEncoder, E_INVALIDARG);
	}

	WAVHEADER wh = FillWavHeader(pINCFEncoderParams, fileSize);

	HRESULT hr = pINCFStream->WriteFrom((BYTE*)&wh, sizeof(wh));
	if (FAILED(hr)) {
		return hr;
	}

	return S_OK;
}

WAVHEADER CNCFWavEncoder::FillWavHeader(INCFEncoderParams* pINCFEncoderParams, long fileSize)
{
	long paramSamplesPerSecond(0);
	pINCFEncoderParams->get_SamplesPerSecond(&paramSamplesPerSecond);

	short paramBitsPerSample(0);
	pINCFEncoderParams->get_BitsPerSample(&paramBitsPerSample);

	short paramNumberOfChannels(0);
	pINCFEncoderParams->get_NumberOfChannels(&paramNumberOfChannels);

	WAVHEADER wh = { 0 };

	wh.dwDataSize = fileSize - sizeof(WAVHEADER);
	wh.dwFileSize = fileSize - 8;
	wh.nAvgBytesPerSec = ((paramNumberOfChannels * paramBitsPerSample * paramSamplesPerSecond) / 8);
	wh.nSamplesPrSec = paramSamplesPerSecond;
	wh.wChannels = paramNumberOfChannels;
	wh.wBitsPerSample = paramBitsPerSample;
	wh.wBlockAlign = (paramBitsPerSample / 8) * paramNumberOfChannels;
	wh.dwfmtLen = 0x10;
	wh.wWaveType = 0x01;
	wh.szDATA[0] = 'd';
	wh.szDATA[1] = 'a';
	wh.szDATA[2] = 't';
	wh.szDATA[3] = 'a';
	wh.szRIFF[0] = 'R';
	wh.szRIFF[1] = 'I';
	wh.szRIFF[2] = 'F';
	wh.szRIFF[3] = 'F';
	wh.szWAVEfmt_[0] = 'W';
	wh.szWAVEfmt_[1] = 'A';
	wh.szWAVEfmt_[2] = 'V';
	wh.szWAVEfmt_[3] = 'E';
	wh.szWAVEfmt_[4] = 'f';
	wh.szWAVEfmt_[5] = 'm';
	wh.szWAVEfmt_[6] = 't';
	wh.szWAVEfmt_[7] = ' ';

	return wh;
}