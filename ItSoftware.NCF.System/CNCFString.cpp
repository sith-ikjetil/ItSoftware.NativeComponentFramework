// NCFString.cpp : Implementation of CNCFString

#include "stdafx.h"
#include "CNCFString.h"
#include <string>
using namespace std;
#pragma warning( disable : 4311 ) 

#include "atlstr.h"

// CNCFString

STDMETHODIMP CNCFString::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFString
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


//
// IKKSString
//
STDMETHODIMP CNCFString::Left(	/*[in]*/ BSTR source_string,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL || length < 0) {
		return Error(CComBSTR(L"Left Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	long lLength = SysStringLen(source_string);
	if (lLength <= length) {
		*result_string = CComBSTR(source_string).Detach();
	}
	else {
		wchar_t *pwcsBuffer = new wchar_t[length + 1];
		for (long l = 0; l < length; l++) {
			pwcsBuffer[l] = source_string[l];
		}
		pwcsBuffer[length] = L'\0';

		CComBSTR bstrResult(pwcsBuffer);
		delete[] pwcsBuffer;

		*result_string = bstrResult.Detach();
	}

	return S_OK;
}

// 0-based index. 0->(length-1)
STDMETHODIMP CNCFString::Mid(	/*[in]*/ BSTR source_string,
	/*[in]*/ long start_index,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || start_index < 0 || length < 0 || result_string == NULL || start_index >(long)SysStringLen(source_string)) {
		return Error(CComBSTR(L"Mid Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	long lLength = SysStringLen(source_string);
	if (lLength < length && start_index == 0) {
		*result_string = CComBSTR(L"").Detach();
	}
	else {
		wchar_t *pwcsBuffer = new wchar_t[length + 1];
		long lStop(start_index + length);
		long i(0);
		for (long l = start_index; l < lStop; l++, i++) {
			pwcsBuffer[i] = source_string[l];
		}
		pwcsBuffer[length] = L'\0';

		CComBSTR bstrResult(pwcsBuffer);
		delete[] pwcsBuffer;

		*result_string = bstrResult.Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::Right(	/*[in]*/ BSTR source_string,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Right Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	long lLength = SysStringLen(source_string);
	if (lLength <= length) {
		*result_string = CComBSTR(source_string).Detach();
	}
	else {
		wchar_t *pwcsBuffer = new wchar_t[length + 1];
		long lStart(lLength - length);
		long i(0);
		for (long l = lStart; l < lLength; l++, i++) {
			pwcsBuffer[i] = source_string[l];
		}
		pwcsBuffer[length] = L'\0';

		CComBSTR bstrResult((wchar_t *)pwcsBuffer);
		delete[] pwcsBuffer;

		*result_string = bstrResult.Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::SpanIncluding(	/*[in]*/ BSTR source_string,
	/*[in]*/ BSTR char_set,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(char_set) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"SpanIncluding Failed. Invalid arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lLength = SysStringLen(source_string);
	long lSubLength = SysStringLen(char_set);
	long l(0);
	bool bFound(false);
	long lLastFoundIndex(-1);
	while (l < lLength) {
		for (long i = 0; i < lSubLength; i++) {
			if (source_string[l] == char_set[i]) {
				bFound = true;
				lLastFoundIndex = l;
				break;
			}
		}// for

		if (bFound == false) {
			break;
		}

		l++;
		bFound = false;
	}

	if (lLastFoundIndex != -1) {
		Left(source_string, lLastFoundIndex + 1, result_string);
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::SpanExcluding(	/*[in]*/ BSTR source_string,
	/*[in]*/ BSTR char_set,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(char_set) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"SpanExcluding Failed. Invalid arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lLength = SysStringLen(source_string);
	long lSubLength = SysStringLen(char_set);
	long l(0);
	bool bFound(false);
	while (l < lLength) {
		for (long i = 0; i < lSubLength; i++) {
			if (source_string[l] == char_set[i]) {
				bFound = true;
				break;
			}
		}// for

		if (bFound == true) {
			break;
		}

		bFound = false;
		l++;
	}

	if (l > 0) {
		Left(source_string, l, result_string);
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::ToUpperCase( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"ToUpperCase Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstr(source_string);
	bstr.ToUpper();
	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::ToLowerCase( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"ToLowerCase Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstr(source_string);
	bstr.ToLower();
	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::Reverse( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Reverse Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstr(_wcsrev(source_string));

	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::Replace(	/*[in]*/ BSTR source_string,
	/*[in]*/ BSTR replace_string,
	/*[in]*/ BSTR replacement_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(replace_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Replace Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstr(source_string);
	long lIndex(0);
	Find(bstr, replace_string, &lIndex);
	while (lIndex != -1) {
		CComBSTR left;
		CComBSTR right;

		Left(bstr, lIndex, &left);
		Right(bstr, bstr.Length() - SysStringLen(replace_string) - lIndex, &right);

		bstr.Empty();
		bstr.AppendBSTR(left);
		bstr.AppendBSTR(replacement_string);
		bstr.AppendBSTR(right);
		FindNext(bstr, replace_string, lIndex, &lIndex);
	}

	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::ReplaceSection( /*[in]*/ BSTR source_string,
	/*[in]*/ long start_index,
	/*[in]*/ long length,
	/*[in]*/ BSTR replacement_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || start_index < 0 || length < 1 || result_string == NULL) {
		return Error(CComBSTR(L"ReplaceSection Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstrSource(source_string);

	CComBSTR bstr;
	Left(source_string, start_index, &bstr);

	bstr.AppendBSTR(replacement_string);

	if (start_index + length <= (long)SysStringLen(source_string)) {
		CComBSTR bstrTemp;
		Right(source_string, bstrSource.Length() - start_index - length, &bstrTemp);
		bstr.AppendBSTR(bstrTemp);
	}

	*result_string = bstr.Detach();

	return S_OK;
}



STDMETHODIMP CNCFString::CutLeft( /*[in]*/ BSTR source_string,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || length < 0 || result_string == NULL) {
		return Error(CComBSTR(L"CutLeft Failed. Invalid Arguments."), IID_INCFString, E_FAIL);
	}

	long lLength = SysStringLen(source_string);
	if (lLength <= length) {
		*result_string = CComBSTR(L"").Detach();
	}
	else {
		Right(source_string, lLength - length, result_string);
	}

	return S_OK;
}


STDMETHODIMP CNCFString::CutMid( /*[in]*/ BSTR source_string,
	/*[in]*/ long start_index,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || length < 0 || result_string == NULL || start_index < 0 || start_index >(long)SysStringLen(source_string)) {
		return Error(CComBSTR(L"CutMid Failed. Invalid Arguments."), IID_INCFString, E_FAIL);
	}

	long lLength = SysStringLen(source_string);
	if (start_index == 0 && lLength == length) {
		*result_string = CComBSTR(L"").Detach();
	}
	else if (length == 0) {
		*result_string = CComBSTR(source_string).Detach();
	}
	else {
		CComBSTR bstrLeft;
		if (start_index > 0) {
			Left(source_string, start_index - 1, &bstrLeft);
		}

		CComBSTR bstrRight;
		if ((start_index + length) < lLength) {
			Right(source_string, lLength - length - start_index, &bstrRight);
		}

		bstrLeft.AppendBSTR(bstrRight);
		*result_string = bstrLeft.Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::CutRight( /*[in]*/ BSTR source_string,
	/*[in]*/ long length,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || length < 0 || result_string == NULL) {
		return Error(CComBSTR(L"CutRight Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lLength = SysStringLen(source_string);
	if (lLength <= length) {
		*result_string = CComBSTR(L"").Detach();
	}
	else {
		CComBSTR bstrLeft;
		Left(source_string, lLength - length, &bstrLeft);
		*result_string = bstrLeft.Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::Insert( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR insert_string,
	/*[in]*/ long index,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(insert_string) == 0 || index < 0 || result_string == NULL || index >= (long)SysStringLen(source_string)) {
		return Error(CComBSTR(L"Insert Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	Left(source_string, index, &bstr);
	bstr.AppendBSTR(insert_string);

	CComBSTR bstrTemp;
	Right(source_string, SysStringLen(source_string) - index, &bstrTemp);

	bstr.AppendBSTR(bstrTemp);

	*result_string = bstr.Detach();

	return S_OK;
}

STDMETHODIMP CNCFString::ToString( /*[in]*/ VARIANT value,
	/*[out, retval]*/ BSTR *result_string)
{
	CComVariant vtValue(value);
	HRESULT hr = vtValue.ChangeType(VT_BSTR);
	if (FAILED(hr)) {
		return Error(CComBSTR(L"ToString Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr(vtValue.bstrVal);

	*result_string = bstr.Detach();

	return S_OK;
}

STDMETHODIMP CNCFString::GetLength( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ long *result_value)
{
	if (source_string == NULL || result_value == NULL) {
		return Error(CComBSTR(L"GetLength Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = SysStringLen(source_string);
	return S_OK;
}


STDMETHODIMP CNCFString::StringBetweenStrings( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR string1,
	/*[in]*/ BSTR string2,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(string1) == 0 || SysStringLen(string2) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"StringBetweenStrings Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	long lIndex1(0);
	Find(source_string, string1, &lIndex1);

	if (lIndex1 != -1) {
		long lIndex2(lIndex1+SysStringLen(string1));
		if (CComBSTR(string1) == CComBSTR(string2)) {
			FindNext(source_string, string2, lIndex1, &lIndex2);
		}
		else {
			Find(source_string+lIndex2, string2, &lIndex2);
			lIndex2 += lIndex1 + SysStringLen( string1 );
		}
		if (lIndex2 == -1 || lIndex1 == lIndex2) {
			*result_string = CComBSTR(L"").Detach();
		}
		else {
			if (lIndex1 < lIndex2) {
				lIndex1 += SysStringLen(string1);
				Mid(source_string, lIndex1, lIndex2 - lIndex1, result_string);
			}
			else {
				lIndex2 += SysStringLen(string2);
				Mid(source_string, lIndex2, lIndex1 - lIndex2, result_string);
			}
		}
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::StringBetweenStringsInOrder( /*[in]*/ BSTR source_string, /*[in]*/ BSTR string1, /*[in]*/ BSTR string2, /*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(string1) == 0 || SysStringLen(string2) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"StringBetweenStringsInOrder Failed. Invalid Argument."), IID_INCFString, E_FAIL);
	}

	long lIndex1(0);
	Find(source_string, string1, &lIndex1);

	if (lIndex1 != -1) {
		long lIndex2(0);
		Find(source_string, string2, &lIndex2);
		while (lIndex2 != -1 && lIndex2 <= lIndex1) {
			FindNext(source_string, string2, lIndex2, &lIndex2);
		}

		if (lIndex2 != -1) {
			lIndex1 += SysStringLen(string1);
			Mid(source_string, lIndex1, lIndex2 - lIndex1, result_string);
		}
		else {
			*result_string = CComBSTR(L"").Detach();
		}
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::StringBetweenStringsEx( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR string1,
	/*[in]*/ BSTR string2,
	/*[in]*/ long string_pair_number,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(string1) == 0 || SysStringLen(string2) == 0 || string_pair_number < 0 || result_string == NULL) {
		return Error(CComBSTR(L"StringBetweenStringsEx Failed. Invalid Argument."), IID_INCFString, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	long lIndex(0);
	while (string_pair_number--) {
		Find(source_string, string1, &lIndex);
		if (lIndex < 0) {
			break;
		}
	}

	if (lIndex >= 0) {
		long lIndex2(0);
		CComBSTR left((wchar_t *)source_string[lIndex + SysStringLen(string1)]);
		Find(left, string2, &lIndex2);
		if (lIndex2 < 0) {
			*result_string = CComBSTR(L"").Detach();
		}
		else {
			lIndex += SysStringLen(string1);
			Mid(source_string, lIndex, lIndex2, result_string);
		}
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::StringBeforeString( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR search_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(search_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"StringBeforeString Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lIndex(0);
	Find(source_string, search_string, &lIndex);
	if (lIndex != -1) {
		Left(source_string, lIndex, result_string);
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}
	return S_OK;
}

STDMETHODIMP CNCFString::StringAfterString( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR search_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(search_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"StringAfterString Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lIndex(0);
	Find(source_string, search_string, &lIndex);
	if (lIndex != -1) {
		Right(source_string, SysStringLen(source_string) - lIndex - SysStringLen(search_string), result_string);
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::Find( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index
	)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"Find Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	wchar_t *pwcs = wcsstr(source_string, substr);
	if (pwcs != NULL) {
		*result_index = ((reinterpret_cast<long>(pwcs)-reinterpret_cast<long>(source_string)) / sizeof(wchar_t));
	}
	else {
		*result_index = -1;
	}
	return S_OK;
}

STDMETHODIMP CNCFString::FindNext( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[in]*/ long last_found_index,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || last_found_index < 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindNext Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	last_found_index += SysStringLen(substr);

	long lLengthSubStr = (long)SysStringLen(substr);
	long lLengthSourceString = (long)SysStringLen(source_string);
	if ((lLengthSubStr + last_found_index) >= lLengthSourceString) {
		*result_index = -1;
	}
	else {
		CComBSTR bstr;
		Right(source_string, lLengthSourceString - last_found_index, &bstr);
		long lIndex(0);
		Find(bstr, substr, &lIndex);
		if (lIndex != -1) {
			*result_index = last_found_index + lIndex;
		}
		else {
			*result_index = -1;
		}
	}

	return S_OK;
}


STDMETHODIMP CNCFString::FindReverse(/*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindReverse Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstrSourceString;
	Reverse(source_string, &bstrSourceString);

	CComBSTR bstrSubStr;
	Reverse(substr, &bstrSubStr);

	wchar_t *pwcs = wcsstr(bstrSourceString, bstrSubStr);
	if (pwcs != NULL) {
		*result_index = SysStringLen(source_string) - ((reinterpret_cast<long>(pwcs)-reinterpret_cast<long>(bstrSourceString.m_str)) / sizeof(wchar_t)) - SysStringLen(substr);
	}
	else {
		*result_index = -1;
	}

	return S_OK;
}

STDMETHODIMP CNCFString::FindReverseNext(/*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[in]*/ long last_found_index,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || last_found_index < 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindNext Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lLengthSubStr = static_cast<long>(SysStringLen(substr));
	long lLengthSourceString = static_cast<long>(SysStringLen(source_string));

	if ((lLengthSubStr + last_found_index) >= lLengthSourceString) {
		*result_index = -1;
	}
	else {
		CComBSTR bstrSubStr(substr);
		Reverse(substr, &bstrSubStr);

		CComBSTR bstrSourceString;
		Reverse(source_string, &bstrSourceString);

		CComBSTR bstr;
		Right(bstrSourceString, last_found_index, &bstr);

		long lIndex(0);
		Find(bstr, bstrSubStr, &lIndex);
		if (lIndex != -1) {
			*result_index = (last_found_index - lLengthSubStr) - lIndex;
		}
		else {
			*result_index = -1;
		}
	}

	return S_OK;
}


STDMETHODIMP CNCFString::Append( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR append_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Append Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr(source_string);
	if (append_string != NULL) {
		bstr.AppendBSTR(append_string);
	}
	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::Compare( /*[in]*/ BSTR source_string1,
	/*[in]*/ BSTR source_string2,
	/*[in]*/ VARIANT_BOOL case_sensitive,
	/*[out, retval]*/ long *result_value)
{
	if (source_string1 == NULL || source_string2 == NULL || result_value == NULL) {
		return Error(CComBSTR(L"Compare Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	if (case_sensitive == VARIANT_TRUE) {
		*result_value = lstrcmp(source_string1, source_string2);
	}
	else {
		*result_value = lstrcmpi(source_string1, source_string2);
	}

	return S_OK;
}


STDMETHODIMP CNCFString::Copy( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Copy Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr(source_string);
	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::FindFirstOf( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindFirstOf Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	wchar_t *pwcs = wcspbrk(source_string, substr);
	if (pwcs != NULL) {
		*result_index = ((reinterpret_cast<ULONG>(pwcs)-reinterpret_cast<ULONG>(source_string)) / sizeof(wchar_t));
	}
	else {
		*result_index = -1;
	}

	return S_OK;
}


STDMETHODIMP CNCFString::FindFirstNotOf( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindFirstOf Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	wchar_t *pwcs = _wcsspnp(source_string, substr);
	if (pwcs != NULL) {
		*result_index = (reinterpret_cast<long>(pwcs)-reinterpret_cast<long>(source_string)) / sizeof(wchar_t);
	}
	else {
		*result_index = -1;
	}

	return S_OK;
}

STDMETHODIMP CNCFString::FindLastOf( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindLastOf Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	wstring ws = source_string;
	*result_index = static_cast<long>(ws.find_last_of(substr));

	return S_OK;
}


STDMETHODIMP CNCFString::FindLastNotOf( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substr,
	/*[out, retval]*/ long *result_index)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substr) == 0 || result_index == NULL) {
		return Error(CComBSTR(L"FindLastNotOf Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	wstring ws = source_string;
	*result_index = static_cast<long>(ws.find_last_not_of(substr));

	return S_OK;
}


STDMETHODIMP CNCFString::Trim( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"Trim Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	TrimLeft(source_string, &bstr);
	CComBSTR bstr2;
	TrimRight(bstr, &bstr2);

	*result_string = bstr2.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::TrimLeft( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"TrimLeft Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lIndex(0);
	FindFirstNotOf(source_string, CComBSTR(L" "), &lIndex);
	if (lIndex != -1) {
		CutLeft(source_string, lIndex, result_string);
	}

	return S_OK;
}


STDMETHODIMP CNCFString::TrimRight( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"TrimRight Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lIndex(0);
	FindLastNotOf(source_string, CComBSTR(L" "), &lIndex);
	if (lIndex != -1) {
		if (SysStringLen(source_string) != lIndex + 1) {
			CComBSTR result;
			CutRight(source_string, SysStringLen(source_string) - (lIndex + 1), &result);
			*result_string = result.Detach();
		}
		else {
			CComBSTR bstr(source_string);
			*result_string = bstr.Detach();
		}
	}
	else {
		CComBSTR bstr(source_string);
		*result_string = bstr.Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::TrimEx( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR trim_characters,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(trim_characters) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"TrimEx Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	TrimLeftEx(source_string, trim_characters, &bstr);
	TrimRightEx(bstr, trim_characters, result_string);

	return S_OK;
}

STDMETHODIMP CNCFString::TrimLeftEx( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR trim_characters,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(trim_characters) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"TrimLeftEx Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr(source_string);

	long lIndex(0);
	FindFirstNotOf(source_string, trim_characters, &lIndex);
	if (lIndex != -1) {
		CutLeft(source_string, lIndex, result_string);
	}

	return S_OK;
}


STDMETHODIMP CNCFString::TrimRightEx( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR trim_characters,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(trim_characters) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"TrimRightEx Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lIndex(0);
	FindLastNotOf(source_string, trim_characters, &lIndex);
	if (lIndex != -1) {
		if (SysStringLen(source_string) != lIndex + 1) {
			CutRight(source_string, SysStringLen(source_string) - (lIndex + 1), result_string);
		}
	}

	return S_OK;
}




STDMETHODIMP CNCFString::Split( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR delimiter_string,
	/*[in, out]*/ BSTR *remainder_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(delimiter_string) == 0 || remainder_string == NULL || result_string == NULL) {
		return Error(CComBSTR(L"Split Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	SysFreeString(*remainder_string);

	long lIndex(0);
	Find(source_string, delimiter_string, &lIndex);
	if (lIndex != -1) {
		CComBSTR bstr;
		Left(source_string, lIndex, &bstr);
		*result_string = bstr.Detach();

		Right(source_string, SysStringLen(source_string) - lIndex - SysStringLen(delimiter_string), &bstr);
		*remainder_string = bstr.Detach();
	}
	else {
		*remainder_string = CComBSTR(L"").Detach();
		*result_string = CComBSTR(source_string).Detach();
	}

	return S_OK;
}



STDMETHODIMP CNCFString::GetSubstringCount( /*[in]*/ BSTR source_string,
	/*[in]*/ BSTR substring,
	/*[out, retval]*/ long *result_value)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(substring) == 0 || result_value == NULL) {
		return Error(CComBSTR(L"GetSubStrCount Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	long lCount(0);
	long lIndex(0);
	Find(source_string, substring, &lIndex);
	if (lIndex != -1) {
		do {
			lCount++;
			FindNext(source_string, substring, lIndex, &lIndex);
		} while (lIndex != -1);

		*result_value = lCount;
	}
	else {
		*result_value = 0;
	}


	return S_OK;

}

STDMETHODIMP CNCFString::ToFixedLength( /*[in]*/ BSTR source_string,
	/*[in]*/ long length,
	/*[in]*/ BSTR fill_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || length < 0 || SysStringLen(fill_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"ToFixedLength Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	if (SysStringLen(source_string) > static_cast<unsigned>(length)) {
		Left(source_string, length, result_string);
	}
	else if (SysStringLen(source_string) < static_cast<unsigned>(length)) {
		CComBSTR bstr(source_string);
		while (bstr.Length() < static_cast<unsigned>(length)) {
			bstr.AppendBSTR(fill_string);
		}

		if (bstr.Length() > static_cast<unsigned>(length)) {
			CutRight(bstr, bstr.Length() - length, result_string);
		}
		else {
			*result_string = bstr.Detach();
		}
	}

	return S_OK;
}



STDMETHODIMP CNCFString::CreateUniform( /*[in]*/ long length,
	/*[in]*/ BSTR fill_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (length <= 0 || SysStringLen(fill_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"CreateUniform Failed. Invalid Arguments"), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	while ((long)bstr.Length() < length) {
		bstr.AppendBSTR(fill_string);
	}

	if ((long)bstr.Length() > length) {
		Left(bstr, length, result_string);
	}
	else {
		*result_string = bstr.Detach();
	}

	return S_OK;
}


STDMETHODIMP CNCFString::GetLocalNumberFormat( /*[in]*/ VARIANT value,
	/*[out, retval]*/ BSTR *result_string)
{
	CComVariant vtValue(value);
	HRESULT hr = vtValue.ChangeType(VT_BSTR);
	if (FAILED(hr) || result_string == NULL) {
		return Error(CComBSTR(L"GetLocalNumberFormat Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	Replace(vtValue.bstrVal, CComBSTR(L","), CComBSTR(L"."), &bstr);

	wchar_t wcsBuffer[64];
	wcscpy_s(wcsBuffer, 64, vtValue.bstrVal);
	::GetNumberFormat(LOCALE_SYSTEM_DEFAULT, LOCALE_NOUSEROVERRIDE, bstr, NULL, wcsBuffer, 64);

	bstr.Empty();
	bstr.Append(wcsBuffer);

	*result_string = bstr.Detach();
	return S_OK;
}

STDMETHODIMP CNCFString::GetNumberFormat( /*[in]*/ VARIANT number,
	/*[in]*/ long num_digits,	// 0 - 9										 
	/*[in]*/ long grouping, // 0 - 9
	/*[in]*/ BSTR decimal_sep,
	/*[in]*/ BSTR thousand_sep,
	/*[in]*/ ENEGNUMBERMODE negative_number_format,
	/*[out, retval]*/ BSTR *result_string)
{
	CComVariant vtValue(number);
	HRESULT hr = vtValue.ChangeType(VT_BSTR);
	if (FAILED(hr) || num_digits < 0 || grouping < 0 || negative_number_format < 0 || negative_number_format > 4
		|| SysStringLen(decimal_sep) == 0 || SysStringLen(thousand_sep) == 0 || result_string == NULL)
	{
		return Error(CComBSTR(L"GetNumberFormat Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	Replace(vtValue.bstrVal, CComBSTR(L","), CComBSTR(L"."), &bstr);

	NUMBERFMT numberfmt;
	numberfmt.Grouping = grouping;
	numberfmt.LeadingZero = 0;
	numberfmt.lpDecimalSep = decimal_sep;
	numberfmt.lpThousandSep = thousand_sep;
	numberfmt.NegativeOrder = negative_number_format;
	numberfmt.NumDigits = num_digits;

	wchar_t wcsBuffer[128];
	wcscpy_s(wcsBuffer, 128, vtValue.bstrVal);
	::GetNumberFormat(0, 0, bstr, &numberfmt, wcsBuffer, 128);

	bstr.Empty();
	bstr.Append(wcsBuffer);

	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::GetLocalCurrencyFormat( /*[in]*/ VARIANT value,
	/*[out, retval]*/ BSTR *result_string)
{
	CComVariant vtValue(value);
	HRESULT hr = vtValue.ChangeType(VT_BSTR);
	if (FAILED(hr) || result_string == NULL) {
		return Error(CComBSTR(L"GetLocalCurrencyFormat Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	Replace(vtValue.bstrVal, CComBSTR(L","), CComBSTR(L"."), &bstr);

	wchar_t wcsBuffer[64];
	wcscpy_s(wcsBuffer, 64, vtValue.bstrVal);
	::GetCurrencyFormat(LOCALE_SYSTEM_DEFAULT, LOCALE_NOUSEROVERRIDE, bstr, NULL, wcsBuffer, 64);

	bstr.Empty();
	bstr.Append(wcsBuffer);

	*result_string = bstr.Detach();
	return S_OK;
}


STDMETHODIMP CNCFString::GetCurrencyFormat( /*[in]*/ VARIANT value,
	/*[in]*/ long num_digits,
	/*[in]*/ long grouping,
	/*[in]*/ BSTR decimal_sep,
	/*[in]*/ BSTR thousand_sep,
	/*[in]*/ ENEGCURRENCYMODE negative_currency_format,
	/*[in]*/ EPOSCURRENCYMODE positive_currency_format,
	/*[in]*/ BSTR currency_symbol,
	/*[out, retval]*/ BSTR *result_string)
{
	CComVariant vtValue(value);
	HRESULT hr = vtValue.ChangeType(VT_BSTR);

	if (num_digits < 0 || grouping < 0 || negative_currency_format < 0 || positive_currency_format < 0
		|| SysStringLen(decimal_sep) == 0 || SysStringLen(thousand_sep) == 0 || SysStringLen(currency_symbol) == 0
		|| result_string == NULL || FAILED(hr) || positive_currency_format > 3 || negative_currency_format > 15)
	{
		return Error(CComBSTR(L"GetCurrencyFormat Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	CComBSTR bstr;
	Replace(vtValue.bstrVal, CComBSTR(L","), CComBSTR(L"."), &bstr);

	CURRENCYFMT currencyfmt;

	currencyfmt.Grouping = grouping;
	currencyfmt.LeadingZero = 0;
	currencyfmt.lpCurrencySymbol = currency_symbol;
	currencyfmt.lpDecimalSep = decimal_sep;
	currencyfmt.lpThousandSep = thousand_sep;
	currencyfmt.NegativeOrder = negative_currency_format;
	currencyfmt.NumDigits = num_digits;
	currencyfmt.PositiveOrder = positive_currency_format;

	wchar_t wcsBuffer[128];
	wcscpy_s(wcsBuffer, 128, vtValue.bstrVal);
	::GetCurrencyFormat(0, 0, bstr, &currencyfmt, wcsBuffer, 128);

	bstr.Empty();
	bstr.Append(wcsBuffer);

	*result_string = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CNCFString::ExpandEnvironmentString( /*[in]*/ BSTR environment_string,
	/*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(environment_string) == 0 || result_string == NULL) {
		return Error(CComBSTR(L"ExpandEnvironmentString Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	DWORD dwWritten(0);
	dwWritten = ::ExpandEnvironmentStrings(environment_string, NULL, 0);
	if (dwWritten != 0) {
		wchar_t *pwcs = new wchar_t[dwWritten];
		::ExpandEnvironmentStrings(environment_string, pwcs, dwWritten);
		*result_string = CComBSTR(pwcs).Detach();
		delete[] pwcs;
	}
	else {
		*result_string = CComBSTR(L"").Detach();
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasUpperCase( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasUpperCase Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswupper(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasLowerCase( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasLowerCase Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswlower(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasAlpha( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasAlpha Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswalpha(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasAlphaNumeric( /*[in]*/ BSTR source_string,
	/*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasAlphaNumeric Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswalnum(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasDigit( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasDigit Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswdigit(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasHexDigit( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasHexDigit Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswxdigit(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasSpace( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasSpace Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswspace(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasPunct( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasPunct Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswpunct(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasPrint( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasPrint Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswprint(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasGraph( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasGraph Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswgraph(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasASCII( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasASCII Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswascii(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::HasControl( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"HasControl Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_FALSE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (iswcntrl(source_string[lLength])) {
			*result_value = VARIANT_TRUE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsAlpha( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsAlpha Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswalpha(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsAlphaNumeric( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsAlphaNumeric Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswalnum(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsUpperCase( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsUpperCase Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswupper(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsLowerCase( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsLowerCase Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswlower(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsDigit( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsDigit Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}
	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswdigit(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsHexDigit( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsHexDigit Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswxdigit(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsSpace( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsSpace Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswspace(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsPunct( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsPunct Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswpunct(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CNCFString::IsPrint( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsPrint Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswprint(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsGraph( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsGraph Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength = static_cast<long>(wcslen(source_string));
	while (lLength-- > 0) {
		if (!iswgraph(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsASCII( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsASCII Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswascii(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::IsControl( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value)
{
	if (SysStringLen(source_string) == 0) {
		return Error(CComBSTR(L"IsControl Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	*result_value = VARIANT_TRUE;

	long lLength(static_cast<long>(wcslen(source_string)));
	while (lLength-- > 0) {
		if (!iswcntrl(source_string[lLength])) {
			*result_value = VARIANT_FALSE;
			break;
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::SplitToCollection( /*[in]*/ BSTR source_string, /*[in]*/ BSTR delimiter_string, /*[out, retval]*/ INCFCollectionList **ppINCFCollectionList)
{
	if (SysStringLen(source_string) == 0 || SysStringLen(delimiter_string) == 0 || ppINCFCollectionList == NULL) {
		return Error(CComBSTR(L""), IID_INCFString, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	CComPtr<INCFCollectionList> pINCFCollectionList;
	hr = pINCFCollectionList.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionList"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"SplitToCollection Failed. Could Not Create ItSoftware.NCF.CollectionList Component."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstrRest;
	CComBSTR bstrResult;
	hr = Split(source_string, delimiter_string, &bstrRest, &bstrResult);
	hr = pINCFCollectionList->AddItemToBack(CComVariant(bstrResult));
	CComBSTR bstrRemainder(bstrRest);
	while (bstrRemainder.Length() > 0) {
		hr = Split(bstrRemainder, delimiter_string, &bstrRest, &bstrResult);
		hr = pINCFCollectionList->AddItemToBack(CComVariant(bstrResult));
		bstrRemainder = bstrRest;
	}

	*ppINCFCollectionList = pINCFCollectionList.Detach();

	return S_OK;
}

STDMETHODIMP CNCFString::LineSplit( /*[in]*/ BSTR source_string, /*[in, out]*/ BSTR *remainder_string, /*[out, retval]*/ BSTR *result_string)
{
	if (SysStringLen(source_string) == 0 || remainder_string == NULL || result_string == NULL) {
		return Error(CComBSTR(L"LineSplit Failed. Invalid Arguments."), IID_INCFString, E_FAIL);
	}

	SysFreeString(*remainder_string);
	CComBSTR bstrDelimiterString(L"\r\n");

	long lIndex(0);
	Find(source_string, bstrDelimiterString, &lIndex);
	if (lIndex != -1) {
		CComBSTR bstr;
		Left(source_string, lIndex, &bstr);
		*result_string = bstr.Detach();

		Right(source_string, SysStringLen(source_string) - lIndex - bstrDelimiterString.Length(), &bstr);
		*remainder_string = bstr.Detach();
	}
	else {
		CComBSTR bstrDelimiterString(L"\n");
		Find(source_string, bstrDelimiterString, &lIndex);
		if (lIndex != -1) {
			CComBSTR bstr;
			Left(source_string, lIndex, &bstr);
			*result_string = bstr.Detach();

			Right(source_string, SysStringLen(source_string) - lIndex - bstrDelimiterString.Length(), &bstr);
			*remainder_string = bstr.Detach();
		}
		else {
			*remainder_string = CComBSTR(L"").Detach();
			*result_string = CComBSTR(source_string).Detach();
		}
	}

	return S_OK;
}

STDMETHODIMP CNCFString::LineSplitToCollection( /*[in]*/ BSTR source_string, /*[out, retval]*/ INCFCollectionList **ppINCFCollectionList)
{
	if (SysStringLen(source_string) == 0 || ppINCFCollectionList == NULL) {
		return Error(CComBSTR(L"LineSplitToCollection Failed. Invalid Arguments."), IID_INCFString, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	CComPtr<INCFCollectionList> pINCFCollectionList;
	hr = pINCFCollectionList.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.CollectionList"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"LineSplitToCollection Failed. Could Not Create ItSoftware.NCF.CollectionList Component."), IID_INCFString, E_FAIL);
	}

	CComBSTR bstrRest;
	CComBSTR bstrResult;
	hr = LineSplit(source_string, &bstrRest, &bstrResult);
	hr = pINCFCollectionList->AddItemToBack(CComVariant(bstrResult));
	CComBSTR bstrRemainder(bstrRest);
	while (bstrRemainder.Length() > 0) {
		hr = LineSplit(bstrRemainder, &bstrRest, &bstrResult);
		hr = pINCFCollectionList->AddItemToBack(CComVariant(bstrResult));
		bstrRemainder = bstrRest;
	}

	*ppINCFCollectionList = pINCFCollectionList.Detach();
	return S_OK;
}

void CNCFString::SplitTimeToTimeParts(ULONG time_ms, long* part_hours, long* part_minutes, long* part_seconds, long* part_ms)
{
	long seconds = time_ms / 1000;

	*part_hours = 0;
	*part_minutes = 0;;
	*part_seconds = 0;
	*part_ms = 0;

	*part_hours = seconds / 3600;
	*part_minutes = (seconds - (*part_hours * 3600)) / 60;
	*part_seconds = seconds - (*part_hours * 3600) - (*part_minutes * 60);
	*part_ms = time_ms - (*part_seconds * 1000) - (*part_minutes * 60 * 1000) - (*part_hours * 3600 * 1000);
}

STDMETHODIMP CNCFString::TimeToString(/*[in]*/ BSTR format, /*[in]*/ ULONG timeMilliseconds, /*[out, retval]*/ BSTR *result_string)
{	
	long lHou(0);
	long lMin(0);
	long lSec(0);
	long lMs(0);

	this->SplitTimeToTimeParts(timeMilliseconds, &lHou, &lMin, &lSec, &lMs);

	CComBSTR bstrFormat(format);

	wchar_t wcsHou[10];
	wchar_t wcsMin[10];
	wchar_t wcsSec[10];
	wchar_t wcsMs[10];

	_ultow_s(lHou, wcsHou, 10, 10);
	_ultow_s(lMin, wcsMin, 10, 10);
	_ultow_s(lSec, wcsSec, 10, 10);
	_ultow_s(lMs, wcsMs, 10, 10);

	wchar_t wcsHouPrefixed[10];
	wchar_t wcsMinPrefixed[10];
	wchar_t wcsSecPrefixed[10];
	wchar_t wcsMsPrefixed[10];
	
	if (lHou < 10) {
		wcsHouPrefixed[0] = L'0';
		wcsHouPrefixed[1] = L'\0';
		wcscat_s(wcsHouPrefixed, 10, wcsHou);
	}
	else 
	{
		wcscpy_s(wcsHouPrefixed, 10, wcsHou);
	}

	if (lMin < 10) {
		wcsMinPrefixed[0] = L'0';
		wcsMinPrefixed[1] = L'\0';
		wcscat_s(wcsMinPrefixed, 10, wcsMin);
	}
	else
	{
		wcscpy_s(wcsMinPrefixed, 10, wcsMin);
	}

	if (lSec < 10) {
		wcsSecPrefixed[0] = L'0';
		wcsSecPrefixed[1] = L'\0';
		wcscat_s(wcsSecPrefixed, 10, wcsSec);
	}
	else
	{
		wcscpy_s(wcsSecPrefixed, 10, wcsSec);
	}

	if (lMs < 10) 
	{
		wcsMsPrefixed[0] = L'0';
		wcsMsPrefixed[1] = L'0';
		wcsMsPrefixed[2] = L'\0';
		wcscat_s(wcsMsPrefixed, 10, wcsMs);
	}
	else if (lMs < 100) {
		wcsMsPrefixed[0] = L'0';		
		wcsMsPrefixed[1] = L'\0';
		wcscat_s(wcsMsPrefixed, 10, wcsMs);
	}
	else
	{
		wcscpy_s(wcsMsPrefixed, 10, wcsMs);
	}

	CString result = format;
	result.Replace(L"hh", wcsHouPrefixed);
	result.Replace(L"h", wcsHou);
	result.Replace(L"mm", wcsMinPrefixed);
	result.Replace(L"m", wcsMin);
	result.Replace(L"ss", wcsSecPrefixed);
	result.Replace(L"s", wcsSec);
	result.Replace(L"rr", wcsMsPrefixed);
	result.Replace(L"r", wcsMs);
	
	*result_string = CComBSTR(result).Detach(); 

	return S_OK;
}