// CNCFEventLog.cpp : Implementation of CNCFEventLog

#include "stdafx.h"
#include "CNCFEventLog.h"
#include "../Include/itsoftware.h"

using namespace ItSoftware;

// CNCFEventLog

STDMETHODIMP CNCFEventLog::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFEventLog
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}



STDMETHODIMP CNCFEventLog::ReportEvent( /*[in]*/ BSTR sourcename, /*[in]*/ EEVENTLOGTYPE eeventlogtype, /*[in]*/ short category, /*[in]*/ long eventid, /*[in]*/ short numberofstrings, /*[in]*/ const BSTR description)
{
	if (eeventlogtype < 0 || eeventlogtype > EET_AUDIT_FAILURE || SysStringLen(sourcename) == 0 || (numberofstrings > 0 && SysStringLen(description) == 0)) {
		return Error(CComBSTR("ReportEvent failed. Invalid Arguments."), IID_INCFEventLog, E_INVALIDARG);
	}
	HANDLE hEventLog = ::RegisterEventSource(NULL, sourcename);
	if (hEventLog == NULL) {
		CComBSTR bstr("ReportEvent Failed. RegisterEventSource Failed. GetLastError: ");
		bstr.AppendBSTR(ItsError::GetLastErrorDescription());
		return Error(bstr, IID_INCFEventLog, E_FAIL);
	}

	BOOL bStatus = ::ReportEvent(hEventLog, ConvertEnumToType(eeventlogtype), category, eventid, NULL, numberofstrings, 0, (LPCWSTR*)&description, NULL);
	if (!bStatus) {
		::DeregisterEventSource(hEventLog);
		CComBSTR bstr("ReportEvent Failed. ReportEvent Failed. GetLastError: ");
		bstr.AppendBSTR(ItsError::GetLastErrorDescription());
		return Error(bstr, IID_INCFEventLog, E_FAIL);
	}

	::DeregisterEventSource(hEventLog);
	return S_OK;
}

STDMETHODIMP CNCFEventLog::ReportEventEx( /*[in]*/ BSTR uncservername, /*[in]*/ BSTR sourcename, /*[in]*/ EEVENTLOGTYPE eeventlogtype, /*[in]*/ short category, /*[in]*/ long eventid, /*[in]*/ short numberofstrings, /*[in]*/ BSTR description)
{
	CComBSTR bstrSourceName(sourcename);
	CComBSTR bstrDescription(description);
	if (eeventlogtype < 0 || eeventlogtype > EET_AUDIT_FAILURE || SysStringLen(sourcename) == 0 || SysStringLen(uncservername) == 0 || (numberofstrings > 0 && SysStringLen(description) == 0)) {
		return Error(CComBSTR(L"ReportEventEx failed. Invalid arguments."), IID_INCFEventLog, E_INVALIDARG);
	}

	HANDLE hEventLog = ::RegisterEventSource(uncservername, sourcename);
	if (hEventLog == NULL) {
		CComBSTR bstr(L"ReportEventEx failed. RegisterEventSource failed. GetLastError: ");
		bstr.AppendBSTR(ItsError::GetLastErrorDescription());
		return Error(bstr, IID_INCFEventLog, E_FAIL);
	}

	BOOL bStatus = ::ReportEvent(hEventLog, ConvertEnumToType(eeventlogtype), category, eventid, NULL, numberofstrings, 0, (LPCWSTR*)&description, NULL);
	if (!bStatus) {
		::DeregisterEventSource(hEventLog);
		CComBSTR bstr(L"ReportEventEx Failed. ReportEvent Failed. GetLastError: ");
		bstr.AppendBSTR(ItsError::GetLastErrorDescription());
		return Error(bstr, IID_INCFEventLog, E_FAIL);
	}

	::DeregisterEventSource(hEventLog);
	return S_OK;
}

