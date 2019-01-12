// CNCFMp3Encoder.h : Declaration of the CNCFMp3Encoder

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

#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;





// CNCFMp3Encoder

class ATL_NO_VTABLE CNCFMp3Encoder :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFMp3Encoder, &CLSID_NCFMp3Encoder>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFMp3Encoder, &IID_INCFMp3Encoder, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{			
	CEncoder* m_pEncoder;
	CComBSTR m_bstrAsyncExtractionErrorMessage;
			
	STDMETHOD(EncodeWork)( /*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFMp3Tag *pINCFMp3Tag,	/*[in]*/ BSTR in_filename,	/*[in]*/ BSTR out_filename );

	friend DWORD WINAPI Mp3EncoderThread(PVOID pvParam);
public:
	CNCFMp3Encoder()
	{
		this->m_pEncoder = new CEncoder(MFAudioFormat_MP3, MFTranscodeContainerType_MP3);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFMP3ENCODER)

DECLARE_NOT_AGGREGATABLE(CNCFMp3Encoder)

BEGIN_COM_MAP(CNCFMp3Encoder)
	COM_INTERFACE_ENTRY(INCFMp3Encoder)
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

	STDMETHOD(Encode)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFMp3Tag *pINCFMp3Tag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async);
	STDMETHOD(get_ExtractionFinished)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionSucceeded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionErrorMessage)( /*[out, retval]*/ BSTR *error_message);
	STDMETHOD(GetExtractionProgressPercent)( /*[out, retval]*/ long *progress_value);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFMp3Encoder), CNCFMp3Encoder)
