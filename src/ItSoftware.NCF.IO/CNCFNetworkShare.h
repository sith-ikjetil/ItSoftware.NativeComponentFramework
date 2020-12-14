// CNCFNetworkShare.h : Declaration of the CNCFNetworkShare

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFNetworkShare

class ATL_NO_VTABLE CNCFNetworkShare :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFNetworkShare, &CLSID_NCFNetworkShare>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFNetworkShare, &IID_INCFNetworkShare, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	CComBSTR m_bstrNetName;
	DWORD m_dwType;
	CComBSTR m_bstrRemark;
	DWORD m_dwPermissions;
	DWORD m_dwMaxUses;
	DWORD m_dwCurrentUses;
	CComBSTR m_bstrPath;
	CComBSTR m_bstrPassword;
public:
	CNCFNetworkShare()
	{
		m_pUnkMarshaler = NULL;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFNETWORKSHARE )

	DECLARE_NOT_AGGREGATABLE( CNCFNetworkShare )

	BEGIN_COM_MAP( CNCFNetworkShare )
		COM_INTERFACE_ENTRY( INCFNetworkShare )
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

	STDMETHOD( put_NetName )( /*[in]*/ BSTR netName);
	STDMETHOD( get_NetName )( /*[out, retval]*/ BSTR* netName);
	STDMETHOD( put_Type )( /*[in]*/ DWORD type);
	STDMETHOD( get_Type )( /*[out, retval]*/ DWORD* type);
	STDMETHOD( put_Remark )( /*[in]*/ BSTR remark);
	STDMETHOD( get_Remark )( /*[out, retval]*/ BSTR* remark);
	STDMETHOD( put_Permissions )( /*[in]*/ DWORD permissions);
	STDMETHOD( get_Permissions )( /*[out, retval]*/ DWORD* permissions);
	STDMETHOD( put_MaxUses )( /*[in]*/ DWORD maxUses);
	STDMETHOD( get_MaxUses )( /*[out, retval]*/ DWORD* maxUses);
	STDMETHOD( put_CurrentUses )( /*[in]*/ DWORD currentUses);
	STDMETHOD( get_CurrentUses )( /*[out, retval]*/ DWORD* currentUses);
	STDMETHOD( put_Path )( /*[in]*/ BSTR path);
	STDMETHOD( get_Path )( /*[out, retval]*/ BSTR* path);
	STDMETHOD( put_Password )( /*[in]*/ BSTR password);
	STDMETHOD( get_Password )( /*[out, retval]*/ BSTR* password);
};

OBJECT_ENTRY_AUTO( __uuidof(NCFNetworkShare), CNCFNetworkShare )
