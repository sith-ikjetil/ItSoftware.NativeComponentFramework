// CNCFWmaEncoder.h : Declaration of the CNCFWmaEncoder

#pragma once
#include "resource.h"       // main symbols

#include "../Include/itsoftware.h"
#include "../Include/itsoftware-com.h"
#include "CSession.h"
#include "CEncoder.h"

using namespace ItSoftware;
using namespace ItSoftware::COM;

#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFWmaEncoder

class ATL_NO_VTABLE CNCFWmaEncoder :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFWmaEncoder, &CLSID_NCFWmaEncoder>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFWmaEncoder, &IID_INCFWmaEncoder, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CEncoder* m_pEncoder;
	CComBSTR m_bstrAsyncExtractionErrorMessage;
	
	STDMETHOD(EncodeWork)( /*[in]*/ INCFEncoderParams* pINCFEncodingParams, /*[in]*/ INCFWmaTag *pINCFWmaTag,	/*[in]*/ BSTR in_filename,	/*[in]*/ BSTR out_filename,	/*[in]*/ VARIANT_BOOL async);

	friend DWORD WINAPI WmaEncoderThread(PVOID pvParam);
public:
	CNCFWmaEncoder()
	{
		this->m_pEncoder = new CEncoder(MFAudioFormat_WMAudioV9, MFTranscodeContainerType_ASF);
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFWMAENCODER)

DECLARE_NOT_AGGREGATABLE(CNCFWmaEncoder)

BEGIN_COM_MAP(CNCFWmaEncoder)
	COM_INTERFACE_ENTRY(INCFWmaEncoder)
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
	STDMETHOD(Encode)(/*[in]*/ INCFEncoderParams* pINCFEncoderParams, /*[in]*/ INCFWmaTag *pINCFWmaTag, /*[in]*/ BSTR in_filename, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL async);
	STDMETHOD(get_ExtractionFinished)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionSucceeded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionErrorMessage)( /*[out, retval]*/ BSTR *error_message);
	STDMETHOD(GetExtractionProgressPercent)( /*[out, retval]*/ long *progress_value);


};

OBJECT_ENTRY_AUTO(__uuidof(NCFWmaEncoder), CNCFWmaEncoder)
