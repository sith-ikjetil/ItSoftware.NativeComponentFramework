//
// kks.h
//
// workspace for the KKS Component Framework.
//
#pragma once
#ifndef __ITSOFTWARE_H__
#define __ITSOFTWARE_H__

#include <Windows.h>
#include <wincrypt.h>
#include <crtdbg.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <exception>
#include <algorithm>
#include <windows.h>	
#include "atlcomcli.h"		
#include <string>
#include <vector>
#include <codecvt>
#include <random>
#include <functional>
#include <stdlib.h>
#include <time.h>
#include "itsoftware-exceptions.h"
using namespace ATL;
using namespace std;
using namespace ItSoftware::Exceptions;
//
// Put spesific methods in namespace
//
namespace ItSoftware
{
	// 
	// Macros
	//
#define DECIMALTOSTRING2(d) #d
#define DECIMALTOSTRING1(d) DECIMALTOSTRING2(d)
#define ERR_AT_LOCATION(e) __FILE__ "(" DECIMALTOSTRING1(__LINE__) "): " #e 
#define ERROR_HERE __FILE__ "(" DECIMALTOSTRING2(__LINE__) "): "  

	//
	// Debug Macros
	//
#define ASSERT _ASSERTE

#ifdef _DEBUG
#define VERIFY ASSERT
#else
#define VERIFY(e) (e)
#endif

#ifdef _DEBUG
	inline auto Trace( wchar_t const * format, ... ) -> void
	{
		va_list args;
		va_start( args, format );

		wchar_t buffer[256];

		ASSERT( -1 != _vsnwprintf_s( buffer, _countof( buffer ) - 1, format, args ) );

		va_end( args );

		OutputDebugString( buffer );
	}

	struct Tracer
	{
		char const* m_filename;
		unsigned m_line;

		Tracer( char const * filename, unsigned const line )
			: m_filename( filename ),
			m_line( line )
		{

		}

		template<typename... Args>
		auto operator()( wchar_t const * format, Args... args ) const -> void
		{
			wchar_t buffer[256];

			auto count = swprintf_s( buffer, L"%S(%d): ", m_filename, m_line );

			ASSERT( count != -1 );

			ASSERT( _snwprintf_s( buffer + count,
				_countof( buffer ) - count,
				_countof( buffer ) - count - 1,
				format,
				args... ) != -1 );

			OutputDebugString( buffer );
		}
	};
#endif

#ifdef _DEBUG
#define TRACE Tracer(__FILE__, __LINE__)
#else
#define TRACE __noop
#endif

	//
	// Common Structures
	//
	typedef struct WAVEHEADER
	{
		char	szRIFF[4];      // 'RIFF' 
		DWORD	dwFileSize;     // Filesize - 8. 8=("RIFF"+"fmt ") 
		char	szWAVEfmt_[8];	// 'WAVEfmt ' 
		DWORD	dwfmtLen;       // 0x10 
		WORD	wWaveType;      // type wave format. PCM-header eller 0x01 
		WORD	wChannels;      // channels. 1-mono, 2-stereo 
		DWORD	nSamplesPrSec;  // samples pr second 
		DWORD	nAvgBytesPerSec;// bytes pr. second 
		WORD	wBlockAlign;	// bytes pr. sample 
		WORD	wBitsPerSample; // bits pr. channel 
		char	szDATA[4];		// text: 'data' 
		DWORD	dwDataSize;		// sound data size 
	} WAVEHEADER, *LPWAVEHEADER;

	namespace Encoding
	{
		struct UTF8
		{

			static std::wstring ToString( const std::string& str )
			{
				typedef std::codecvt_utf8<wchar_t> convert_typeX;
				std::wstring_convert<convert_typeX, wchar_t> converterX;

				return converterX.from_bytes( str );
			}

			static std::string ToString( const std::wstring& wstr )
			{
				typedef std::codecvt_utf8<wchar_t> convert_typeX;
				std::wstring_convert<convert_typeX, wchar_t> converterX;

				return converterX.to_bytes( wstr );
			}

