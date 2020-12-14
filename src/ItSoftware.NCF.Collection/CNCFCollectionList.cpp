// CNCFList.cpp : Implementation of CNCFList

#include "stdafx.h"
#include "CNCFCollectionList.h"


// CNCFList

STDMETHODIMP CNCFCollectionList::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFCollectionList
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


//
// IKKSList interface
//
STDMETHODIMP CNCFCollectionList::AddItemToBack( /*[in]*/ VARIANT vtItem)
{
	m_vList.push_back(vtItem);
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::AddItemToFront( /*[in]*/ VARIANT vtItem)
{
	m_vList.push_front(vtItem);
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::RemoveBackItem()
{
	m_vList.pop_back();
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::RemoveFrontItem()
{
	m_vList.pop_front();
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::get_Size( /*[out, retval]*/ long *plSize)
{
	if (plSize == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionList, E_POINTER);

	*plSize = static_cast<unsigned long>(m_vList.size());
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::GetItemByIndex( /*[in]*/ long lIndex, /*[out, retval]*/ VARIANT *pvtItem)
{
	if (pvtItem == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionList, E_POINTER);

	if (lIndex >= 0 && lIndex < static_cast<long>(m_vList.size())) {
		list<CComVariant>::iterator itr = m_vList.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		CComVariant vt;
		vt = (*itr);
		vt.Detach(pvtItem);
		return S_OK;
	}

	return Error(CComBSTR("Invalid index argument. Index is zero based."), IID_INCFCollectionList, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionList::SetItemByIndex( /*[in]*/ long lIndex, /*[in]*/ VARIANT vtItem)
{
	if (lIndex >= 0 && lIndex < static_cast<long>(m_vList.size())) {
		list<CComVariant>::iterator itr = m_vList.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		CComVariant vt(vtItem);
		(*itr) = vt;
		return S_OK;
	}

	return Error(CComBSTR("Invalid index argument. Index is zero based."), IID_INCFCollectionList, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionList::RemoveItemByIndex( /*[in]*/ long lIndex)
{
	if (lIndex >= 0 && lIndex < static_cast<long>(m_vList.size())) {
		list<CComVariant>::iterator itr = m_vList.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		m_vList.erase(itr);
		return S_OK;
	}

	return Error(CComBSTR("Invalid index argument. Index is zero based."), IID_INCFCollectionList, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionList::RemoveItemsByValue( /*[in]*/ VARIANT vtItem)
{
	m_vList.remove(vtItem);
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::Clear()
{
	m_vList.clear();
	return S_OK;
}

STDMETHODIMP CNCFCollectionList::get_Empty( /*[out,retval]*/ VARIANT_BOOL *pvtbEmpty)
{
	if (pvtbEmpty == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionList, E_POINTER);

	if (m_vList.size() > 0)
		*pvtbEmpty = VARIANT_FALSE;
	else
		*pvtbEmpty = VARIANT_TRUE;

	return S_OK;
}

STDMETHODIMP CNCFCollectionList::InsertItemBefore( /*[in]*/ long lIndex, /*[in]*/ VARIANT vtItem)
{
	if (lIndex >= 0 && lIndex < static_cast<long>(m_vList.size())) {
		list<CComVariant>::iterator itr = m_vList.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		m_vList.insert(itr, vtItem);
		return S_OK;
	}

	return Error(CComBSTR("Invalid index argument. Index is zero based."), IID_INCFCollectionList, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionList::RemoveItems( /*[in]*/ long lIndex1, /*[in]*/ long lIndex2)
{
	if (lIndex1 >= 0 && lIndex1 < static_cast<long>(m_vList.size()) && lIndex2 >= 0 && lIndex2 < static_cast<long>(m_vList.size())) {
		list<CComVariant>::iterator itr1 = m_vList.begin();
		list<CComVariant>::iterator itr2 = m_vList.begin();
		for (long l1 = 0; l1 < lIndex1; l1++, itr1++);
		for (long l2 = 0; l2 < lIndex2; l2++, itr2++);
		m_vList.erase(itr1, itr2);
		return S_OK;
	}

	return Error(CComBSTR("Invalid index argument. Index is zero based."), IID_INCFCollectionList, E_INVALIDARG);
}
