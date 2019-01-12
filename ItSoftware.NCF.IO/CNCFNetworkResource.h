// CNCFNetworkResource.h : Declaration of the CNCFNetworkResource

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFNetworkResource

class ATL_NO_VTABLE CNCFNetworkResource :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFNetworkResource, &CLSID_NCFNetworkResource>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFNetworkResource, &IID_INCFNetworkResource, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	DWORD  m_dwScope;
	DWORD  m_dwType;
	DWORD  m_dwDisplayType;
	DWORD  m_dwUsage;
	CComBSTR m_bstrLocalName;
	CComBSTR m_bstrRemoteName;
	CComBSTR m_bstrComment;
	CComBSTR m_bstrProvider;

public:
	CNCFNetworkResource()
	{
		m_pUnkMarshaler = NULL;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFNETWORKRESOURCE )

	DECLARE_NOT_AGGREGATABLE( CNCFNetworkResource )

	BEGIN_COM_MAP( CNCFNetworkResource )
		COM_INTERFACE_ENTRY( INCFNetworkResource )
		COM_INTERFACE_ENTRY( IDispatch )
		COM_INTERFACE_ENTRY( ISupportErrorInfo )
		COM_INTERFACE_ENTRY_AGGREGATE( IID_IMarshal, m_pUnkMarshaler.p )
	END_COM_MAP()

	// ISupportsErrorInfo
	STDMETHOD( InterfaceSupportsErrorInfo )(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p );
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	STDMETHOD( put_Scope )( /*[in]*/ long scope);
	STDMETHOD( get_Scope )( /*[out, retval]*/ long* scope);
	STDMETHOD( put_Type )( /*[in]*/ long type);
	STDMETHOD( get_Type )( /*[out, retval]*/ long* type);
	STDMETHOD( put_DisplayType )( /*[in]*/ long displayType);
	STDMETHOD( get_DisplayType )( /*[out, retval]*/ long* displayType);
	STDMETHOD( put_Usage )( /*[in]*/ long usage);
	STDMETHOD( get_Usage )( /*[out, retval]*/ long* usage);
	STDMETHOD( put_LocalName )( /*[in]*/ BSTR localName);
	STDMETHOD( get_LocalName )( /*[out, retval]*/ BSTR* localName);
	STDMETHOD( put_RemoteName )( /*[in]*/ BSTR remoteName);
	STDMETHOD( get_RemoteName )( /*[out, retval]*/ BSTR* remoteName);
	STDMETHOD( put_Comment )( /*[in]*/ BSTR comment);
	STDMETHOD( get_Comment )( /*[out, retval]*/ BSTR* comment);
	STDMETHOD( put_Provider )( /*[in]*/ BSTR provider);
	STDMETHOD( get_Provider )( /*[out, retval]*/ BSTR* provider);
};

OBJECT_ENTRY_AUTO( __uuidof(NCFNetworkResource), CNCFNetworkResource )