			static unsigned char* ToBytes( const std::wstring& wstr, long* cbLength )
			{
				typedef std::codecvt_utf8<wchar_t> convert_typeX;
				std::wstring_convert<convert_typeX, wchar_t> converterX;

				std::string s = converterX.to_bytes( wstr );

				size_t length = s.length( ) * sizeof( char );
				unsigned char* pBytes = new ( std::nothrow ) unsigned char[length];
				if ( pBytes == nullptr )
				{
					*cbLength = 0;
					return nullptr;
				}

				memcpy( (void*) pBytes, s.data( ), length );

				*cbLength = (long) length;

				return pBytes;
			}
		};
	}

	//
	// ItSoftware Error Object Util
	//
	struct ItsError
	{
		//
		// Get GetLastError() Error Description
		//
		static CComBSTR GetLastErrorDescription( )
		{
			LPVOID lpMsgBuf;
			FormatMessageW( FORMAT_MESSAGE_ALLOCATE_BUFFER |
				FORMAT_MESSAGE_FROM_SYSTEM |
				FORMAT_MESSAGE_IGNORE_INSERTS,
				NULL,
				GetLastError( ),
				MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), // Default language
				(wchar_t *) &lpMsgBuf,
				0,
				NULL );

			// Copy buffer contet to bstr...
			CComBSTR bstr;
			bstr += (wchar_t *) lpMsgBuf;

			// Free the buffer...
			LocalFree( lpMsgBuf );

			// Return value...
			return bstr;
		}// inline CComBSTR GetLastErrorDesc( )

		 //
		 // Get Error Description of Given Error Code
		 //
		static CComBSTR GetErrorDescription( DWORD dwError )
		{
			LPVOID lpMsgBuf;
			FormatMessageW( FORMAT_MESSAGE_ALLOCATE_BUFFER |
				FORMAT_MESSAGE_FROM_SYSTEM |
				FORMAT_MESSAGE_IGNORE_INSERTS,
				NULL,
				dwError,
				MAKELANGID( LANG_NEUTRAL, SUBLANG_DEFAULT ), // Default language
				(wchar_t *) &lpMsgBuf,
				0,
				NULL );

			// Copy buffer contet to bstr...
			CComBSTR bstr;
			bstr += (wchar_t *) lpMsgBuf;

			// Free the buffer...
			LocalFree( lpMsgBuf );

			// Return value...
			return bstr;
		}// inline CComBSTR GetLastErrorDesc( )

