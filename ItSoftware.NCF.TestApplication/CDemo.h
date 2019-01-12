#include <windows.h>
#include <stdio.h>
#include <lm.h>

#pragma comment(lib, "Netapi32.lib")
#pragma comment(lib, "Advapi32.lib")


class CDemo
{
public:	


	void main( wchar_t* pwszShareFolder )
	{
		PSHARE_INFO_502 BufPtr, p;
		NET_API_STATUS res;
		LPTSTR   lpszServer = pwszShareFolder;
		DWORD er = 0, tr = 0, resume = 0, i;
		
		//
		// Print a report header.
		//
		printf( "Share:              Local Path:                   Uses:   Descriptor:\n" );
		printf( "---------------------------------------------------------------------\n" );
		//
		// Call the NetShareEnum function; specify level 502.
		//
		do // begin do
		{
			res = NetShareEnum( lpszServer, 502, (LPBYTE *) &BufPtr, MAX_PREFERRED_LENGTH, &er, &tr, &resume );
			//
			// If the call succeeds,
			//
			if ( res == ERROR_SUCCESS || res == ERROR_MORE_DATA )
			{
				p = BufPtr;
				//
				// Loop through the entries;
				//  print retrieved data.
				//
				for ( i = 1; i <= er; i++ )
				{
					printf( "%-20S%-30S%-8u", p->shi502_netname, p->shi502_path, p->shi502_current_uses );
					//
					// Validate the value of the 
					//  shi502_security_descriptor member.
					//
					if ( IsValidSecurityDescriptor( p->shi502_security_descriptor ) )
						printf( "Yes\n" );
					else
						printf( "No\n" );
					p++;
				}
				//
				// Free the allocated buffer.
				//
				NetApiBufferFree( BufPtr );
			}
			else
				printf( "Error: %ld\n", res );
		}
		// Continue to call NetShareEnum while 
		//  there are more entries. 
		// 
		while ( res == ERROR_MORE_DATA ); // end do
		return;
	}



};