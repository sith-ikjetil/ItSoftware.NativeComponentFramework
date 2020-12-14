// CNFCUrl.cpp : Implementation of CNFCUrl

#include "stdafx.h"
#include "CNCFUrl.h"
#include "../Include/itsoftware.h"
//#include "stxutif.h"
#include <sstream>
#include <string>
#include <codecvt>
using namespace std;


// CNFCUrl

STDMETHODIMP CNCFUrl::InterfaceSupportsErrorInfo( REFIID riid )
{
	static const IID* const arr[] =
	{
		&IID_INCFUrl
	};

	for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ )
	{
		if ( InlineIsEqualGUID( *arr[i], riid ) )
			return S_OK;
	}
	return S_FALSE;
}

//
// INFCUrl
//
STDMETHODIMP CNCFUrl::ExtractProtocol( /*[in]*/ BSTR url,
	/*[out, retval]*/ BSTR *protocol )
{
	if ( SysStringLen( url ) == 0 || protocol == NULL )
	{
		return Error( CComBSTR( L"ExtractProtocol Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	long lLength = SysStringLen( url );
	long lLastHit( -1 );
	for ( long l = 0; l < lLength; l++ )
	{
		if ( url[l] == L':' )
		{
			lLastHit = l;
			break;
		}
	}

	CComBSTR bstrRetval( L"" );
	if ( lLastHit != -1 )
	{
		for ( long l = 0; l < lLastHit; l++ )
		{
			bstrRetval.Append( (wchar_t) url[l] );
		}
	}
	*protocol = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::ExtractDomain( /*[in]*/ BSTR url,
	/*[out, retval]*/ BSTR* domain )
{
	if ( SysStringLen( url ) == 0 || domain == NULL )
	{
		return Error( CComBSTR( L"ExtractDomain Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	long lLength = SysStringLen( url );
	long lLastHit( -1 );
	for ( long l = 0; l < lLength; l++ )
	{
		if ( url[l] == L':' )
		{
			lLastHit = l;
			break;
		}
	}

	CComBSTR bstrRetval( L"" );
	if ( lLastHit != -1 )
	{
		for ( long l = lLastHit + 3; l < lLength; l++ )
		{
			if ( url[l] != L'/' && url[l] != L'\\' && url[l] != L':' )
			{
				bstrRetval.Append( (wchar_t) url[l] );
			}
			else
			{
				break;
			}
		}// for
	}

	*domain = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::ExtractPort( /*[in]*/ BSTR url,
	/*[out, retval]*/ BSTR* port )
{
	if ( SysStringLen( url ) == 0 || port == NULL )
	{
		return Error( CComBSTR( L"ExtractDomain Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	long lLength = SysStringLen( url );
	long lLastHit( -1 );
	for ( long l = 0; l < lLength; l++ )
	{
		if ( url[l] == L':' )
		{
			if ( lLastHit != -1 )
			{
				lLastHit = l;
				break;
			}
			else
			{
				lLastHit = l;
			}
		}
	}

	CComBSTR bstrRetval( L"" );
	if ( lLastHit != -1 )
	{
		for ( long l = lLastHit + 1; l < lLength; l++ )
		{
			if ( url[l] != L'/' && url[l] != L'\\' && url[l] != L'?' )
			{
				bstrRetval.Append( (wchar_t) url[l] );
			}
			else
			{
				break;
			}
		}// for
	}

	*port = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::ExtractPath( /*[in]*/ BSTR url,
	/*[out, retval]*/ BSTR* path )
{
	if ( SysStringLen( url ) == 0 || path == NULL )
	{
		return Error( CComBSTR( L"ExtractPath Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	long lLength = SysStringLen( url );
	long lLastHit( -1 );
	long lCount( 0 );
	for ( long l = 0; l < lLength; l++ )
	{
		if ( url[l] == L'/' || url[l] == L'\\' )
		{
			lLastHit = l;
			lCount++;
			if ( lCount == 3 )
			{
				break;
			}
		}
	}

	CComBSTR bstrRetval( L"" );
	if ( lLastHit != -1 && lCount == 3 )
	{
		long lLast( -1 );
		for ( long l = lLastHit; l < lLength; l++ )
		{
			if ( url[l] == L'/' || url[l] == L'\\' )
			{
				lLast = l;
			}
			if ( url[l] == L'?' )
			{
				break;
			}
		}
		for ( long l = lLastHit; l <= lLast; l++ )
		{
			bstrRetval.Append( (wchar_t) url[l] );
		}// for
	}

	*path = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::ExtractFilename( /*[in]*/ BSTR url,
	/*[out, retval]*/ BSTR* filename )
{
	if ( SysStringLen( url ) == 0 || filename == NULL )
	{
		return Error( CComBSTR( L"ExtractFilename Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	long lLength = SysStringLen( url );
	long lLastHit( -1 );
	for ( long l = 0; l < lLength; l++ )
	{
		if ( url[l] == L'/' || url[l] == L'\\' )
		{
			lLastHit = l;
		}
		if ( url[l] == L'?' )
		{
			break;
		}
	}

	CComBSTR bstrRetval( L"" );
	if ( lLastHit != -1 )
	{
		for ( long l = lLastHit + 1; l < lLength; l++ )
		{
			bstrRetval.Append( (wchar_t) url[l] );
			if ( url[l] == L'?' )
			{
				break;
			}// if
		}// for
	}// if

	*filename = bstrRetval.Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::SplitURL( /*[in]*/ BSTR url,
	/*[in, out]*/ BSTR *protocol,
	/*[in, out]*/ BSTR *domain,
	/*[in, out]*/ BSTR *port,
	/*[in, out]*/ BSTR *path,
	/*[out, retval]*/ BSTR *filename )
{
	if ( url == nullptr || SysStringLen( url ) == 0 || filename == NULL || protocol == NULL || port == NULL || domain == NULL || path == NULL )
	{
		return Error( CComBSTR( L"SplitURL Failed. Invalid Arguments." ), IID_INCFUrl, E_INVALIDARG );
	}

	SysFreeString( *protocol );
	SysFreeString( *domain );
	SysFreeString( *port );
	SysFreeString( *path );

	ExtractProtocol( url, protocol );
	ExtractDomain( url, domain );
	ExtractPort( url, port );
	ExtractPath( url, path );
	ExtractFilename( url, filename );

	return S_OK;
}

STDMETHODIMP CNCFUrl::Encode( /*[in]*/ BSTR url, /*[out, retval]*/ BSTR* urlEncoded )
{
	if ( url == nullptr )
	{
		return Error( L"Argument 'url' is NULL.", IID_INCFUrl, E_INVALIDARG );
	}
	if ( SysStringLen( url ) == 0 )
	{
		return Error( L"Argument 'url' has invalid length.", IID_INCFUrl, E_INVALIDARG );
	}
	if ( urlEncoded == nullptr )
	{
		return Error( L"Argument 'urlEncoded' is NULL.", IID_INCFUrl, E_INVALIDARG );
	}


	CComBSTR bstrUrl( url );

	string s( ItSoftware::Encoding::UTF8::ToString( wstring( bstrUrl.operator LPWSTR() ) ) );

	//RFC 3986 section 2.2 Reserved Characters (January 2005)
	const string reserved = "!*'();:@&=+$,/?#[]";
	//RFC 3986 section 2.3 Unreserved Characters (January 2005)
	const string unreserved = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_.~";

	std::string escaped = "";
	for ( size_t i = 0; i < s.length(); i++ )
	{
		if ( unreserved.find_first_of( s[i] ) != std::string::npos )
		{
			escaped.push_back( s[i] );
		}
		else if ( reserved.find_first_of( s[i] ) != std::string::npos )
		{
			escaped.push_back( s[i] );
		}
		else
		{
			escaped.append( "%" );
			char buf[3];
			::sprintf_s( buf, 3, "%.2X", (unsigned char) s[i] );
			escaped.append( buf );
		}
	}

	*urlEncoded = CComBSTR( escaped.c_str() ).Detach();

	return S_OK;
}

STDMETHODIMP CNCFUrl::Decode(/*[in]*/ BSTR url, /*[out, retval]*/ BSTR* urlDecoded )
{
	if ( url == nullptr )
	{
		return Error( L"Argument 'url' is NULL.", IID_INCFUrl, E_INVALIDARG );
	}
	if ( SysStringLen( url ) == 0 )
	{
		return Error( L"Argument 'url' has invalid length.", IID_INCFUrl, E_INVALIDARG );
	}
	if ( urlDecoded == nullptr )
	{
		return Error( L"Argument 'urlDecoded' is NULL.", IID_INCFUrl, E_INVALIDARG );
	}
	CComBSTR bstrUrl( url );

	string str( ItSoftware::Encoding::UTF8::ToString( wstring( bstrUrl.operator LPWSTR() ) ) );

	std::locale utf8_locale( std::locale(), new std::codecvt_utf8<wchar_t>() );

	stringstream ret;
	ret.imbue( utf8_locale );

	char ch[2];
	ch[1] = '\0';
	int i, ii, len = str.length();

	for ( i = 0; i < len; i++ )
	{
		if ( str[i] != '%' )
		{
			ret << str[i];
		}
		else
		{
			ii = std::stoul( str.substr( i + 1, 2 ).c_str(), nullptr, 16 );
			ch[0] = static_cast<wchar_t>(ii);
			ret << ch;
			i = i + 2;
		}
	}

	*urlDecoded = CComBSTR( ItSoftware::Encoding::UTF8::ToString( ret.str() ).c_str() ).Detach();

	return S_OK;
}