/*STDMETHODIMP CEventLog::ReportEventRemote( BSTR serveraddress,				// [in]
BSTR sourcename,					// [in]
EEVENTLOGTYPE eeventlogtype,		// [in]
short category,					// [in]
long eventid,					// [in]
short numberofstrings,			// [in]
BSTR description )				// [in]
{
if ( SysStringLen(serveraddress) == 0 || SysStringLen(sourcename) == 0 || eeventlogtype > EET_AUDIT_FAILURE || (numberofstrings > 0 && SysStringLen(description) == 0) ) {
return Error( CComBSTR(L"ReportEventRemote Failed. Invalid Arguments."), IID_IKKSEventLog, E_INVALIDARG );
}

CComBSTR bstrSOAP( L"<?xml version='1.0'?>\n");
bstrSOAP.Append( L"<SOAP-ENV:Envelope xmlns:SOAP-ENV=\"http://schemas.xmlsoap.org/soap/envelope/\" SOAP-ENV:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\">\n");

DWORD dwSize(255);
wchar_t wcsBuffer[255];

bstrSOAP.Append( L"<UserName>" );
::GetUserName( wcsBuffer, &dwSize );
dwSize = 255;
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</UserName>\n" );

bstrSOAP.Append( L"<ComputerName>" );
::GetComputerName( wcsBuffer, &dwSize );
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</ComputerName>" );

bstrSOAP.Append( L"<SOAP-ENV:Body>\n");
bstrSOAP.Append( L"<ReportEventRemote>\n");
bstrSOAP.Append( L"<sourcename>" );
bstrSOAP.AppendBSTR( sourcename );
bstrSOAP.Append( L"</sourcename>\n" );

bstrSOAP.Append( L"<eeventlogtype>" );
::_ltow((long)(short)eeventlogtype, wcsBuffer, 10 );
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</eeventlogtype>\n" );

bstrSOAP.Append( L"<category>" );
::_ltow((long)(short)category, wcsBuffer, 10 );
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</category>\n" );

bstrSOAP.Append( L"<eventid>" );
::_ltow((long)eventid, wcsBuffer, 10 );
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</eventid>\n" );

bstrSOAP.Append( L"<numberofstrings>" );
::_ltow((long)(short)numberofstrings, wcsBuffer, 10 );
bstrSOAP += wcsBuffer;
bstrSOAP.Append( L"</numberofstrings>\n" );

bstrSOAP.Append( L"<description>\n" );
// loop throug the strings and create all subelements.
long lIndex(0);
short s(1);
for ( s = 1; s <= numberofstrings; s++ ) {
if ( *reinterpret_cast<unsigned short *>(description+lIndex) == L'\0' )
break;

::_ltow((long)(short)s, wcsBuffer, 10 );
bstrSOAP.Append( L"<string" ); bstrSOAP += wcsBuffer; bstrSOAP.Append( ">");
bstrSOAP.AppendBSTR( reinterpret_cast<unsigned short *>(description+lIndex) );
bstrSOAP.Append( L"</string"); bstrSOAP += wcsBuffer; bstrSOAP.Append(">\n");

lIndex += SysStringLen( reinterpret_cast<unsigned short *>(description+lIndex) );
lIndex++;
}// for ( short s = 1; s <= numberofstrings; s++ )
if ( s < numberofstrings )
return Error( CComBSTR( L"ReportEventRemote failed. Invalid arguments: numberofarguments is not the same as number of strings in description string"), IID_IKKSEventLog, E_INVALIDARG );

bstrSOAP.Append( L"</description>\n" );
bstrSOAP.Append( L"</ReportEventRemote>\n");

bstrSOAP.Append( L"</SOAP-ENV:Body>\n");
bstrSOAP.Append( L"</SOAP-ENV:Envelope>");

// CREATE THE MSXML.HTTP
CComPtr<IServerXMLHTTPRequest> pXMLHttp;
HRESULT hr = pXMLHttp.CoCreateInstance( CComBSTR(L"Msxml2.ServerXMLHTTP") );
if ( FAILED(hr) )
return Error( CComBSTR(L"EventLogRemote Failed. Could not create the msxml2.serverxmlhttp object."), IID_IKKSEventLog, E_FAIL );

hr = pXMLHttp->open( CComBSTR(L"POST"),
serveraddress,
CComVariant(VARIANT_FALSE),
CComVariant(CComBSTR("")),
CComVariant(CComBSTR("")) );

if ( FAILED(hr) ) {
CComBSTR bstr(L"ReportEventRemote Failed. Could not open connection: ");
IErrorInfo *pErrInfo;
GetErrorInfo( NULL, &pErrInfo );
if ( pErrInfo ) {
CComBSTR bstr;
pErrInfo->GetDescription( &bstr );
bstr.AppendBSTR(bstr);
}
return Error( bstr, IID_IKKSEventLog, E_FAIL );
}

CComVariant vtData(bstrSOAP);
hr = pXMLHttp->send( vtData );
if ( FAILED(hr) ) {
CComBSTR bstr(L"ReportEventRemote Failed. Send Failed: ");
IErrorInfo *pErrInfo;
GetErrorInfo( NULL, &pErrInfo );
if ( pErrInfo ) {
CComBSTR bstr;
pErrInfo->GetDescription( &bstr );
bstr.AppendBSTR(bstr);
}
return Error( bstr, IID_IKKSEventLog, E_FAIL );
}

CComBSTR bstrResponse;
CComPtr<IDispatch> pDisp;
hr = pXMLHttp->get_responseXML( &pDisp );
if ( FAILED(hr) ) {
CComBSTR bstr(L"ReportEventRemote Failed. get_responseXML Failed: ");
IErrorInfo *pErrInfo;
GetErrorInfo( NULL, &pErrInfo );
if ( pErrInfo ) {
CComBSTR bstr;
pErrInfo->GetDescription( &bstr );
bstr.AppendBSTR(bstr);
}
return Error( bstr, IID_IKKSEventLog, E_FAIL );
}

if ( !pDisp )
return Error( CComBSTR(L"ReportEventRemote Failed. Could not get response xml."), IID_IKKSEventLog, E_FAIL );

CComBSTR bstrXML;
CComQIPtr<IXMLDOMDocument> pDoc(pDisp);
pDoc->get_xml(&bstrXML);
if ( bstrXML.Length() > 0 ) {
CComPtr<IKKSString> pString;
pString.CoCreateInstance ( CComBSTR(L"ItSoftware.NCF.String") );
if ( !pString )
return Error( CComBSTR(L"ReportEventRemote Failed. Could Not Create KKS.String."), IID_IKKSEventLog, E_FAIL );

CComBSTR bstrString;
pString->StringBetweenStrings( bstrXML, CComBSTR(L"<SOAP-ENV:Fault>"), CComBSTR(L"</SOAP-ENV:Fault>"), &bstrString );
if ( bstrString.Length() > 0 ) {
CComBSTR bstr(L"ReportEventRemoteFailed. Response Error:<SOAP-ENV:Fault>");
bstr.AppendBSTR(bstrString);
bstr.Append(L"</SOAP-ENV:Fault>");
return Error( bstr, IID_IKKSEventLog, E_FAIL );
}
}
else {
CComBSTR bstr(L"ReportEventRemote failed. XML response had a data length of 0.\nExpected content-type is text/xml.\n\nResponse headers returned from server was:\n");
CComBSTR bstrHeaders;
pXMLHttp->getAllResponseHeaders( &bstrHeaders );
bstr.AppendBSTR( bstrHeaders );
CComBSTR bstrText;
pXMLHttp->get_responseText(&bstrText);

if ( bstrText.Length() > 0 ) {
bstr.Append( L"\nContent returned may no be valid xml:\n" );
bstr.AppendBSTR(bstrText);
}

return Error( bstr, IID_IKKSEventLog, E_FAIL );
}

return S_OK;
}
*/
WORD CNCFEventLog::ConvertEnumToType(EEVENTLOGTYPE type)
{
	WORD wType(0);
	switch (type)
	{
	case EEVENTLOGTYPE::EET_SUCCESS:
		wType = EVENTLOG_SUCCESS;
		break;
	case EEVENTLOGTYPE::EET_ERROR_TYPE:
		wType = EVENTLOG_ERROR_TYPE;
		break;
	case EEVENTLOGTYPE::EET_WARNING_TYPE :
		wType = EVENTLOG_WARNING_TYPE;
		break;
	case EEVENTLOGTYPE::EET_INFORMATION_TYPE:
		wType = EVENTLOG_INFORMATION_TYPE;
		break;
	case EEVENTLOGTYPE::EET_AUDIT_SUCCESS:
		wType = EVENTLOG_AUDIT_SUCCESS;
		break;
	case EEVENTLOGTYPE::EET_AUDIT_FAILURE:
		wType = EVENTLOG_AUDIT_FAILURE;
		break;
	default:
		break;
	};

	return wType;
}
