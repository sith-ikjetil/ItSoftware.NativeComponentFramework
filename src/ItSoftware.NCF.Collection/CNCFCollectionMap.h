// CNCFMap.h : Declaration of the CNCFMap

#pragma once
#include "resource.h"       // main symbols

#include <vector>
using namespace std;

#include "ItSoftwareNCFCollection_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

struct MAP_ITEM
{
	CComBSTR	bstrKey;
	CComVariant vtValue;


	bool operator<(const MAP_ITEM &mi)
	{
		if (bstrKey < mi.bstrKey)
			return true;

		return false;
	}

};
bool operator<(const MAP_ITEM &mi1, const MAP_ITEM &mi2)
{
	return true;
}


// CNCFMap

class ATL_NO_VTABLE CNCFCollectionMap :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFCollectionMap, &CLSID_NCFCollectionMap>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFCollectionMap, &IID_INCFCollectionMap, &LIBID_ItSoftwareNCFCollectionLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
protected:
	vector<MAP_ITEM> m_vMap;
public:
	CNCFCollectionMap()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFMAP)

DECLARE_NOT_AGGREGATABLE(CNCFCollectionMap)

BEGIN_COM_MAP(CNCFCollectionMap)
	COM_INTERFACE_ENTRY(INCFCollectionMap)
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
		for ( auto itr = this->m_vMap.begin(); itr != this->m_vMap.end(); itr++ )
		{
			if ( (itr->vtValue.vt == VT_UNKNOWN || itr->vtValue.vt == VT_DISPATCH) && itr->vtValue.punkVal != nullptr )
			{
				itr->vtValue.punkVal->Release();
			}
		}
	}

public:


	// IKKSMap
	STDMETHOD(get_Empty)( /*[out, retval]*/ VARIANT_BOOL *pvtbEmpty);
	STDMETHOD(get_Size)( /*[out, retval]*/ long *plSize);
	STDMETHOD(Clear)();
	STDMETHOD(AddItem)( /*[in]*/ BSTR bstrKey, /*[in]*/ VARIANT vtValue);
	STDMETHOD(RemoveItemByKey)( /*[in]*/ BSTR bstrKey);
	STDMETHOD(RemoveItemByIndex)( /*[in]*/ long lIndex);
	STDMETHOD(UpdateValueByKey)( /*[in]*/ BSTR bstrKey, /*[in]*/ VARIANT vtValue);
	STDMETHOD(UpdateValueByIndex)( /*[in]*/ long lIndex, /*[in]*/ VARIANT vtValue);
	STDMETHOD(GetValueByKey)( /*[in]*/ BSTR bstrKey, /*[out, retval]*/ VARIANT *pvtValue);
	STDMETHOD(GetValueByIndex)( /*[in]*/ long lIndex, /*[out, retval]*/ VARIANT *pvtValue);
	STDMETHOD(GetKeyByIndex)( /*[in]*/ long lIndex, /*[out, retval]*/ BSTR *pbstrKey);
	STDMETHOD(Sort)();
	STDMETHOD(GetItemByIndex)(/*[in]*/ long lIndex, /*[in,out]*/ BSTR *pbstrKey, /*[out, retval]*/ VARIANT *pvtValue);
};

OBJECT_ENTRY_AUTO(__uuidof(NCFCollectionMap), CNCFCollectionMap)
