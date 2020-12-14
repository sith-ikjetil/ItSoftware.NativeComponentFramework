// CNCFEncoderParams.h : Declaration of the CNCFEncoderParams

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFEncoderParams

class ATL_NO_VTABLE CNCFEncoderParams :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFEncoderParams, &CLSID_NCFEncoderParams>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFEncoderParams, &IID_INCFEncoderParams, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	short m_wNumberOfChannels;
	long m_lSamplesPerSecond;
	short m_wBitsPerSample;
public:
	CNCFEncoderParams()
	{
		this->m_wBitsPerSample = 16;
		this->m_lSamplesPerSecond = 44100;
		this->m_wNumberOfChannels = 2;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFENCODERPARAMS)

DECLARE_NOT_AGGREGATABLE(CNCFEncoderParams)

BEGIN_COM_MAP(CNCFEncoderParams)
	COM_INTERFACE_ENTRY(INCFEncoderParams)
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
	}

public:

	
	STDMETHOD(get_NumberOfChannels)(/*[out, retval]*/ short* count);	
	STDMETHOD(put_NumberOfChannels)(/*[in]*/ short count);	
	STDMETHOD(get_SamplesPerSecond)(/*[out, retval]*/ long* samples);	
	STDMETHOD(put_SamplesPerSecond)(/*[in]*/ long samples);	
	STDMETHOD(get_BitsPerSample)(/*[out, retval]*/ short* bits);	
	STDMETHOD(put_BitsPerSample)(/*[in]*/ short bits);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFEncoderParams), CNCFEncoderParams)
