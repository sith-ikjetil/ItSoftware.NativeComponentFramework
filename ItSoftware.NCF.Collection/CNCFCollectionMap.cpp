// CNCFMap.cpp : Implementation of CNCFMap

#include "stdafx.h"
#include "CNCFCollectionMap.h"
#include <algorithm>

// CNCFMap

STDMETHODIMP CNCFCollectionMap::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFCollectionMap
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

//
// IKKSMap interface
//
STDMETHODIMP CNCFCollectionMap::get_Empty(VARIANT_BOOL *pvtbEmpty) //[out, retval] 
{
	if (m_vMap.size() > 0)
		*pvtbEmpty = VARIANT_FALSE;
	else
		*pvtbEmpty = VARIANT_TRUE;

	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::get_Size(long *plSize) //[out, retval]
{
	*plSize = static_cast<long>(m_vMap.size());
	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::Clear()
{
	m_vMap.clear();
	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::AddItem(BSTR bstrKey,		//[in] 
	VARIANT vtValue)	//[in] 
{
	MAP_ITEM mi;
	mi.bstrKey = bstrKey;
	mi.vtValue = vtValue;

	m_vMap.push_back(mi);
	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::RemoveItemByKey(BSTR bstrKey)//[in]
{
	vector<MAP_ITEM>::iterator itr = m_vMap.begin();
	vector<MAP_ITEM>::iterator itrEnd = m_vMap.end();
	while (itr != itrEnd) {
		if (itr->bstrKey == bstrKey) {
			m_vMap.erase(itr);
			itr = m_vMap.begin();
			itrEnd = m_vMap.end();
		}
		else {
			itr++;
		}
	}
	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::RemoveItemByIndex(long lIndex)//[in] 
{
	if (lIndex >= 0 && lIndex < static_cast<long>(m_vMap.size())) {
		vector<MAP_ITEM>::iterator itr = m_vMap.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		m_vMap.erase(itr);
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid Argument. Index out of range."), IID_INCFCollectionMap, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionMap::UpdateValueByKey(BSTR bstrKey,		//[in] 
	VARIANT vtValue)	//[in] 
{
	vector<MAP_ITEM>::iterator itr = m_vMap.begin();
	vector<MAP_ITEM>::iterator itrEnd = m_vMap.end();
	while (itr != itrEnd) {
		if (itr->bstrKey == bstrKey) {
			itr->vtValue = vtValue;
		}
		itr++;
	}
	return S_OK;
}


STDMETHODIMP CNCFCollectionMap::UpdateValueByIndex(long lIndex,		//[in] 
	VARIANT vtValue)	//[in] 
{
	if (lIndex >= 0 && lIndex < static_cast<long>(m_vMap.size())) {
		vector<MAP_ITEM>::iterator itr = m_vMap.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		itr->vtValue = vtValue;
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid Argument. Index out of range."), IID_INCFCollectionMap, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionMap::GetValueByKey(BSTR bstrKey,		//[in] 
	VARIANT *pvtValue)	//[out, retval] 
{
	if (pvtValue == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionMap, E_POINTER);

	HRESULT hr(S_OK);
	long l(0);
	for (l = 0; l < static_cast<long>(m_vMap.size()); l++) {
		if (m_vMap[l].bstrKey == bstrKey) {
			CComVariant vt(m_vMap[l].vtValue);
			vt.Detach(pvtValue);
			break;
		}
	}
	
	if (l == m_vMap.size()) {
		hr = S_FALSE;
		::VariantClear(pvtValue);
	}

	return S_FALSE;
}

STDMETHODIMP CNCFCollectionMap::GetValueByIndex(long lIndex, //[in] 
	VARIANT *pvtValue) //[out, retval] 
{
	if (pvtValue == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionMap, E_POINTER);

	if (lIndex >= 0 && lIndex < static_cast<long>(m_vMap.size())) {
		vector<MAP_ITEM>::iterator itr = m_vMap.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		CComVariant vt(itr->vtValue);
		vt.Detach(pvtValue);
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid Argument. Index out of range."), IID_INCFCollectionMap, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionMap::GetKeyByIndex(long lIndex,	// [in]
	BSTR *pbstrKey)	// [out, retval]
{
	if (pbstrKey == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionMap, E_POINTER);

	if (lIndex >= 0 && lIndex < static_cast<long>(m_vMap.size())) {
		vector<MAP_ITEM>::iterator itr = m_vMap.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		CComBSTR bstr(itr->bstrKey);
		*pbstrKey = bstr.Detach();
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid Argument. Index out of range."), IID_INCFCollectionMap, E_INVALIDARG);
}

STDMETHODIMP CNCFCollectionMap::Sort()
{
	std::sort(m_vMap.begin(), m_vMap.end());
	return S_OK;
}

STDMETHODIMP CNCFCollectionMap::GetItemByIndex(long lIndex,		// [in] 
	BSTR *pbstrKey,	// [in,out] 
	VARIANT *pvtValue)// [out, retval] 
{
	if (pvtValue == NULL || pbstrKey == NULL)
		return Error(CComBSTR(L"NULL pointer argument."), IID_INCFCollectionMap, E_POINTER);

	if (lIndex >= 0 && lIndex < static_cast<long>(m_vMap.size())) {
		vector<MAP_ITEM>::iterator itr = m_vMap.begin();
		for (long l = 0; l < lIndex; l++, itr++);
		CComBSTR bstr(itr->bstrKey);
		*pbstrKey = bstr.Detach();

		CComVariant vt(itr->vtValue);
		vt.Detach(pvtValue);
		return S_OK;
	}

	return Error(CComBSTR(L"Invalid Argument. Index out of range."), IID_INCFCollectionMap, E_INVALIDARG);
}