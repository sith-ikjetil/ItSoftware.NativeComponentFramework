// CNCFPriorityQueue.h : Declaration of the CNCFPriorityQueue

#pragma once
#include "resource.h"       // main symbols
#include <vector>
#include "ItSoftwareNCFCollection_i.h"

using namespace std;
using namespace ATL;

struct PRIORITY_ITEM
{
	CComVariant	vtItem;
	long		lPriority;

	bool operator<(PRIORITY_ITEM &pi)
	{
		if (lPriority >= pi.lPriority)	// for reverse sequence
			return true;

		return false;
	}
};





#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif




// CNCFPriorityQueue

class ATL_NO_VTABLE CNCFCollectionPriorityQueue :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFCollectionPriorityQueue, &CLSID_NCFCollectionPriorityQueue>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFCollectionPriorityQueue, &IID_INCFCollectionPriorityQueue, &LIBID_ItSoftwareNCFCollectionLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
protected:
	vector<PRIORITY_ITEM> m_vItems;
public:
	CNCFCollectionPriorityQueue()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFPRIORITYQUEUE)

DECLARE_NOT_AGGREGATABLE(CNCFCollectionPriorityQueue)

BEGIN_COM_MAP(CNCFCollectionPriorityQueue)
	COM_INTERFACE_ENTRY(INCFCollectionPriorityQueue)
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
		for ( auto itr = this->m_vItems.begin(); itr != this->m_vItems.end(); itr++ )
		{
			if ( (itr->vtItem.vt == VT_UNKNOWN || itr->vtItem.vt == VT_DISPATCH) && itr->vtItem.punkVal != nullptr)
			{
				itr->vtItem.punkVal->Release();
			}
		}
	}

public:

	// IKKSPriorityQueue
	STDMETHOD(get_Empty)( /*[out, retval]*/ VARIANT_BOOL *pvtbEmpty);
	STDMETHOD(get_Size)( /*[out, retval]*/ long *plSize);
	STDMETHOD(Clear)();
	STDMETHOD(AddItem)( /*[in]*/ VARIANT vtItem, /*[in]*/ long lPriority);
	STDMETHOD(Pop)( /*[out, retval]*/ VARIANT *pvtItem);
	STDMETHOD(RemoveItem)( /*[in]*/ VARIANT vtItem);
	STDMETHOD(IncrementItemPriority)( /*[in]*/ VARIANT vtItem, /*[in]*/ long lPriority);
	STDMETHOD(SetItemPriority)( /*[in]*/ VARIANT vtItem, /*[in]*/ long lPriority);
	STDMETHOD(GetQueueItem)( /*[in]*/ long lQueueIndex, /*[in, out]*/ VARIANT *pvtItem, /*[out, retval]*/ long *plPriority);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFCollectionPriorityQueue), CNCFCollectionPriorityQueue)
