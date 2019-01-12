#ifndef __ITSOFTWARE_WIN_H__
#define __ITSOFTWARE_WIN_H__

//
// #include
//
#include <Windows.h>
#include <memory>
#include <string>

//
// using namespace
//
using namespace std;

//
// namespace
//
namespace ItSoftware
{
	struct ItsEventLogParameters
	{
		wstring sourcename;
		short category;
		long eventid;		

		bool logErrorMessageToEventLog;
		bool logWarningMessageToEventLog;

		ItsEventLogParameters()
		{
			category = 0;
			eventid = 0;
			logErrorMessageToEventLog = false;
			logWarningMessageToEventLog = false;
		}

		ItsEventLogParameters(wstring a_sourcename, short a_category, long a_eventid, bool a_logErrorMessageToEventLog, bool a_logWarningMessageToEventLog )
		{
			category = a_category;
			eventid = a_eventid;
			logErrorMessageToEventLog = a_logErrorMessageToEventLog;
			logWarningMessageToEventLog = a_logWarningMessageToEventLog;
		}
	};

	enum EEventLogType
	{
		EET_SUCCESS = EVENTLOG_SUCCESS,
		EET_ERROR_TYPE = EVENTLOG_ERROR_TYPE,
		EET_WARNING_TYPE = EVENTLOG_WARNING_TYPE,
		EET_INFORMATION_TYPE = EVENTLOG_INFORMATION_TYPE,
		EET_AUDIT_SUCCESS = EVENTLOG_AUDIT_SUCCESS,
		EET_AUDIT_FAILURE = EVENTLOG_AUDIT_FAILURE
	};
	
	struct ItsWin
	{		
		static void ShowInformationMessage( wstring message )
		{
			ShowInformationMessage( L"For You Information!", message );
		}

		static void ShowWarningMessage( wstring message )
		{
			ShowWarningMessage( L"Warning!", message );
		}

		static void ShowErrorMessage( wstring message )
		{
			ShowErrorMessage( L"An Error Occurred!", message );
		}

		static void ShowInformationMessage( wstring title, wstring message )
		{
			MessageBox( NULL, message.c_str(), title.c_str(), MB_OK | MB_ICONINFORMATION );
		}

		static void ShowWarningMessage( wstring title, wstring message )
		{
			MessageBox( NULL, message.c_str(), title.c_str(), MB_OK | MB_ICONWARNING );						
		}

		static void ShowErrorMessage( wstring title, wstring message )
		{
			MessageBox( NULL, message.c_str(), title.c_str(), MB_OK | MB_ICONERROR );			
		}

		static bool ReportEvent( const wchar_t* sourcename, EEventLogType eeventlogtype, short category, long eventid, short numberofstrings, const wchar_t* description )
		{
			if ( wcslen( sourcename ) == 0 || (numberofstrings > 0 && wcslen( description ) == 0) )
			{
				return false;
			}

			HANDLE hEventLog = ::RegisterEventSource( NULL, sourcename );
			if ( hEventLog == NULL )
			{
				return false;
			}

			BOOL bStatus = ::ReportEvent( hEventLog, eeventlogtype, category, eventid, NULL, numberofstrings, 0, (LPCWSTR*)&description, NULL );
			if ( !bStatus )
			{
				::DeregisterEventSource( hEventLog );
				return false;
			}

			::DeregisterEventSource( hEventLog );

			return true;
		}
	};
}

#endif