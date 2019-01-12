// CNCFRegistry.cpp : Implementation of CNCFRegistry

#include "stdafx.h"
#include "CNCFRegistry.h"
#include <string>
using namespace std;

// CNCFRegistry

STDMETHODIMP CNCFRegistry::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFRegistry
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


//
// CheckHKey
//
// (i)	Checks to see wheather or not a valid REGCLASS value has been
//		passed. If so the function returnes true, else it returnes false.
//
bool CNCFRegistry::CheckHKey(EREGCLASS a_regclass, HKEY &a_hKey) throw()
{
	switch (a_regclass)
	{
	case EREGCLASS(0):
		a_hKey = HKEY_CLASSES_ROOT;
		break;
	case EREGCLASS(1):
		a_hKey = HKEY_CURRENT_USER;
		break;
	case EREGCLASS(2):
		a_hKey = HKEY_LOCAL_MACHINE;
		break;
	case EREGCLASS(3):
		a_hKey = HKEY_USERS;
		break;
	case EREGCLASS(4):
		a_hKey = HKEY_PERFORMANCE_DATA;
		break;
	case EREGCLASS(5):
		a_hKey = HKEY_CURRENT_CONFIG;
		break;
	case EREGCLASS(6):
		a_hKey = HKEY_DYN_DATA;
		break;
	default:
		return false;
		break;
	};

	return true;
}// bool CSettings::CheckHKey( long a_lhKey, HKEY &a_hKey )

CComBSTR CNCFRegistry::GetErrorDesc(DWORD dwCode) 
{
	wchar_t wszBuffer[1024];
	DWORD dwResult = FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM, NULL, dwCode, 0, wszBuffer, 1024,NULL);

	return CComBSTR(wszBuffer);
}

//
// IKKSRegistry
//
STDMETHODIMP CNCFRegistry::DeleteKey(EREGCLASS eregclass,	// [in]
	BSTR path,				// [in]
	BSTR key)				// [in]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0)) {
		return Error(CComBSTR(L"Invalid Argument."), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	DWORD dwResult(0);
	dwResult = ::SHDeleteKey(hKey, bstrPath.m_str);
	if (dwResult != ERROR_SUCCESS) {
		if (GetLastError() != 0) {
			CComBSTR bstrError(L"SHDeleteKey failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetErrorDesc(dwResult));
			return Error(bstrError, IID_INCFRegistry, E_FAIL);
		}
		else {
			return S_FALSE;
		}
	}
	return S_OK;
}

STDMETHODIMP CNCFRegistry::CreateKey(EREGCLASS eregclass,// [in]
	BSTR path,			// [in]
	BSTR key,			// [in]
	BSTR default_data)	// [in]							
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0)) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	wstring wsPath = path;
	if (wsPath.length() > 0) {
		wchar_t wch = wsPath.at(0);
		while (wch == L'\\') {
			wsPath.erase(0);
			if (wsPath.length() > 0) {
				wch = wsPath.at(0);
			}
			else {
				break;
			}
		}
	}

	if (wsPath.length() > 0) {
		if (wsPath.at(wsPath.length() - 1) != L'\\') {
			wsPath += L'\\';
		}
	}

	wsPath += key;

	// Create new key
	HKEY hNewKey;
	LONG lResult = RegCreateKeyEx(hKey, wsPath.c_str(), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hNewKey, NULL);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegSetValueExW failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	// Set default value.	
	if (SysStringLen(default_data) > 0) {
		lResult = RegSetValueEx(hNewKey, NULL, 0, REG_SZ, (CONST BYTE*)default_data, SysStringLen(default_data) * 2 + 2);
		if (lResult != ERROR_SUCCESS) {
			RegCloseKey(hNewKey);	// Close New Key
			CComBSTR bstrError(L"RegSetValueEx failed. SYSTEM ERROR DESCRIPTION: ");
			bstrError.AppendBSTR(GetErrorDesc(lResult));
			return Error(bstrError, IID_INCFRegistry, E_FAIL);
		}
	}

	RegCloseKey(hNewKey);	// Close New Key

	return S_OK;
}

STDMETHODIMP CNCFRegistry::AddValue(EREGCLASS eregclass,	// [in]
	BSTR path,			// [in]
	BSTR key,				// [in]
	BSTR value,			// [in]
	BSTR data)			// [in]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || SysStringLen(value) == 0) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_ALL_ACCESS, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	lResult = RegSetValueEx(hOpenKey, value, 0, REG_SZ, reinterpret_cast<BYTE *>(data), SysStringLen(data) * 2 + 2);
	if (lResult != ERROR_SUCCESS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegSetValueEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	RegCloseKey(hOpenKey);

	return S_OK;
}


