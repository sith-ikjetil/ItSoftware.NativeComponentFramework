// CNCFNetwork.h : Declaration of the CNCFNetwork

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFNetwork

class ATL_NO_VTABLE CNCFNetwork :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFNetwork, &CLSID_NCFNetwork>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFNetwork, &IID_INCFNetwork, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	STDMETHOD( EnumerateNetworkResourcesHelper )(DWORD scope, DWORD type, DWORD usage, NETRESOURCEW* pNetResource, INCFCollectionList** ppINCFCollectionList);
public:
	CNCFNetwork()
	{
		m_pUnkMarshaler = NULL;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFNETWORK )

	DECLARE_NOT_AGGREGATABLE( CNCFNetwork )

	BEGIN_COM_MAP( CNCFNetwork )
		COM_INTERFACE_ENTRY( INCFNetwork )
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


	STDMETHOD( ConnectUNC )( /*[in]*/ BSTR remoteName, /*[in]*/ BSTR username, /*[in]*/ BSTR password, VARIANT_BOOL rememberOnLogin, /*[out, retval]*/ VARIANT_BOOL* status);
	STDMETHOD( EnumerateAllNetworkResources )( /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList);
	STDMETHOD( EnumerateNetworkResources)( /*[in]*/ INCFNetworkResource* pINCFNetworkResource, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList );
	STDMETHOD( EnumerateNetworkShares )( /*[in]*/ BSTR remoteName, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList);
};

OBJECT_ENTRY_AUTO( __uuidof(NCFNetwork), CNCFNetwork )
