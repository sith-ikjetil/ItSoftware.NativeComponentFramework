// CNCFIniFile.cpp : Implementation of CNCFIniFile

#include "stdafx.h"
#include "CNCFIniFile.h"


// CNCFIniFile

STDMETHODIMP CNCFIniFile::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFIniFile
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

CComBSTR CNCFIniFile::GetLastErrorDesc()
{
	wchar_t wszBuffer[1024];
	DWORD dwResult = FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), 0, wszBuffer, 1024, NULL);

	return CComBSTR(wszBuffer);
}


//
// IKKSIniFile
//
STDMETHODIMP CNCFIniFile::CreateKey(BSTR filename,					// [in]
	BSTR sectionname,					// [in]
	BSTR keyname,						// [in]
	BSTR value,						// [in]
	VARIANT_BOOL overwriteifexist)	// [in]
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || SysStringLen(keyname) == 0) {
		return Error(CComBSTR("CreateKey Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	bool bDoCreate(false);
	if (overwriteifexist == VARIANT_TRUE) {
		DeleteKey(filename, sectionname, keyname);
		bDoCreate = true;
	}
	else {
		CComBSTR bstrReadValue;
		if (FAILED(ReadValue(filename, sectionname, keyname, &bstrReadValue))) {
			bDoCreate = true;
		}
	}

	if (bDoCreate == true) {
		if (!WritePrivateProfileString(sectionname, keyname, value, filename)) {
			CComBSTR bstrError(L"CreateKey Failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetLastErrorDesc());
			return Error(bstrError, IID_INCFIniFile, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFIniFile::DeleteKey( /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname,
	/*[in]*/ BSTR keyname)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || SysStringLen(keyname) == 0) {
		return Error(CComBSTR("DeleteKey Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	CComBSTR bstrReadValue;
	if (ReadValue(filename, sectionname, keyname, &bstrReadValue) == S_OK) {
		if (!WritePrivateProfileString(sectionname, keyname, NULL, filename)) {
			CComBSTR bstrError(L"DeleteKey Failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetLastErrorDesc());
			return Error(bstrError, IID_INCFIniFile, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFIniFile::ReadValue( /*[in]*/  BSTR filename,
	/*[in]*/  BSTR sectionname,
	/*[in]*/  BSTR keyname,
	/*[out, retval]*/ BSTR *value)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || SysStringLen(keyname) == 0) {
		return Error(CComBSTR("ReadValue Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	wchar_t wcsDefault[] = L"24AA9E3A-5086-409c-A6CF-E1C48B8FFA62";
	wchar_t *pwcs = new wchar_t[2048];
	if (::GetPrivateProfileString(sectionname, keyname, wcsDefault, pwcs, 2047, filename) == 0) {
		// FOUND BUT HAD NO VALUE WITCH IS OK. WE HAD AN EMPTY STRING
		*value = CComBSTR("").Detach();
	}
	else {
		if (wcscmp(wcsDefault, pwcs) == 0) {	// CANNOT BE FOUND			
			delete[] pwcs;
			CComBSTR bstrError("ReadValue failed. The key \"");
			bstrError.AppendBSTR(keyname);
			bstrError.Append("\" in section \"");
			bstrError.AppendBSTR(sectionname);
			bstrError.Append("\" in file \"");
			bstrError.AppendBSTR(filename);
			bstrError.Append("\" could not be found.");
			return Error(bstrError, IID_INCFIniFile, E_FAIL);
		}
		else {									// VALUE FOUND
			CComBSTR bstr(pwcs);
			*value = bstr.Detach();
		}
	}
	delete[] pwcs;
	return S_OK;
}


STDMETHODIMP CNCFIniFile::SetValue( /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname,
	/*[in]*/ BSTR keyname,
	/*[in]*/ BSTR value)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || SysStringLen(keyname) == 0) {
		return Error(CComBSTR("SetValue Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	CComBSTR bstr;
	if (FAILED(ReadValue(filename, sectionname, keyname, &bstr))) {
		CComBSTR bstrError("SetValue failed. The key \"");
		bstrError.AppendBSTR(keyname);
		bstrError.Append("\" in section \"");
		bstrError.AppendBSTR(sectionname);
		bstrError.Append("\" in file \"");
		bstrError.AppendBSTR(filename);
		bstrError.Append("\" could not be found.");
		return Error(bstrError, IID_INCFIniFile, E_FAIL);
	}

	if (SysStringLen(value) == 0) {
		if (!WritePrivateProfileString(sectionname, keyname, L"", filename)) {
			CComBSTR bstrError("SetValue Failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetLastErrorDesc());
			return Error(bstrError, IID_INCFIniFile, E_FAIL);
		}
	}
	else {
		if (!WritePrivateProfileString(sectionname, keyname, value, filename)) {
			CComBSTR bstrError("SetValue Failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetLastErrorDesc());
			return Error(bstrError, IID_INCFIniFile, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFIniFile::CreateSection( /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0) {
		return Error(CComBSTR("CreateSection Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	CComBSTR bstrKey("KKSINIFILE");
	CComBSTR bstrValue("YOU CAN SAFTLEY DELETE ME!");
	if (FAILED(CreateKey(filename, sectionname, bstrKey, bstrValue, VARIANT_FALSE))) {
		CComBSTR bstrError("CreateSection failed. The section \"");
		bstrError.AppendBSTR(sectionname);
		bstrError.Append("\" in file \"");
		bstrError.AppendBSTR(filename);
		bstrError.Append("\" could not be created.");
		return Error(bstrError, IID_INCFIniFile, E_FAIL);
	}
	else {
		DeleteKey(filename, sectionname, bstrKey);
	}
	return S_OK;
}

STDMETHODIMP CNCFIniFile::DeleteSection( /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0) {
		return Error(CComBSTR("DeleteSection Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	if (!WritePrivateProfileString(sectionname, NULL, NULL, filename)) {
		CComBSTR bstrError("DeleteSection Failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetLastErrorDesc());
		return Error(bstrError, IID_INCFIniFile, E_FAIL);
	}

	return S_OK;
}

STDMETHODIMP CNCFIniFile::StoreCollection( /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname,
	/*[in]*/ INCFCollectionMap *pINCFCollectionMap,
	/*[in]*/ VARIANT_BOOL overwriteifexist)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || pINCFCollectionMap == NULL) {
		return Error(CComBSTR("StoreCollection Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	long lIndex(0);
	pINCFCollectionMap->get_Size(&lIndex);
	for (long l = 0; l < lIndex; l++) {
		CComBSTR	bstrKey;
		CComVariant vtValue;
		pINCFCollectionMap->GetItemByIndex(l, &bstrKey, &vtValue);
		vtValue.ChangeType(VT_BSTR);
		CreateKey(filename, sectionname, bstrKey, vtValue.bstrVal, overwriteifexist);
	}

	return S_OK;
}

STDMETHODIMP CNCFIniFile::EnumerateKeys(   /*[in]*/ BSTR filename,
	/*[in]*/ BSTR sectionname,
	/*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap)
{
	if (SysStringLen(filename) == 0 || SysStringLen(sectionname) == 0 || ppINCFCollectionMap == NULL) {
		return Error(CComBSTR("EnumerateKeys Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	CComPtr<INCFCollectionMap> pINCFCollectionMap;
	HRESULT hr = pINCFCollectionMap.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionMap"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"Enumerate Keys Failed. Could Not Create The ItSoftware.NCF.CollectionMap Component"), IID_INCFIniFile, E_FAIL);
	}

	wchar_t *pwcs = new wchar_t[2048];
	wchar_t wcsDefault[] = L"03803CC2-1BAC-4775-BBA6-733AA181F9CC";
	if (GetPrivateProfileString(sectionname, NULL, wcsDefault, pwcs, 2047, filename) == 0) {
		// FOUND BUT HAD NO VALUE	
	}
	else {
		if (wcscmp(pwcs, wcsDefault) == 0) {
			// NOT KEYS FOUND.
			delete[] pwcs;
			*ppINCFCollectionMap = pINCFCollectionMap.Detach();
			return S_OK;
		}
		else {
			int iIndex = 0;
			wchar_t *p;
			wchar_t *beg = pwcs;
			for (p = pwcs; p < pwcs + 2047; p++) {
				if (*p == L'\0') {
					iIndex++;
					CComVariant vtKey(beg);
					vtKey.ChangeType(VT_BSTR);

					CComBSTR bs;
					ReadValue(filename, sectionname, beg, &bs);
					CComVariant vtValue(bs);

					pINCFCollectionMap->AddItem(vtKey.bstrVal, vtValue);

					if (*(p + 1) == L'\0')
						break;

					beg = p + 1;
				}// if ( *p == L'\0' ) {
			}// for ( p = pwcs; p < pwcs+1024; p++ ) {
		}// else {
	}// else {
	delete[] pwcs;
	*ppINCFCollectionMap = pINCFCollectionMap.Detach();
	return S_OK;
}

STDMETHODIMP CNCFIniFile::EnumerateSections( /*[in]*/ BSTR filename,
	/*[out, retval]*/ INCFCollectionList **ppINCFCollectionList)
{
	if (SysStringLen(filename) == 0 || ppINCFCollectionList == NULL) {
		return Error(CComBSTR("EnumerateKeys Failed. Invalid Arguments."), IID_INCFIniFile, E_INVALIDARG);
	}

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionList"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"Enumerate Keys Failed. Could Not Create The ItSoftware.NCF.CollectionList Component"), IID_INCFIniFile, E_FAIL);
	}

	wchar_t *pwcs = new wchar_t[2048];
	wchar_t wcsDefault[] = L"1B5E632E-BDD5-4343-86D8-4C668E1C1808";
	if (GetPrivateProfileString(NULL, L"", wcsDefault, pwcs, 2047, filename) == 0) {
		// FOUND BUT HAD NO VALUE		
	}
	else {
		if (wcscmp(pwcs, wcsDefault) == 0) {
			// NO SECTIONS FOUND.
			delete[] pwcs;
			*ppINCFCollectionList = pINCFCollectionList.Detach();
			return S_OK;
		}
		else {
			int iIndex = 0;
			wchar_t *p;
			wchar_t *beg = pwcs;
			for (p = pwcs; p < pwcs + 1024; p++) {
				if (*p == L'\0') {
					iIndex++;
					CComVariant vtValue(beg);
					vtValue.ChangeType(VT_BSTR);
					pINCFCollectionList->AddItemToBack(vtValue);

					if (*(p + 1) == L'\0')
						break;

					beg = p + 1;
				}// if ( *p == L'\0' ) {
			}// for ( p = pwcs; p < pwcs+1024; p++ ) {
		}// else {
	}// else {
	*ppINCFCollectionList = pINCFCollectionList.Detach();
	delete[] pwcs;
	return S_OK;
}