STDMETHODIMP CNCFRegistry::DeleteValue(EREGCLASS eregclass,	// [in]
	BSTR path,				// [in]
	BSTR key,				// [in]
	BSTR value)			// [in]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || SysStringLen(value) == 0) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_ALL_ACCESS, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}
	lResult = RegDeleteValue(hOpenKey, value);
	if (lResult != ERROR_SUCCESS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegDeleteKeyValue failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	RegCloseKey(hOpenKey);
	return S_OK;
}

STDMETHODIMP CNCFRegistry::ReadValue(EREGCLASS eregclass,// [in]
	BSTR path,			// [in]
	BSTR key,			// [in]
	BSTR value,			// [in]
	BSTR *data)		// [out, retval]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || data == NULL) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_READ, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	DWORD dwType(0);
	ULONG lSize(0);
	lResult = RegQueryValueEx(hOpenKey, value, 0, &dwType, NULL, &lSize);
	if (lResult != ERROR_SUCCESS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegQueryValueEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	if (dwType != REG_SZ) {
		RegCloseKey(hOpenKey);
		return Error(CComBSTR(L"Invalid value data type. Only REG_SZ is supported."), IID_INCFRegistry, E_FAIL);
	}

	wchar_t *pszBuffer = new wchar_t[lSize / sizeof(wchar_t)];
	lResult = RegQueryValueEx(hOpenKey, value, 0, &dwType, (BYTE *)pszBuffer, &lSize);
	if (lResult != ERROR_SUCCESS) {
		RegCloseKey(hOpenKey);
		delete[] pszBuffer;
		CComBSTR bstrError(L"RegQueryValueEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}
	CComBSTR bstrValue(pszBuffer);
	delete[] pszBuffer;
	RegCloseKey(hOpenKey);

	*data = bstrValue.Detach();

	return S_OK;
}

STDMETHODIMP CNCFRegistry::EnumerateKeys(EREGCLASS eregclass,// [in]
	BSTR path,			// [in]			   	
	INCFCollectionList **ppINCFCollectionList)// [out, retval]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || SysStringLen(path) == 0 || ppINCFCollectionList == NULL) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_ENUMERATE_SUB_KEYS, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionList"));
	if (FAILED(hr)) {
		RegCloseKey(hOpenKey);
		return Error(CComBSTR(L"Could not create 'ItSoftware.NCF.CollectionMap' Collection Component."), IID_INCFRegistry, E_FAIL);
	}

	long lIndex(0);
	ULONG cbAvailable(0);
	wchar_t *pwcsName = new wchar_t[512];

	FILETIME ft;
	do {
		cbAvailable = 512;
		lResult = RegEnumKeyEx(hOpenKey, lIndex++, pwcsName, &cbAvailable, 0, NULL, 0, &ft);

		if (lResult == ERROR_SUCCESS) {
			CComBSTR bstr(pwcsName);
			CComVariant vtItem;
			vtItem.vt = VT_BSTR;
			vtItem.bstrVal = bstr.Detach();
			pINCFCollectionList->AddItemToBack(vtItem);
		}// if ( lResult == ERROR_SUCCESS ) {			

	} while (lResult == ERROR_SUCCESS);

	delete[] pwcsName;

	if (lResult != ERROR_NO_MORE_ITEMS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegEnumKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	*ppINCFCollectionList = pINCFCollectionList.Detach();

	RegCloseKey(hOpenKey);
	return S_OK;
}

STDMETHODIMP CNCFRegistry::EnumerateValues(EREGCLASS eregclass,	// [in]
	BSTR path,				// [in]
	BSTR key, 				// [in]					
	INCFCollectionList **ppINCFCollectionList)	// [out, retval]
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || ppINCFCollectionList == NULL) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_QUERY_VALUE, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionList"));
	if (FAILED(hr)) {
		RegCloseKey(hOpenKey);
		return Error(CComBSTR(L"Could not create 'ItSoftware.NCF.CollectionMap' Collection Component."), IID_INCFRegistry, E_FAIL);
	}

	long lIndex(0);
	ULONG cbAvailable(0);
	DWORD dwType(0);
	wchar_t *pwcsName = new wchar_t[512];

	do {
		cbAvailable = 512;
		lResult = RegEnumValue(hOpenKey, lIndex++, pwcsName, &cbAvailable, NULL, NULL, NULL, NULL);
		if (lResult == ERROR_SUCCESS) {
			CComBSTR bstr(pwcsName);
			CComVariant vtItem;
			vtItem.vt = VT_BSTR;
			vtItem.bstrVal = bstr.Detach();
			pINCFCollectionList->AddItemToBack(vtItem);
		}// if ( lResult == ERROR_SUCCESS ) {			
	} while (lResult == ERROR_SUCCESS);

	delete[] pwcsName;

	if (lResult != ERROR_NO_MORE_ITEMS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegEnumKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	*ppINCFCollectionList = pINCFCollectionList.Detach();

	RegCloseKey(hOpenKey);
	return S_OK;
}

STDMETHODIMP CNCFRegistry::EnumerateStringValues( /*[in]*/ EREGCLASS eregclass,
	/*[in]*/ BSTR path,
	/*[in]*/ BSTR key,
	/*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap)
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || ppINCFCollectionMap == NULL) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	CComBSTR bstrPath(path);
	CComBSTR bstrKey(key);

	if (bstrPath.Length() > 0) {
		wchar_t *pwcs = bstrPath.m_str;
		pwcs += bstrPath.Length() - 1;

		if (wcscmp(pwcs, L"\\") != 0) {
			bstrPath += L"\\";
		}
	}
	bstrPath.AppendBSTR(bstrKey);

	HKEY hOpenKey;
	LONG lResult(0);
	lResult = RegOpenKeyEx(hKey, bstrPath.m_str, 0, KEY_QUERY_VALUE, &hOpenKey);
	if (lResult != ERROR_SUCCESS) {
		CComBSTR bstrError(L"RegOpenKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	CComPtr<INCFCollectionMap> pIKKSMap;
	HRESULT hr = pIKKSMap.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionMap"));
	if (FAILED(hr)) {
		RegCloseKey(hOpenKey);
		return Error(CComBSTR(L"Could not create 'ItSoftware.NCF.CollectionMap' Collection Component."), IID_INCFRegistry, E_FAIL);
	}

	long lIndex(0);
	ULONG cbAvailable(0);
	DWORD dwType(0);
	wchar_t *pwcsName = new wchar_t[512];

	do {
		cbAvailable = 512;
		lResult = RegEnumValue(hOpenKey, lIndex++, pwcsName, &cbAvailable, NULL, NULL, NULL, NULL);
		if (lResult == ERROR_SUCCESS) {
			CComBSTR bstrKey(pwcsName);
			CComBSTR bstrValue;

			if (ReadValue(eregclass, path, key, bstrKey, &bstrValue) == S_OK) {
				CComVariant vtItem;
				vtItem.vt = VT_BSTR;
				vtItem.bstrVal = bstrValue.Detach();

				pIKKSMap->AddItem(bstrKey, vtItem);
			}
		}// if ( lResult == ERROR_SUCCESS ) {			
	} while (lResult == ERROR_SUCCESS);

	delete[] pwcsName;

	if (lResult != ERROR_NO_MORE_ITEMS) {
		RegCloseKey(hOpenKey);
		CComBSTR bstrError(L"RegEnumKeyEx failed. SYSTEM ERROR DESCRIPTION: ");
		bstrError.AppendBSTR(GetErrorDesc(lResult));
		return Error(bstrError, IID_INCFRegistry, E_FAIL);
	}

	*ppINCFCollectionMap = pIKKSMap.Detach();

	RegCloseKey(hOpenKey);
	return S_OK;
}

STDMETHODIMP CNCFRegistry::StoreCollection( /*[in]*/ EREGCLASS eregclass,
	/*[in]*/ BSTR path,
	/*[in]*/ BSTR key,
	/*[in]*/ INCFCollectionMap *pINCFCollectionMap)
{
	HKEY hKey;
	if (!CheckHKey(eregclass, hKey) || (SysStringLen(path) == 0 && SysStringLen(key) == 0) || pINCFCollectionMap == NULL) {
		return Error(CComBSTR(L"Invalid Argument"), IID_INCFRegistry, E_INVALIDARG);
	}

	long lSize(0);
	pINCFCollectionMap->get_Size(&lSize);
	for (long l = 0; l < lSize; l++) {
		CComBSTR bstrColKey;
		CComVariant vtColValue;
		pINCFCollectionMap->GetItemByIndex(l, &bstrColKey, &vtColValue);
		vtColValue.ChangeType(VT_BSTR);
		AddValue(eregclass, path, key, bstrColKey, vtColValue.bstrVal);
	}

	return S_OK;
}