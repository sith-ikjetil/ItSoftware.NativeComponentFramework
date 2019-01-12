// CNCFWavEncoder.h : Declaration of the CNCFWavEncoder

#pragma once
#include "resource.h"       // main symbols
#include "windows.h"
#include "wmcodecdsp.h"
#include "mftransform.h"
#include "mfidl.h"
#include "mfapi.h"
#include "shlwapi.h"
#include "csession.h"
#include "CEncoder.h"
#include "mfreadwrite.h"

#include "ItSoftwareNCFAudio_i.h"

struct WavProfileInfo
{
	UINT32  samplesPerSec;
	UINT32  numChannels;
	UINT32  bitsPerSample;
	UINT32  bytesPerSec;
};

typedef struct WAVHEADER {
	char	szRIFF[4];      // 'RIFF' 
	DWORD	dwFileSize;     // Filesize - 8. 8=("RIFF"+"fmt ") 
	char	szWAVEfmt_[8];	// 'WAVEfmt ' 
	DWORD	dwfmtLen;       // 0x10 
	WORD	wWaveType;      // type wave format. PCM-header eller 0x01 
	WORD	wChannels;      // channels. 1-mono, 2-stereo 
	DWORD	nSamplesPrSec;  // samples pr second 
	DWORD	nAvgBytesPerSec;// bytes pr. second 
	WORD	wBlockAlign;	// bytes pr. sample 
	WORD	wBitsPerSample; // bits pr. channel 
	char	szDATA[4];		// text: 'data' 
	DWORD	dwDataSize;		// sound data size 
} WAVHEADER, *LPWAVHEADER;

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFWavEncoder

class ATL_NO_VTABLE CNCFWavEncoder :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFWavEncoder, &CLSID_NCFWavEncoder>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFWavEncoder, &IID_INCFWavEncoder, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CEncoder* m_pEncoder;
	CComBSTR m_bstrAsyncExtractionErrorMessage;	
	
	STDMETHOD(EncodeWork)( /*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ BSTR in_filename,	/*[in]*/ BSTR out_filename);
	STDMETHOD(WriteWaveData)(IMFSourceReader *pReader, INCFEncoderParams* pINCFEncoderParams, INCFStream* pINCFstream);
	STDMETHOD(ConfigureAudioStream)(IMFSourceReader *pReader, INCFEncoderParams* pINCFEncoderParams, IMFMediaType **ppPCMAudio);

	WAVHEADER FillWavHeader(INCFEncoderParams* pINCFEncoderParams, long fileSize);

	friend DWORD WINAPI WavEncoderThread(PVOID pvParam);
public:
	CNCFWavEncoder()
	{
		this->m_pEncoder = new CEncoder(MFAudioFormat_PCM, MFTranscodeContainerType_WAVE);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFWAVENCODER)

DECLARE_NOT_AGGREGATABLE(CNCFWavEncoder)

BEGIN_COM_MAP(CNCFWavEncoder)
	COM_INTERFACE_ENTRY(INCFWavEncoder)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		delete this->m_pEncoder;
	}

public:

	STDMETHOD(Encode)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async);
	STDMETHOD(EncodeToStream)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ BSTR in_filename, /*[in]*/ INCFStream* pINCFStream);
	STDMETHOD(get_ExtractionFinished)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionSucceeded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionErrorMessage)( /*[out, retval]*/ BSTR *error_message);
	STDMETHOD(GetExtractionProgressPercent)( /*[out, retval]*/ long *progress_value);	
	STDMETHOD(WriteWaveHeader)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ long fileSize, /*[in]*/ BYTE* pWaveHeader);
	STDMETHOD(WriteWaveHeaderToStream)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ long fileSize, /*[in]*/ INCFStream* pINCFStream);
};

OBJECT_ENTRY_AUTO(__uuidof(NCFWavEncoder), CNCFWavEncoder)
