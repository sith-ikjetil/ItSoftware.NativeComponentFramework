// CNCFAacEncoder.h : Declaration of the CNCFAacEncoder

#pragma once
#include "resource.h"       // main symbols
#include "stdafx.h"
#include "CNCFMp3Encoder.h"
#include "windows.h"
#include "wmcodecdsp.h"
#include "mftransform.h"
#include "mfidl.h"
#include "mfapi.h"
#include "shlwapi.h"
#include "csession.h"
#include "CEncoder.h"
#include "ItSoftwareNCFAudio_i.h"
#include "mferror.h"
#include "wmsdkidl.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFAacEncoder

class ATL_NO_VTABLE CNCFAacEncoder :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFAacEncoder, &CLSID_NCFAacEncoder>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFAacEncoder, &IID_INCFAacEncoder, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CEncoder* m_pEncoder;
	CComBSTR m_bstrAsyncExtractionErrorMessage;	
	
	STDMETHOD(EncodeWork)( /*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFAacTag *pINCFMp3Tag,	/*[in]*/ BSTR in_filename,	/*[in]*/ BSTR out_filename,	/*[in]*/ VARIANT_BOOL async);

	friend DWORD WINAPI AacEncoderThread(PVOID pvParam);
public:
	CNCFAacEncoder()
	{
		this->m_pEncoder = new CEncoder(MFAudioFormat_AAC, MFTranscodeContainerType_MPEG4);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFAACENCODER)

DECLARE_NOT_AGGREGATABLE(CNCFAacEncoder)

BEGIN_COM_MAP(CNCFAacEncoder)
	COM_INTERFACE_ENTRY(INCFAacEncoder)
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

	STDMETHOD(Encode)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFAacTag *pINCFAacTag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async);
	STDMETHOD(get_ExtractionFinished)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionSucceeded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionErrorMessage)( /*[out, retval]*/ BSTR *error_message);
	STDMETHOD(GetExtractionProgressPercent)( /*[out, retval]*/ long *progress_value);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFAacEncoder), CNCFAacEncoder)
