// CNCFFile.cpp : Implementation of CNCFFile

#include "stdafx.h"
#include "CNCFFile.h"
#include "../ItSoftware.NCF.IO/ItSoftwareNCFIO_i.h"
#include "CNCFFileStream.h"
#include "CNCFStringStream.h"
#include <codecvt>
#include <iostream>
#include <fstream>
using namespace std;

unsigned char BOM_UTF8[3] = { 0xEF, 0xBB, 0xBF };

#ifdef __MINGW32_VERSION
#ifndef _GLIBCXX_USE_WCHAR_T

namespace std
{
	//instantiate the codecvt facet id for the required types
	locale::id codecvt<wchar_t, char, mbstate_t>::id;
}

#endif //_GLIBCXX_USE_WCHAR_T
#endif //__MINGW32_VERSION

// CNCFFile

STDMETHODIMP CNCFFile::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFFile
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFFile::CreateOrOpen(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFFileStream** ppINCFFileStream)
{
	if (filename == nullptr) 
	{
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
	
	if (SysStringLen(filename) == 0) 
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}
	
	if (ppINCFFileStream == nullptr) 
	{
		return Error(L"Argument 'ppINCFFileStream' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
	
	CComBSTR bstrFileName(filename);
	fstream* pfStream = nullptr;
	VARIANT_BOOL vtStatus(VARIANT_FALSE);
	if (this->Exists(bstrFileName, &vtStatus) == S_OK && vtStatus == VARIANT_TRUE) {
		// open existing		
		pfStream = new std::fstream();
		pfStream->open(bstrFileName.operator LPWSTR(), std::fstream::binary | std::fstream::_Nocreate | std::fstream::in | std::fstream::out);
		if (!pfStream->is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
	}
	else {
		// open new
		pfStream = new std::fstream();
		pfStream->open(bstrFileName.operator LPWSTR(), std::fstream::binary | std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (!pfStream->is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
	}
	
	CComPtr<INCFFileStream> pINCFFileStream;
	HRESULT hr = pINCFFileStream.CoCreateInstance(L"ItSoftware.NCF.FileStream");
	if (FAILED(hr)) {
		return Error(L"Could not create 'ItSoftware.NCF.FileStream'.", IID_INCFFile, hr);
	}

	CNCFFileStream* pCNCFFileStream = dynamic_cast<CNCFFileStream*>(pINCFFileStream.p);
	pCNCFFileStream->Initialize(pfStream);

	*ppINCFFileStream = pINCFFileStream.Detach();

	return S_OK;
}

STDMETHODIMP CNCFFile::CreateOrOpenText(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFStringStream** ppINCFStringStream)
{
	if (filename == nullptr)
	{
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (SysStringLen(filename) == 0)
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}

	if (ppINCFStringStream == nullptr)
	{
		return Error(L"Argument 'ppINCFStringStream' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	CComBSTR bstrFileName(filename);
	wfstream* pfStream = nullptr;
	VARIANT_BOOL vtStatus(VARIANT_FALSE);
	bool bHasByteOrderMark = false;
	if (this->Exists(bstrFileName, &vtStatus) == S_OK && vtStatus == VARIANT_TRUE) {
		// open existing		
		fstream fs;
		fs.open(bstrFileName.operator LPWSTR(), std::fstream::in | std::fstream::app || std::fstream::binary);
		if (!fs.is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
		fs.seekg(0, ios::end);
		if (fs.tellg() >= 3) 
		{
			fs.seekg(0, std::fstream::beg);
			unsigned char bom1;
			unsigned char bom2;
			unsigned char bom3;
			fs.read((char*)&bom1, 1);
			fs.read((char*)&bom2, 1);
			fs.read((char*)&bom3, 1);

			if (bom1 == BOM_UTF8[0] && bom2 == BOM_UTF8[1] && bom3 == BOM_UTF8[2]) {
				bHasByteOrderMark = true;
			}
			else {
				bHasByteOrderMark = false;
			}
		}
		else {
			bHasByteOrderMark = false;
		}
		fs.close();

		std::locale utf8_locale( std::locale(), new std::codecvt_utf8<wchar_t>() );
		pfStream = new std::wfstream();
		pfStream->imbue(utf8_locale);
		pfStream->open(bstrFileName.operator LPWSTR(), std::fstream::_Nocreate | std::fstream::in | std::fstream::out | std::fstream::app);
		if (!pfStream->is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
	}
	else {
		// open new		
		unsigned char smarker[3];
		smarker[0] = 0xEF;
		smarker[1] = 0xBB;
		smarker[2] = 0xBF;
		fstream fs;
		fs.open(bstrFileName.operator LPWSTR(), std::fstream::out | std::fstream::trunc);
		if (!fs.is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
		fs.write((char*)smarker, 3);
		fs.close();
		bHasByteOrderMark = true;

		std::locale utf8_locale( std::locale(), new std::codecvt_utf8<wchar_t>() );
		pfStream = new std::wfstream();
		pfStream->imbue(utf8_locale);
		pfStream->open(bstrFileName.operator LPWSTR(), std::fstream::in | std::fstream::out | std::fstream::app);
		if (!pfStream->is_open()) {
			return Error(L"Could not open file!", IID_INCFFile, E_FAIL);
		}
		
	}
	
	CComPtr<INCFStringStream> pINCFStringStream;
	HRESULT hr = pINCFStringStream.CoCreateInstance(L"ItSoftware.NCF.StringStream");
	if (FAILED(hr)) {
		return Error(L"Could not create 'ItSoftware.NCF.FileStream'.", IID_INCFFile, hr);
	}

	if (bHasByteOrderMark) {
		pfStream->seekg( 3, std::fstream::beg );
		pfStream->seekp( 0, std::fstream::end );
	}
	else {
		pfStream->seekg( 0, std::fstream::beg );
		pfStream->seekp( 0, std::fstream::end );
	}

	CNCFStringStream* pCNCFStringStream = dynamic_cast<CNCFStringStream*>(pINCFStringStream.p);
	pCNCFStringStream->Initialize(pfStream,bHasByteOrderMark);

	*ppINCFStringStream = pINCFStringStream.Detach();

	return S_OK;
}

STDMETHODIMP CNCFFile::CreateNew(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFFileStream** ppINCFFileStream)
{
	if (filename == nullptr)
	{
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (SysStringLen(filename) == 0)
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}

	if (ppINCFFileStream == nullptr)
	{
		return Error(L"Argument 'ppINCFFileStream' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(filename, &status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_TRUE) {
		hr = this->Delete(filename);
		if (FAILED(hr)) {
			return hr;
		}
	}

	return this->CreateOrOpen(filename, ppINCFFileStream);
}

STDMETHODIMP CNCFFile::CreateNewText(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFStringStream** ppINCFStringStream)
{
	if (filename == nullptr)
	{
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (SysStringLen(filename) == 0)
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}

	if (ppINCFStringStream == nullptr)
	{
		return Error(L"Argument 'ppINCFStringStream' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(filename, &status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_TRUE) {
		hr = this->Delete(filename);
		if (FAILED(hr)) {
			return hr;
		}
	}

	return this->CreateOrOpenText(filename, ppINCFStringStream);	
}

STDMETHODIMP CNCFFile::Exists(/*[in]*/ BSTR filename, /*[out, retval]*/ VARIANT_BOOL* status)
{
	if (filename == nullptr) {
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (status == nullptr) {
		return Error(L"Argument 'status' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (SysStringLen(filename) == 0) 
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}

	CComPtr<INCFPath> pINCFPath;
	HRESULT hr = pINCFPath.CoCreateInstance(L"ItSoftware.NCF.Path");
	if (FAILED(hr)) {
		return Error("Could not create 'ItSoftware.NCF.Path'.", IID_INCFFile, hr);
	}

	CComBSTR bstrFileName(filename);

	CComBSTR bstrTemp;
	pINCFPath->ExtractFilename(bstrFileName, &bstrTemp);

	if (bstrTemp.Length() > 0) 
	{
		BOOL bStatus = ::PathFileExistsW(bstrFileName.operator LPWSTR());
		if (bStatus) 
		{
			WIN32_FILE_ATTRIBUTE_DATA attData = { 0 };
			bStatus = ::GetFileAttributesExW(bstrFileName, GET_FILEEX_INFO_LEVELS::GetFileExInfoStandard, (LPVOID)&attData);
			DWORD dwCheck = attData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY;
			*status = (bStatus && dwCheck == 0) ? VARIANT_TRUE : VARIANT_FALSE;
			return S_OK;
		}
		else {
			*status = VARIANT_FALSE;
			return S_OK;
		}
	}
	
	return Error(L"Argument 'filename' not a file.", IID_INCFFile, E_FAIL);
}

STDMETHODIMP CNCFFile::Delete(/*[in]*/ BSTR filename)
{
	if (filename == nullptr) {
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}

	if (SysStringLen(filename) == 0)
	{
		return Error(L"Argument 'filename' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}

	VARIANT_BOOL status(VARIANT_FALSE);
	HRESULT hr = this->Exists(filename,&status);
	if (FAILED(hr)) {
		return hr;
	}

	if (status == VARIANT_TRUE) {
		if (!::DeleteFile(CComBSTR(filename).operator LPWSTR())) {
			return Error(L"Could not delete file!", IID_INCFFile, E_FAIL);
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFFile::EnumerateFiles(/*[in]*/ BSTR directory, /*[in]*/ BSTR pattern, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList)
{
	if (directory == nullptr) {
		return Error(L"Argument 'directory' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
	if (SysStringLen(directory) == 0) {
		return Error(L"Argument 'directory' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}
	if (pattern == nullptr) {
		return Error(L"Argument 'pattern' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
	if (SysStringLen(pattern) == 0) {
		return Error(L"Argument 'pattern' has invalid length.", IID_INCFFile, E_INVALIDARG);
	}
	if (ppINCFCollectionList == nullptr) {
		return Error(L"Argument 'ppINCFCollectionList' is NULL", IID_INCFFile, E_INVALIDARG);
	}

	CComBSTR bstrDirectory(directory);
	CComBSTR bstrPattern(pattern);
	if (::PathFileExistsW(bstrDirectory.operator LPWSTR())) {
		VARIANT_BOOL status(VARIANT_FALSE);
		HRESULT hr = this->Exists(directory, &status);
		if (FAILED(hr)) {
			return hr;
		}

		if (status == VARIANT_FALSE) 
		{
			HANDLE hFind;
			WIN32_FIND_DATA data;

			CComPtr<INCFCollectionList> pINCFCollectionList;
			HRESULT hr = pINCFCollectionList.CoCreateInstance(L"ItSoftware.NCF.CollectionList");
			if (FAILED(hr)) {
				return Error(L"Could not create type 'ItSoftware.NCF.CollectionList'", IID_INCFFile, hr);
			}			

			wchar_t wszBuffer[1024];
			wcscpy_s(wszBuffer, 1024, bstrDirectory.operator LPWSTR());
			if (wszBuffer[wcslen(wszBuffer) - 1] != '\\') {
				wcscat_s(wszBuffer, 1024, L"\\");
			}
			wcscat_s(wszBuffer, 1024, bstrPattern.operator LPWSTR());

			hFind = FindFirstFileW(wszBuffer, &data);
			if (hFind != INVALID_HANDLE_VALUE) {
				do {
					if ((data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0) {
						pINCFCollectionList->AddItemToBack(CComVariant(data.cFileName));
					}
				} while (FindNextFile(hFind, &data));
				FindClose(hFind);
				
				*ppINCFCollectionList = pINCFCollectionList.Detach();
				
				return S_OK;
			}
			return Error(L"Could not find files in given directory.", IID_INCFFile, E_FAIL);
		}
	}	

	return Error(L"Could not validate argument 'directory' as a valid directory.", IID_INCFFile, E_INVALIDARG);
}

STDMETHODIMP CNCFFile::GetTempFilename(/*[in]*/ BSTR extension, /*[out, retval]*/ BSTR* filename)
{
	if (filename == nullptr) {
		return Error(L"Argument 'filename' is NULL.", IID_INCFFile, E_INVALIDARG);
	}	
	if (extension == nullptr) {
		return Error(L"Argument 'extension' is NULL.", IID_INCFFile, E_INVALIDARG);
	}
		
	GUID guid;
	HRESULT hr = ::CoCreateGuid(&guid);
	if (FAILED(hr)) {
		return Error(L"Could not create GUID as basis for temp filename.", IID_INCFFile, hr);
	}
	
	wchar_t wszBuffer1[20];
	unsigned long ul1 = guid.Data1;
	_ultow_s(guid.Data1, wszBuffer1, 20, 16);

	wchar_t wszBuffer2[20];	
	unsigned long ul2 = (unsigned long)guid.Data3;
	_ultow_s(ul2, wszBuffer2, 20, 16);

	wchar_t wszTempFileName[MAX_PATH];
	wcscpy_s(wszTempFileName, MAX_PATH, wszBuffer1);
	wcscat_s(wszTempFileName, MAX_PATH, wszBuffer2);
	
	UINT lExtensionLength = SysStringLen(extension);
	if (lExtensionLength > 0 && lExtensionLength < 100) {
		CComBSTR bstrExtension(extension);
		wchar_t wszBufferExt[100];	
		wcscpy_s(wszBufferExt, 20, bstrExtension.operator LPWSTR());
		if (wszBufferExt[0] != '.') {
			wcscat_s(wszTempFileName, MAX_PATH, L".");
		}		
		wcscat_s(wszTempFileName, MAX_PATH, wszBufferExt);
	}
	
	CComBSTR bstr(wszTempFileName);
	bstr.ToLower();

	*filename = bstr.Detach();

	return S_OK;
}