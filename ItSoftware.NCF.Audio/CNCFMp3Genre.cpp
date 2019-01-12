// CNCFMp3Genre.cpp : Implementation of CNCFMp3Genre

#include "stdafx.h"
#include "CNCFMp3Genre.h"

#define ID3_GENRE_COUNT 126 // 0-125

// CNCFMp3Genre

STDMETHODIMP CNCFMp3Genre::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFMp3Genre
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CNCFMp3Genre::GetGenreById( /*[in]*/ long genre_id, /*[out, retval]*/ BSTR *genre_name)
{
	if (genre_name == NULL || genre_id < 0) {
		return Error(CComBSTR(L""), IID_INCFMp3Genre, E_INVALIDARG);
	}

	SysFreeString(*genre_name);

	if (genre_id > ID3_GENRE_COUNT) {
		*genre_name = CComBSTR(L"").Detach();
	}
	else {
		CComBSTR bstr;
		bool bResult = bstr.LoadString(IDS_STRING101 + genre_id);
		if (bResult == false) {
			return Error(CComBSTR(L""), IID_INCFMp3Genre, E_UNEXPECTED);
		}

		*genre_name = bstr.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFMp3Genre::GetGenreByName( /*[in]*/ BSTR genre_name, /*[out, retval]*/ long *genre_id)
{
	if (genre_id == NULL || SysStringLen(genre_name) == 0) {
		return Error(CComBSTR(L""), IID_INCFMp3Genre, E_INVALIDARG);
	}

	*genre_id = -1;

	CComBSTR bstrName(genre_name);
	bstrName.ToLower();
	CComBSTR bstr;
	for (long l = 0; l < ID3_GENRE_COUNT; l++) {
		bstr.LoadString(IDS_STRING101 + l);
		bstr.ToLower();
		if (bstr == bstrName) {
			*genre_id = l;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFMp3Genre::EnumerateGenre( /*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap)
{
	if (ppINCFCollectionMap == NULL) {
		return Error(CComBSTR(L"Interface is NULL Error."), IID_INCFMp3Genre, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	CComPtr<INCFCollectionMap> pINCFCollectionMap;
	hr = pINCFCollectionMap.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionMap"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"Could not create ItSoftware.NCF.CollectionMap"), IID_INCFMp3Genre, E_FAIL);
	}

	for (ULONG l = 0; l < ID3_GENRE_COUNT; l++) {
		CComBSTR bstrKey;
		bstrKey.LoadString(IDS_STRING101 + l);
		CComVariant vtValue;
		vtValue.vt = VT_UI4;
		vtValue.ullVal = l;

		hr = pINCFCollectionMap->AddItem(bstrKey, vtValue);
	}

	*ppINCFCollectionMap = pINCFCollectionMap.Detach();
	return S_OK;
}