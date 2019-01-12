// CNCFList.h : Declaration of the CNCFList

#pragma once
#include "resource.h"       // main symbols

#include <list>
using namespace std;

#include "ItSoftwareNCFCollection_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFList

class ATL_NO_VTABLE CNCFCollectionList :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFCollectionList, &CLSID_NCFCollectionList>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFCollectionList, &IID_INCFCollectionList, &LIBID_ItSoftwareNCFCollectionLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
protected:
	list<CComVariant> m_vList;
public:
	CNCFCollectionList()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFLIST)

DECLARE_NOT_AGGREGATABLE(CNCFCollectionList)

BEGIN_COM_MAP(CNCFCollectionList)
	COM_INTERFACE_ENTRY(INCFCollectionList)
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
		for ( auto itr = this->m_vList.begin(); itr != this->m_vList.end(); itr++ )
		{
			if ( (itr->vt == VT_UNKNOWN || itr->vt == VT_DISPATCH) && itr->punkVal != nullptr )
			{
				itr->punkVal->Release();
			}
		}
	}

public:

	// IKKSList
	STDMETHOD(AddItemToBack)( /*[in]*/ VARIANT vtItem);
	STDMETHOD(AddItemToFront)( /*[in]*/ VARIANT vtItem);
	STDMETHOD(RemoveBackItem)();
	STDMETHOD(RemoveFrontItem)();
	STDMETHOD(get_Size)( /*[out, retval]*/ long *plSize);
	STDMETHOD(GetItemByIndex)( /*[in]*/ long lIndex, /*[out, retval]*/ VARIANT *pvtItem);
	STDMETHOD(SetItemByIndex)( /*[in]*/ long lIndex, /*[in]*/ VARIANT vtItem);
	STDMETHOD(RemoveItemByIndex)( /*[in]*/ long lIndex);
	STDMETHOD(RemoveItemsByValue)( /*[in]*/ VARIANT vtItem);
	STDMETHOD(Clear)();
	STDMETHOD(get_Empty)( /*[out,retval]*/ VARIANT_BOOL *pvtbEmpty);
	STDMETHOD(InsertItemBefore)( /*[in]*/ long lIndex, /*[in]*/ VARIANT vtItem);
	STDMETHOD(RemoveItems)( /*[in]*/ long lIndex1, /*[in]*/ long lIndex2);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFCollectionList), CNCFCollectionList)
