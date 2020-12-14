// CNCFPriorityQueue.cpp : Implementation of CNCFPriorityQueue

#include "stdafx.h"
#include "CNCFPriorityQueue.h"
#include <algorithm>

// CNCFPriorityQueue

STDMETHODIMP CNCFCollectionPriorityQueue::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFCollectionPriorityQueue
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

//
// IKKSPriorityQueue interface
//

STDMETHODIMP CNCFCollectionPriorityQueue::get_Empty(VARIANT_BOOL *pvtbEmpty) // [out, retval]
{
	if (m_vItems.size() > 0)
		*pvtbEmpty = VARIANT_FALSE;
	else
		*pvtbEmpty = VARIANT_TRUE;

	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::get_Size(long *plSize) // [out, retval]
{
	if (plSize == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionPriorityQueue, E_POINTER);

	*plSize = static_cast<long>(m_vItems.size());
	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::Clear()
{
	m_vItems.clear();
	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::AddItem(VARIANT vtItem, // [in]
	long lPriority)// [in]
{
	PRIORITY_ITEM pi;
	pi.lPriority = lPriority;
	pi.vtItem = vtItem;

	m_vItems.push_back(pi);

	std::sort(m_vItems.begin(), m_vItems.end());
	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::Pop(VARIANT *pvtItem) // [out, retval] 
{
	if (pvtItem == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionPriorityQueue, E_POINTER);

	if (m_vItems.size() > 0) {
		m_vItems[0].vtItem.Detach(pvtItem);
		m_vItems.erase(m_vItems.begin());
		return S_OK;
	}

	return S_FALSE;
}

STDMETHODIMP CNCFCollectionPriorityQueue::RemoveItem(VARIANT vtItem) // [in]
{
	vector<PRIORITY_ITEM>::iterator itr = m_vItems.begin();
	vector<PRIORITY_ITEM>::iterator end = m_vItems.end();
	while (itr != end) {
		if (itr->vtItem == vtItem) {
			m_vItems.erase(itr);
		}
		itr++;
	}

	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::IncrementItemPriority(VARIANT vtItem,	// [in]
	long lPriority)	// [in]
{
	vector<PRIORITY_ITEM>::iterator itr = m_vItems.begin();
	vector<PRIORITY_ITEM>::iterator end = m_vItems.end();
	while (itr != end) {
		if (itr->vtItem == vtItem) {
			itr->lPriority += lPriority;
		}
		itr++;
	}

	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::SetItemPriority(VARIANT vtItem,	// [in]
	long lPriority)// [in]
{
	vector<PRIORITY_ITEM>::iterator itr = m_vItems.begin();
	vector<PRIORITY_ITEM>::iterator end = m_vItems.end();
	while (itr != end) {
		if (itr->vtItem == vtItem) {
			itr->lPriority = lPriority;
		}
		itr++;
	}

	return S_OK;
}

STDMETHODIMP CNCFCollectionPriorityQueue::GetQueueItem(long lQueueIndex,	// [in]
	VARIANT *pvtItem,	// [in,out]
	long *plPriority)	// [out, retval]
{
	if (pvtItem == NULL || plPriority == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionPriorityQueue, E_POINTER);

	if (lQueueIndex >= 0 && lQueueIndex < static_cast<long>(m_vItems.size())) {
		CComVariant vt(m_vItems[lQueueIndex].vtItem);
		vt.Detach(pvtItem);
		*plPriority = m_vItems[lQueueIndex].lPriority;
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid queue index argument. Argument out of range."), IID_INCFCollectionPriorityQueue, E_INVALIDARG);
}