		 //
		 // Get COM IErrorInfo Error Description
		 //
		static CComBSTR GetCoLastErrorInfoDescription( )
		{
			IErrorInfo *pErrInfo;
			HRESULT hr = GetErrorInfo( NULL, (IErrorInfo **) &pErrInfo );
			CComBSTR bstr;
			if ( hr == S_OK && pErrInfo )
			{
				pErrInfo->GetDescription( &bstr );
			}

			return bstr;
		}// inline CComBSTR GetLastErrorDesc( )
	};

	//
	// ItSoftware Time Object Util
	//
	struct ItsTime
	{
		//
		// Split ms to its parts
		//
		static void SplitMsToHourMinuteSeconds( ULONG time_ms, long* part_hours, long* part_minutes, long* part_seconds, long* part_ms )
		{
			long seconds = time_ms / 1000;

			*part_hours = 0;
			*part_minutes = 0;;
			*part_seconds = 0;
			*part_ms = 0;

			*part_hours = seconds / 3600;
			*part_minutes = ( seconds - ( *part_hours * 3600 ) ) / 60;
			*part_seconds = seconds - ( *part_hours * 3600 ) - ( *part_minutes * 60 );
			*part_ms = time_ms - ( *part_seconds * 1000 ) - ( *part_minutes * 60 * 1000 ) - ( *part_hours * 3600 * 1000 );
		}

		static void SplitMsToHourMinuteSeconds( unsigned long long time_ms, unsigned long long* part_hours, unsigned long long* part_minutes, unsigned long long* part_seconds, unsigned long long* part_ms )
		{
			unsigned long long seconds = time_ms / 1000;

			*part_hours = 0;
			*part_minutes = 0;;
			*part_seconds = 0;
			*part_ms = 0;

			*part_hours = seconds / 3600;
			*part_minutes = ( seconds - ( *part_hours * 3600 ) ) / 60;
			*part_seconds = seconds - ( *part_hours * 3600 ) - ( *part_minutes * 60 );
			*part_ms = time_ms - ( *part_seconds * 1000 ) - ( *part_minutes * 60 * 1000 ) - ( *part_hours * 3600 * 1000 );
		}

		static void SplitHourToYearWeekDayHour( long houIn, long* houRest, long* day, long* week, long* year )
		{
			*houRest = houIn;

			*day = houIn / 24;
			*week = *day / 7;
			*year = *week / 52;

			*day -= ( *week * 7 );

			*week -= ( *year * 52 );

			*houRest -= *week * 7 * 24;
			*houRest -= *day * 24;
			*houRest -= *year * 52 * 7 * 24;
		}

		static void SplitHourToYearWeekDayHour( unsigned long long houIn, unsigned long long* houRest, unsigned long long* day, unsigned long long* week, unsigned long long* year )
		{
			*houRest = houIn;

			*day = houIn / 24;
			*week = *day / 7;
			*year = *week / 52;

			*day -= ( *week * 7 );

			*week -= ( *year * 52 );

			*houRest -= *week * 7 * 24;
			*houRest -= *day * 24;
			*houRest -= *year * 52 * 7 * 24;
		}
	};

	//
	// ItSoftware Number Object Util
	//
	struct ItsConvert
	{
		static int ToInt( wstring str )
		{
			return _wtoi( str.c_str( ) );
		}

		static long ToLong( wstring str )
		{
			return _wtol( str.c_str( ) );
		}

		static long long ToLongLong( wstring str )
		{
			return _wtoll( str.c_str( ) );
		}

		static double ToFloat( wstring str )
		{
			return _wtof( str.c_str( ) );
		}

		static wstring ToString( bool flag ) 
		{
			if ( flag ) {
				return wstring( L"true" );
			}
			return wstring( L"false" );
		}

		static wstring ToString( int number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( int number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( long number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}		

		static wstring ToHexString( long number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( long long number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToStringFormatted( long long number )
		{
			wstring txt = ItsConvert::ToString( number );
			
			wstringstream ss;

			int groupSize = 3;			
			int i = groupSize;
			size_t iCount = 0;
			size_t iSize = txt.size( );
			for ( auto itr = txt.rbegin( ); itr < txt.rend( ); itr++ )
			{
				if ( i-- > 0 )
				{
					ss << *itr;
					iCount++;
				}
				else
				{
					if ( iCount < iSize )
					{
						ss << L" ";
						ss << *itr;
						iCount++;
					}					
					i = groupSize;
				}
				
			}

			txt = ss.str( );
			wstringstream ss2;
			for ( auto itr = txt.rbegin( ); itr < txt.rend( ); itr++ )
			{
				ss2 << *itr;
			}

			wstring retVal = ss2.str( );

			return retVal;
		}

		static wstring ToHexString( long long number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( float number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( float number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( double number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( double number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( unsigned int number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( unsigned int number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( unsigned long number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( unsigned long number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( unsigned long long number )
		{
			wstringstream ss;
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToHexString( unsigned long long number, bool uppercase, int width, wchar_t fillChar, bool showBase )
		{
			wstringstream ss;
			ss << std::hex;
			if ( showBase )
			{
				ss << L"0x";
			}
			if ( uppercase )
			{
				ss << uppercase;
			}
			if ( width > 0 )
			{
				ss << setfill( fillChar ) << std::setw( width );
			}
			ss << number;

			wstring tos = ss.str( );
			return tos;
		}

		static wstring ToString( tm dateTime ) {
			wstringstream ss;
			ss << setfill( L'0' ) << std::setw( 4 ) << ( dateTime.tm_year + 1900 );
			ss << L"-" << setfill( L'0' ) << std::setw( 2 ) << ( dateTime.tm_mon + 1 );
			ss << L"-" << setfill( L'0' ) << std::setw(2) << dateTime.tm_mday;						
			ss << L"T";
			ss << setfill( L'0' ) << std::setw( 2 ) << dateTime.tm_hour;
			ss << L":" << setfill( L'0' ) << std::setw( 2 ) << dateTime.tm_min;
			ss << L":" << setfill( L'0' ) << std::setw( 2 ) << dateTime.tm_sec;			

			wstring tos = ss.str( );
			return tos;
		}

		static tm ToTM( wstring dateTime ) 
		{
			tm t = { 0 };

			t.tm_year = ItsConvert::ToInt( dateTime.substr( 0, 4 ) ) - 1900;
			t.tm_mon = ItsConvert::ToInt( dateTime.substr( 5, 2 ) ) - 1;
			t.tm_mday = ItsConvert::ToInt(dateTime.substr( 8, 2 ));						
			t.tm_hour = ItsConvert::ToInt( dateTime.substr( 11, 2 ) );
			t.tm_min = ItsConvert::ToInt( dateTime.substr( 14, 2 ) );
			t.tm_sec = ItsConvert::ToInt( dateTime.substr( 17, 2 ) );

			return t;
		}

		static wstring ToLowerCase( wstring text ) {
			std::transform( text.begin( ), text.end( ), text.begin( ), tolower );
			return text;
		}

		static wstring ToUpperCase( wstring text ) {
			std::transform( text.begin( ), text.end( ), text.begin( ), toupper );
			return text;
		}

		static bool ToBool( wstring flag ) {
			
			flag = ItsConvert::ToLowerCase( flag );

			if ( !wcscmp( flag.c_str( ), L"true" ) ) {
				return true;
			}
			else if ( !wcscmp( flag.c_str( ), L"1" ) ) {
				return true;
			}
			else if ( !wcscmp( flag.c_str( ), L"yes" ) ) {
				return true;
			}
			return false;
		}

		static wstring ToString( vector<long long> pks ) 
		{
			wstringstream ss;
			bool bAddSep = false;
			for ( auto&pk : pks ) {
				if ( bAddSep ) {
					ss << L";";
				}
				ss << pk;
				bAddSep = true;
			}
			wstring tos = ss.str( );
			return tos;
		}

		static vector<long long> ToPK( wstring pks ) 
		{
			stringstream ss;
			ss.str( string( pks.begin( ), pks.end( ) ) );

			string item;
			vector<long long> topk;
			while ( getline( ss, item, ';' ) ) 
			{
				if ( !item.empty( ) ) 
				{
					topk.push_back( ItsConvert::ToLongLong( wstring(item.begin(), item.end())) );
				}
			}

			return topk;
		}

		static vector<BYTE> FromBase64String( wstring str ) 
		{
			DWORD cbData( 0 );
			DWORD dwFlags( 0 );

			if ( str.size() > 0 )
			{
				if ( !CryptStringToBinary( str.c_str( ), static_cast<DWORD>( str.size( ) ), CRYPT_STRING_BINARY, NULL, &cbData, NULL, &dwFlags ) )
				{
					throw ItsException( L"CryptStringToBinary failed | 1" );
				}
				
				vector<BYTE> pReturnValue( cbData );
				if ( !CryptStringToBinary( str.c_str( ), cbData, CRYPT_STRING_BINARY, pReturnValue.data( ), &cbData, NULL, &dwFlags ) )
				{
					throw ItsException( L"CryptStringToBinary failed | 2" );
				}
				return pReturnValue;
			}
			return vector<BYTE>( );
		}

		static wstring ToBase64String( vector<BYTE> data )
		{
			DWORD dwLength( static_cast<DWORD>( data.size( ) ) );
			DWORD cchString( 0 );
			CryptBinaryToString( data.data(), (DWORD)data.size(), CRYPT_STRING_BASE64, NULL, &cchString );
			unique_ptr<wchar_t[]> buffer = make_unique<wchar_t[]>( cchString + 1 );
			BOOL bResult = CryptBinaryToString( data.data(), (DWORD)data.size(), CRYPT_STRING_BASE64, buffer.get( ), &cchString );
			buffer[cchString] = L'\0';

			return wstring( buffer.get( ) );
		}

		static SYSTEMTIME ToSYSTEMTIME( tm dateTime ) 
		{
			SYSTEMTIME st = { 0 };
			
			st.wYear = dateTime.tm_year + 1900;
			st.wMonth = dateTime.tm_mon + 1;
			st.wDay = dateTime.tm_mday;
			st.wHour = dateTime.tm_hour;
			st.wMinute = dateTime.tm_min;
			st.wSecond = dateTime.tm_sec;

			return st;
		}

		static tm ToTM( SYSTEMTIME st )
		{
			tm t = { 0 };
			
			t.tm_year = st.wYear - 1900;
			t.tm_mon = st.wMonth - 1;
			t.tm_mday = st.wDay;
			t.tm_hour = st.wHour;
			t.tm_min = st.wMinute;
			t.tm_sec = st.wSecond;

			return t;
		}
	};	
	
	struct ItsRandom
	{	
		static int RandomInt( int min, int max ) {
			static bool isInit = false;
			if ( !isInit ) {				
				srand( (unsigned int)time( nullptr ) );
				isInit = true;
			}

			if ( max < min )
			{
				unsigned int tempForSwap = max;
				max = min;
				min = tempForSwap;
			}
			
			return ( rand( ) % max ) + min;

			/*
			static default_random_engine re { };		
			using Dist = uniform_int_distribution<int>;
			static Dist uid { };
			
			return uid( re, Dist::param_type { min, max } );
			*/
		}

		static double RandomDouble( double min, double max )
		{
			static bool isInit = false;
			if ( !isInit ) {
				srand( (unsigned int) time( nullptr ) );
				isInit = true;
			}

			static default_random_engine re { };
			using Dist = uniform_real_distribution<double>;
			static Dist uid { };
			return uid( re, Dist::param_type { min, max } );
		}
	};
	
	// Forward Declare
	struct ItsString
	{
		// to lower case
		static wstring ToLowerCase( wstring& s )
		{
			std::transform( s.begin( ), s.end( ), s.begin( ), tolower );
			return s;
		}

		// to upper case
		static wstring ToUpperCase( wstring& s )
		{
			std::transform( s.begin( ), s.end( ), s.begin( ), toupper );
			return s;
		}

		// trim from left
		static wstring TrimLeft( wstring& s, const wchar_t* t = L" \t\n\r\f\v" )
		{
			s.erase( 0, s.find_first_not_of( t ) );
			return s;
		}

		// trim from right
		static wstring TrimRight( wstring& s, const wchar_t* t = L" \t\n\r\f\v" )
		{
			s.erase( s.find_last_not_of( t ) + 1 );
			return s;
		}

		// trim from left & right
		static wstring Trim( wstring& s, const wchar_t* t = L" \t\n\r\f\v" )
		{
			return TrimLeft( TrimRight( s, t ), t );
		}

		// left count chars
		static wstring Left( wstring &s, int count )
		{
			if ( s.size( ) == 0 || count <= 0 )
			{
				return wstring( L"" );
			}

			if ( count >= s.size( ) )
			{
				return s;
			}

			wstringstream ss;
			for ( int i = 0; i < count; i++ )
			{
				ss << s[i];
			}

			wstring str = ss.str( );
			return str;
		}

		// mid index, count chars
		static wstring Mid( wstring &s, int index, int count )
		{
			if ( s.size( ) == 0 || count <= 0 || index < 0 || index >= s.size( ) )
			{
				return wstring( L"" );
			}

			if ( index + count >= s.size( ) )
			{
				wstringstream ss;
				for ( size_t i = index; i < s.size( ); i++ )
				{
					ss << s[i];
				}
				wstring str = ss.str( );
				return str;
			}

			wstringstream ss;
			for ( size_t i = index; i < index + count; i++ )
			{
				ss << s[i];
			}

			wstring str = ss.str( );
			return str;
		}

		// right count chars
		static wstring Right( wstring &s, int count )
		{
			if ( s.size( ) == 0 || count <= 0 )
			{
				return wstring( L"" );
			}

			if ( count >= s.size( ) )
			{
				return s;
			}

			wstringstream ss;
			for ( size_t i = s.size( ) - count; i < s.size( ); i++ )
			{
				ss << s[i];
			}

			wstring str = ss.str( );
			return str;
		}

		//
		//
		//
		static wstring Replace( wstring& s, wstring& replace, wstring& replace_with )
		{
			if ( s.size( ) == 0 || replace.size( ) == 0 || replace.size( ) > s.size( ) )
			{
				return wstring( L"" );
			}

			wstringstream ss;
			size_t index = s.find( replace );			
			if ( index == wstring::npos )
			{
				return s;
			}
			while ( index != wstring::npos )
			{
				ss << ItsString::Left( s, (int) index );
				ss << replace_with;
				ss << ItsString::Right( s, (int) ( s.size( ) - index - replace.size( ) ) );

				index = s.find( replace, index + replace.size( ) );
			}

			wstring str = ss.str( );
			return str;
		}
	};

	class ItsDateTime
	{		
	private:
		tm m_tm;

	public:
		ItsDateTime( tm timeDate ) 
		{
			this->m_tm = timeDate;
		}

		ItsDateTime( ItsDateTime& dateTime ) 
		{
			this->m_tm = dateTime.m_tm;
		}

		static ItsDateTime Now( ) 
		{
			time_t t;
			time( &t );
			tm tm2;
			localtime_s( &tm2, &t );

			return ItsDateTime( tm2 );
		}

		wstring ToString( )
		{
			wstringstream ss;
			ss << setfill( L'0' ) << std::setw( 4 ) << ( this->m_tm.tm_year + 1900 );
			ss << L"-" << setfill( L'0' ) << std::setw( 2 ) << ( this->m_tm.tm_mon + 1 );
			ss << L"-" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_mday;
			ss << L" ";
			ss << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_hour;
			ss << L":" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_min;
			ss << L":" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_sec;

			wstring tos = ss.str( );
			return tos;
		}

		wstring ToString( wstring option )
		{
			if ( option == L"s" || option == L"S" )
			{
				wstringstream ss;
				ss << setfill( L'0' ) << std::setw( 4 ) << ( this->m_tm.tm_year + 1900 );
				ss << L"-" << setfill( L'0' ) << std::setw( 2 ) << ( this->m_tm.tm_mon + 1 );
				ss << L"-" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_mday;
				ss << L"T";
				ss << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_hour;
				ss << L":" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_min;
				ss << L":" << setfill( L'0' ) << std::setw( 2 ) << this->m_tm.tm_sec;

				wstring tos = ss.str( );
				return tos;
			}
			
			// day
			int d = this->GetDay( );
			wstring str_d = ItsConvert::ToString( d );
			wstring str_dd;
			if ( d < 10 )
			{
				str_dd = L"0";
				str_dd += str_d;
			}
			else
			{
				str_dd = str_d;
			}

			// month
			int m = this->GetMonth( );
			wstring str_m = ItsConvert::ToString( m );
			wstring str_mm;
			if ( m < 10 )
			{
				str_mm = L"0";
				str_mm += str_m;
			}
			else
			{
				str_mm = str_m;
			}

			// year
			int y = this->GetYear( );
			wstring str_yyyy = ItsConvert::ToString( y );
			wstring str_yy = ItsString::Right( str_yyyy, 2 );

			// hour			
			int h = this->GetHour( );
			wstring str_h = ItsConvert::ToString( h );
			wstring str_hh;
			if ( h < 10 )
			{
				str_hh = L"0";
				str_hh += str_m;
			}
			else
			{
				str_hh = str_h;
			}

			// minute
			int min = this->GetMinute( );
			wstring str_min = ItsConvert::ToString( min );
			wstring str_minmin;
			if ( min < 10 )
			{
				str_minmin = L"0";
				str_minmin += str_min;
			}
			else
			{
				str_minmin = str_min;
			}

			// second
			int s = this->GetSecond( );
			wstring str_s = ItsConvert::ToString( s );
			wstring str_ss;
			if ( s < 10 )
			{
				str_ss = L"0";
				str_ss += str_s;
			}
			else
			{
				str_ss = str_s;
			}

			option = ItsString::Replace( option, wstring(L"dd"), str_dd );
			option = ItsString::Replace( option, wstring( L"d" ), str_d );

			option = ItsString::Replace( option, wstring( L"MM" ), str_mm );
			option = ItsString::Replace( option, wstring( L"M" ), str_m );

			option = ItsString::Replace( option, wstring( L"yyyy" ), str_yyyy );
			option = ItsString::Replace( option, wstring( L"yy" ), str_yy );

			option = ItsString::Replace( option, wstring( L"HH" ), str_hh );
			option = ItsString::Replace( option, wstring( L"H" ), str_h );

			option = ItsString::Replace( option, wstring( L"mm" ), str_minmin );
			option = ItsString::Replace( option, wstring( L"m" ), str_min );

			option = ItsString::Replace( option, wstring( L"ss" ), str_ss );
			option = ItsString::Replace( option, wstring( L"s" ), str_s );
			

			return option;			
		}

		tm TM( )
		{
			return this->m_tm;
		}

		void AddYears( int year )
		{
			this->m_tm.tm_year += year;			

			mktime( &this->m_tm );
		}

		void AddMonths( int month )
		{			
			this->m_tm.tm_mon += month;

			mktime( &this->m_tm );
		}

		void AddDays( int day )
		{
			this->m_tm.tm_mday += day;

			mktime( &this->m_tm );
		}

		void AddHours( int hour )
		{
			this->m_tm.tm_hour += hour;

			mktime( &this->m_tm );
		}

		void AddMinutes( int min )
		{
			this->m_tm.tm_min += min;

			mktime( &this->m_tm );
		}

		void AddSeconds( int sec )
		{
			this->m_tm.tm_sec += sec;

			mktime( &this->m_tm );
		}

		void Add( int year, int month, int day, int hour, int min, int sec ) 
		{
			this->m_tm.tm_year += year;
			this->m_tm.tm_mon += month;
			this->m_tm.tm_mday += day;
			this->m_tm.tm_hour += hour;
			this->m_tm.tm_min += min;
			this->m_tm.tm_sec += sec;

			mktime( &this->m_tm );
		}

		void SubtractYears( int year )
		{
			this->m_tm.tm_year -= year;			

			mktime( &this->m_tm );
		}

		void SubtractMonths( int month )
		{
			this->m_tm.tm_mon -= month;
		
			mktime( &this->m_tm );
		}

		void SubtractDays( int day )
		{
			this->m_tm.tm_mday -= day;

			mktime( &this->m_tm );
		}

		void SubtractHours( int hour )
		{
			this->m_tm.tm_hour -= hour;

			mktime( &this->m_tm );
		}

		void SubtractMinutes( int min )
		{
			this->m_tm.tm_min -= min;

			mktime( &this->m_tm );		
		}

		void SubtractSeconds( int sec )
		{
			this->m_tm.tm_sec -= sec;

			mktime( &this->m_tm );
		}

		void Subtract( int year, int month, int day, int hour, int min, int sec )
		{
			this->m_tm.tm_year -= year;
			this->m_tm.tm_mon -= month;
			this->m_tm.tm_mday -= day;
			this->m_tm.tm_hour -= hour;
			this->m_tm.tm_min -= min;
			this->m_tm.tm_sec -= sec;

			mktime( &this->m_tm );
		}

		int GetYear( )
		{
			return this->m_tm.tm_year + 1900;
		}

		int GetMonth( )
		{
			return this->m_tm.tm_mon + 1;
		}

		int GetDay( )
		{
			return this->m_tm.tm_mday;
		}

		int GetHour( )
		{
			return this->m_tm.tm_hour;
		}

		int GetMinute( )
		{
			return this->m_tm.tm_min;
		}

		int GetSecond( ) 
		{
			return this->m_tm.tm_sec;
		}

		ItsDateTime& operator=( const tm& timeDate )
		{
			this->m_tm = timeDate;
			return *this;
		}
	};

	
}// namespace ItSoftware

 //////////////////////////////////////////////////////////////////////////////////////////
#endif