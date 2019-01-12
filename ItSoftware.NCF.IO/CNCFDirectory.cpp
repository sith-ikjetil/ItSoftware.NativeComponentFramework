// CNCFDirectory.cpp : Implementation of CNCFDirectory

#include "stdafx.h"
#include "CNCFDirectory.h"
#include "shlobj.h"
#include "../Include/itsoftware.h"
#include "../Include/itsoftware-com.h"

// CNCFDirectory

STDMETHODIMP CNCFDirectory::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFDirectory
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFDirectory::Create(/*[in]*/ BSTR directory)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}
	if (SysStringLen(directory) == 0) {
		return Error(L"Argument 'directory' has invalid length.", IID_INCFDirectory, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(directory, &status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_FALSE) {
		CComBSTR bstrDirectory(directory);
		if (!::CreateDirectoryW(bstrDirectory.operator LPWSTR(), NULL)) {
			return Error(L"Could not create directory.", IID_INCFDirectory, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFDirectory::Delete(/*[in]*/ BSTR directory)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}
	if (SysStringLen(directory) == 0 || SysStringLen(directory) > MAX_PATH) {
		return Error(L"Argument 'directory' has invalid length.", IID_INCFDirectory, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(directory, &status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_TRUE) {
		CComBSTR bstrDirectory(directory);
		wchar_t wszBuffer[MAX_PATH+1];
		wcscpy_s(wszBuffer, MAX_PATH+1, bstrDirectory.operator LPWSTR());		
		wszBuffer[wcslen(wszBuffer)+1] = L'\0';

		SHFILEOPSTRUCT file_op = {
			NULL,
			FO_DELETE,
			wszBuffer,
			L"",
			FOF_NO_UI |
			FOF_NOCONFIRMATION |
			FOF_NOERRORUI |
			FOF_SILENT,
			false,
			0,
			L"" };
		int result = ::SHFileOperation(&file_op);
		if ( result != 0 ) {			
			CComBSTR bstrError(L"Could not delete directory. ");
			bstrError.AppendBSTR(ItSoftware::ItsError::GetErrorDescription(result));
			return Error(bstrError.operator LPWSTR(), IID_INCFDirectory, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFDirectory::Exists(/*[in]*/ BSTR directory, /*[out, retval]*/ VARIANT_BOOL* status)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}
	if (SysStringLen(directory) == 0) {
		return Error(L"Argument 'directory' has invalid length.", IID_INCFDirectory, E_INVALIDARG);
	}
	if (status == nullptr) {
		return Error(L"Argument 'status' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}

	CComBSTR bstrPath(directory);
	if (::PathFileExistsW(bstrPath.operator LPWSTR())) {
		DWORD dwAttributes = GetFileAttributesW(bstrPath.operator LPWSTR());
		if ((dwAttributes & FILE_ATTRIBUTE_DIRECTORY) > 0) {
			*status = VARIANT_TRUE;
			return S_OK;
		}
	}

	*status = VARIANT_FALSE;

	return S_OK;
}

STDMETHODIMP CNCFDirectory::EnumerateDirectories(/*[in]*/ BSTR directory, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
	if (SysStringLen(directory) == 0) {
		return Error(L"Argument 'directory' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}	
	if (ppINCFCollectionList == nullptr) {
		return Error(L"Argument 'ppINCFCollectionList' is NULL", IID_INCFFile, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(directory, &status);
	if (FAILED(hr)) {
		return hr;
	}
	
	CComBSTR bstrDirectory(directory);	
	if (status == VARIANT_TRUE) {			
		HANDLE hFind;
		WIN32_FIND_DATA data;

		CComPtr<INCFCollectionList> pINCFCollectionList;
		HRESULT hr = pINCFCollectionList.CoCreateInstance(L"ItSoftware.NCF.CollectionList");
		if (FAILED(hr)) {
			return Error(L"Could not create type 'ItSoftware.NCF.CollectionList'", IID_INCFFile, hr);
		}

		CComBSTR bstrPattern(L"*.*");

		wchar_t wszBuffer[1024];
		wcscpy_s(wszBuffer, 1024, bstrDirectory.operator LPWSTR());
		if (wszBuffer[wcslen(wszBuffer) - 1] != '\\') {
			wcscat_s(wszBuffer, 1024, L"\\");
		}
		wcscat_s(wszBuffer, 1024, bstrPattern.operator LPWSTR());

		hFind = FindFirstFileW(wszBuffer, &data);
		if (hFind != INVALID_HANDLE_VALUE) {
			do {
				if ((data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) > 0) {
					pINCFCollectionList->AddItemToBack(CComVariant(data.cFileName));
				}
			} while (FindNextFile(hFind, &data));
			FindClose(hFind);

			*ppINCFCollectionList = pINCFCollectionList.Detach();

			return S_OK;
		}
		return Error(L"Could not find directories in given directory.", IID_INCFFile, E_FAIL);	
	}

	return Error(L"Could not validate argument 'directory' as a valid directory.", IID_INCFFile, E_INVALIDARG);
}

STDMETHODIMP CNCFDirectory::GetTempDirectory(/*[out, retval]*/ BSTR* directory)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}
	
	wchar_t wszPath[MAX_PATH];
	if (::GetTempPathW(MAX_PATH, wszPath) == 0) {
		*directory = nullptr;
		return Error(L"Could not create temp path.", IID_INCFDirectory, E_FAIL);
	}

	CComBSTR bstrPath(wszPath);
	*directory = bstrPath.Detach();

	return S_OK;
}

STDMETHODIMP CNCFDirectory::GetProgramDataDirectory(/*[out, retval]*/ BSTR* directory) 
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFDirectory, E_INVALIDARG);
	}

	wchar_t *pwszFolder = nullptr;
	HRESULT hr = ::SHGetKnownFolderPath(FOLDERID_ProgramData, KNOWN_FOLDER_FLAG::KF_FLAG_NO_ALIAS | KNOWN_FOLDER_FLAG::KF_FLAG_NO_APPCONTAINER_REDIRECTION, NULL, &pwszFolder);
	if (FAILED(hr)) {
		return Error(L"Could not get folder.", IID_INCFDirectory, hr);
	}

	CComBSTR bstr(pwszFolder);

	*directory = bstr.Detach();
	
	::CoTaskMemFree(pwszFolder);

	return S_OK;
}