// CNCFRegistry.h : Declaration of the CNCFRegistry

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFSystem_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFRegistry

class ATL_NO_VTABLE CNCFRegistry :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFRegistry, &CLSID_NCFRegistry>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFRegistry, &IID_INCFRegistry, &LIBID_ItSoftwareNCFSystemLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	bool CheckHKey(EREGCLASS a_regclass, HKEY &a_hKey) throw();
	CComBSTR GetErrorDesc(DWORD dwCode);
public:
	CNCFRegistry()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFREGISTRY)

DECLARE_NOT_AGGREGATABLE(CNCFRegistry)

BEGIN_COM_MAP(CNCFRegistry)
	COM_INTERFACE_ENTRY(INCFRegistry)
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
	// IKKSRegistry
	STDMETHOD(DeleteKey)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key);

	STDMETHOD(CreateKey)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[in]*/ BSTR default_data);

	STDMETHOD(AddValue)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[in]*/ BSTR value,
		/*[in]*/ BSTR data);

	STDMETHOD(DeleteValue)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[in]*/ BSTR value);

	STDMETHOD(ReadValue)(	/*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[in]*/ BSTR value,
		/*[out, retval]*/ BSTR *data);

	STDMETHOD(EnumerateKeys)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[out, retval]*/ INCFCollectionList **ppINCFCollectionList);

	STDMETHOD(EnumerateValues)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[out, retval]*/ INCFCollectionList **ppINCFCollectionList);

	STDMETHOD(EnumerateStringValues)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap);

	STDMETHOD(StoreCollection)( /*[in]*/ EREGCLASS eregclass,
		/*[in]*/ BSTR path,
		/*[in]*/ BSTR key,
		/*[in]*/ INCFCollectionMap *pINCFCollectionMap);


};

OBJECT_ENTRY_AUTO(__uuidof(NCFRegistry), CNCFRegistry)
