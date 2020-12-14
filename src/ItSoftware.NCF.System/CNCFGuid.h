// CNCFGuid.h : Declaration of the CNCFGuid

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFSystem_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFGuid

class ATL_NO_VTABLE CNCFGuid :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFGuid, &CLSID_NCFGuid>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFGuid, &IID_INCFGuid, &LIBID_ItSoftwareNCFSystemLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNCFGuid()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFGUID)

DECLARE_NOT_AGGREGATABLE(CNCFGuid)

BEGIN_COM_MAP(CNCFGuid)
	COM_INTERFACE_ENTRY(INCFGuid)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	// IKKSGUID
	STDMETHOD(CreateGuidType)( /*[in]*/ EGUIDTYPE type, /*[out, retval]*/ BSTR *pbstrGUID);	
	STDMETHOD(CreateGuid)(/*[out, retval]*/ BSTR *pbstrGUID);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFGuid), CNCFGuid)
