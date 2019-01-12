// CNCFPath.cpp : Implementation of CNCFPath

#include "stdafx.h"
#include "CNCFPath.h"


// CNCFPath

STDMETHODIMP CNCFPath::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFPath
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CNCFPath::NormalizePath( /*[in]*/ BSTR path,
	/*[out, retval]*/ BSTR* new_path)
{
	if (SysStringLen(path) == 0 || new_path == NULL) {
		return Error(CComBSTR(L"NormalizePath Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	CComBSTR bstr(path);
	if (path[SysStringLen(path) - 1] != L'\\') {
		bstr += L"\\";
	}
	*new_path = bstr.Detach();

	return S_OK;
}

STDMETHODIMP CNCFPath::NormalizeExtension( /*[in]*/ BSTR extension,
	/*[out, retval]*/ BSTR* new_extension)
{
	if (SysStringLen(extension) == 0 || new_extension == NULL) {
		return Error(CComBSTR(L"NormalizeExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	if (extension[0] != L'.') {
		CComBSTR bstr(extension);
		*new_extension = bstr.Detach();
	}
	else if (SysStringLen(extension) > 1) {
		CComBSTR bstr((wchar_t*)&extension[1]);
		*new_extension = bstr.Detach();
	}
	else {
		CComBSTR bstr(L"");
		*new_extension = bstr.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ExtractPath( /*[in]*/ BSTR full_path,
	/*[out, retval]*/ BSTR* path)
{
	if (SysStringLen(full_path) == 0 || path == NULL) {
		return Error(CComBSTR(L"ExtractPath Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		for (long l = 0; l <= lLastHit; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		*path = bstrRetval.Detach();
	}
	else {
		*path = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ExtractExtension( /*[in]*/ BSTR full_path,
	/*[out, retval]*/ BSTR* extension)
{
	if (SysStringLen(full_path) == 0 || extension == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'.') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		for (long l = lLastHit + 1; l < lLength; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		*extension = bstrRetval.Detach();
	}
	else {
		*extension = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ExtractFilename( /*[in]*/ BSTR full_path,
	/*[out, retval]*/ BSTR* filename)
{
	if (SysStringLen(full_path) == 0 || filename == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		for (long l = lLastHit + 1; l < lLength; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		*filename = bstrRetval.Detach();
	}
	else {
		bstrRetval.AppendBSTR(full_path);
		*filename = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ExtractBaseFilename( /*[in]*/ BSTR full_path,
	/*[out, retval]*/ BSTR* base_filename)
{
	if (SysStringLen(full_path) == 0 || base_filename == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		for (long l = lLastHit + 1; l < lLength; l++) {
			if (full_path[l] != L'.') {
				bstrRetval.Append((wchar_t)full_path[l]);
			}
			else {
				break;
			}
		}
	}
	else {
		for (long l = 0; l < lLength; l++) {
			if (full_path[l] != L'.') {
				bstrRetval.Append((wchar_t)full_path[l]);
			}
			else {
				break;
			}
		}// for		
	}
	*base_filename = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFPath::ReplaceFilename( /*[in]*/ BSTR full_path,
	/*[in]*/ BSTR new_file_name,
	/*[out, retval]*/ BSTR* new_full_path)
{
	if (SysStringLen(full_path) == 0 || new_full_path == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		long l(0);
		for (l = 0; l <= lLastHit; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		bstrRetval.AppendBSTR(new_file_name);

		*new_full_path = bstrRetval.Detach();
	}
	else {
		bstrRetval.AppendBSTR(new_file_name);
		*new_full_path = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ReplacePath( /*[in]*/ BSTR full_path,
	/*[in]*/ BSTR new_path,
	/*[out, retval]*/ BSTR* new_full_path)
{
	if (SysStringLen(full_path) == 0 || new_full_path == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		NormalizePath(new_path, &bstrRetval);
		for (long l = lLastHit + 1; l < lLength; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		*new_full_path = bstrRetval.Detach();
	}
	else {
		NormalizePath(new_path, &bstrRetval);
		bstrRetval.AppendBSTR(full_path);
		*new_full_path = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ReplaceBaseFilename( /*[in]*/ BSTR full_path,
	/*[in]*/ BSTR new_base_filename,
	/*[out, retval]*/ BSTR* new_full_path)
{
	if (SysStringLen(full_path) == 0 || new_base_filename == NULL || new_full_path == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'\\' || full_path[l] == L'/') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		long l(0);
		bool fFound(false);
		for (l = 0; l <= lLastHit; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}

		bstrRetval.AppendBSTR(new_base_filename);

		for (l = lLastHit + 1; l < lLength; l++) {
			if (full_path[l] == L'.') {
				fFound = true;
			}

			if (fFound == true) {
				bstrRetval.Append((wchar_t)full_path[l]);
			}
		}// for

		*new_full_path = bstrRetval.Detach();
	}
	else {
		bool fFound(false);
		bstrRetval.AppendBSTR(new_base_filename);
		for (long l = 0; l < lLength; l++) {
			if (full_path[l] == L'.') {
				fFound = true;
			}

			if (fFound == true) {
				bstrRetval.Append((wchar_t)full_path[l]);
			}
		}// for
		*new_full_path = bstrRetval.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFPath::ReplaceFileExtension( /*[in]*/ BSTR full_path,
	/*[in]*/ BSTR new_file_extension,
	/*[out, retval]*/ BSTR* new_full_path)
{
	if (SysStringLen(full_path) == 0 || new_file_extension == NULL || new_full_path == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L'.') {
			lLastHit = l;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		long l(0);
		bool fFound(false);
		for (l = 0; l <= lLastHit; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
		bstrRetval.AppendBSTR(new_file_extension);
	}
	else {
		bstrRetval.AppendBSTR(full_path);
	}
	*new_full_path = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFPath::ReplaceVolume( /*[in]*/ BSTR full_path,
	/*[in]*/ BSTR new_volume,
	/*[out, retval]*/ BSTR* new_full_path)
{
	if (SysStringLen(full_path) == 0 || new_volume == NULL || new_full_path == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L':') {
			lLastHit = l;
			break;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		bstrRetval.Append((wchar_t)new_volume[0]);
		for (long l = lLastHit; l < lLength; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
	}
	else {
		bstrRetval.AppendBSTR(full_path);
	}
	*new_full_path = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFPath::SplitFullPath(	/*[in]*/ BSTR full_path,
	/*[in, out]*/ BSTR *volume,
	/*[in, out]*/ BSTR *path,
	/*[in, out]*/ BSTR *base_filename,
	/*[out, retval]*/ BSTR *file_extension)
{
	if (SysStringLen(full_path) == 0 || volume == NULL || path == NULL || base_filename == NULL || file_extension == NULL) {
		return Error(CComBSTR(L"SplitFullPath Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	ExtractVolume(full_path, volume);
	ExtractPath(full_path, path);
	ExtractBaseFilename(full_path, base_filename);
	ExtractExtension(full_path, file_extension);

	return S_OK;
}

STDMETHODIMP CNCFPath::ExtractVolume( /*[in]*/ BSTR full_path,
	/*[out, retval]*/ BSTR *volume)
{
	if (SysStringLen(full_path) == 0 || volume == NULL) {
		return Error(CComBSTR(L"ExtractExtension Failed. Invalid Arguments."), IID_INCFPath, E_INVALIDARG);
	}

	long lLength = SysStringLen(full_path);
	long lLastHit(-1);
	for (long l = 0; l < lLength; l++) {
		if (full_path[l] == L':') {
			lLastHit = l;
			break;
		}
	}

	CComBSTR bstrRetval(L"");
	if (lLastHit != -1) {
		for (long l = 0; l < lLastHit; l++) {
			bstrRetval.Append((wchar_t)full_path[l]);
		}
	}
	*volume = bstrRetval.Detach();

	return S_OK;
}