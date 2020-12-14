// CNCFNetwork.cpp : Implementation of CNCFNetwork

#include "stdafx.h"
#include "CNCFNetwork.h"
#include "winnetwk.h"
#include "lm.h"
#include "../Include/itsoftware.h"
#include "../ItSoftware.NCF.System/ItSoftwareNCFSystem_i.h"
#include "ItSoftwareNCFIO_i.h"

#pragma comment(lib, "Netapi32.lib")
#pragma comment(lib, "Advapi32.lib")

// CNCFNetwork

STDMETHODIMP CNCFNetwork::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFNetwork
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}



STDMETHODIMP CNCFNetwork::ConnectUNC( /*[in]*/ BSTR remoteName, /*[in]*/ BSTR username, /*[in]*/ BSTR password, VARIANT_BOOL rememberOnLogin,  /*[out, retval]*/ VARIANT_BOOL* status )
{
	if ( remoteName == nullptr )
	{
		return Error( L"Argument 'remoteName' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}
	if ( SysStringLen( remoteName ) == 0 )
	{
		return Error( L"Argument 'remoteName' has invalid length.",IID_INCFNetwork, E_INVALIDARG );
	}
	
	CComBSTR bstrUsername( (username == nullptr) ? L"" : username );
	CComBSTR bstrPassword( (password == nullptr) ? L"" : password );

	*status = VARIANT_FALSE;

	NETRESOURCEW resource = { 0 };
	resource.dwType = RESOURCETYPE_DISK;
	resource.lpLocalName = nullptr;
	resource.lpRemoteName = CComBSTR(remoteName).operator LPWSTR();
	resource.lpProvider = nullptr;

	DWORD result = WNetAddConnection2( &resource, bstrPassword.operator LPWSTR(), bstrUsername.operator LPWSTR(), CONNECT_TEMPORARY | ((rememberOnLogin == VARIANT_TRUE) ? CONNECT_UPDATE_PROFILE : 0) );
	if ( result == NO_ERROR )
	{
		*status = VARIANT_TRUE;
		return S_OK;
	}

	return Error( ItSoftware::ItsError::GetErrorDescription( GetLastError() ), IID_INCFNetwork, E_FAIL );
}

STDMETHODIMP CNCFNetwork::EnumerateNetworkShares( /*[in]*/ BSTR remoteName, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList )
{
	if ( ppINCFCollectionList == nullptr )
	{
		return Error( L"Argument 'ppINCFCollectionList' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}

	if ( remoteName == nullptr )
	{
		return Error( L"Argument 'remoteName' is NULL.",IID_INCFNetwork, E_INVALIDARG );
	}

	if ( SysStringLen( remoteName ) == 0 )
	{
		return Error( L"Argument 'remoteName' has invalid length.", IID_INCFNetwork, E_INVALIDARG );
	}

	*ppINCFCollectionList = nullptr;		

	CComBSTR bstrRemoteName( remoteName );
	
	CComPtr<INCFCollectionList> pINCFCollectionListRetVal;
	HRESULT hr = pINCFCollectionListRetVal.CoCreateInstance( L"ItSoftware.NCF.CollectionList" );
	if ( FAILED( hr ) )
	{
		return Error( L"Could not create type 'ItSoftware.NCF.CollectionList", IID_INCFNetwork, hr );
	}

	
	PSHARE_INFO_502 ptrBuffer = nullptr;
	DWORD result( 0 );
	DWORD entriesRead( 0 );
	DWORD totalEntries( 0 );
	DWORD resumeHandle( 0 );
	do
	{
		result = NetShareEnum( bstrRemoteName, 502, (LPBYTE *) &ptrBuffer, MAX_PREFERRED_LENGTH, &entriesRead, &totalEntries, &resumeHandle );

		if ( result == ERROR_SUCCESS || result == ERROR_MORE_DATA )
		{
			PSHARE_INFO_502 pEntry = ptrBuffer;
			for ( int i = 1; i <= entriesRead; i++ )
			{
				CComPtr<INCFNetworkShare> pINCFNetworkShare;
				hr = pINCFNetworkShare.CoCreateInstance( L"ItSoftware.NCF.NetworkShare" );
				if ( FAILED( hr ) )
				{
					NetApiBufferFree( ptrBuffer );
					return Error( L"Could not create type 'ItSoftware.NCF.NetworkShare'.", IID_INCFNetwork, hr );
				}

				pINCFNetworkShare->put_CurrentUses( pEntry->shi502_current_uses );
				pINCFNetworkShare->put_MaxUses( pEntry->shi502_max_uses );
				pINCFNetworkShare->put_NetName( CComBSTR(pEntry->shi502_netname) );
				pINCFNetworkShare->put_Password( CComBSTR( pEntry->shi502_passwd ) );
				pINCFNetworkShare->put_Path( CComBSTR( pEntry->shi502_path ) );
				pINCFNetworkShare->put_Permissions( pEntry->shi502_permissions );
				pINCFNetworkShare->put_Remark( CComBSTR( pEntry->shi502_remark ) );
				pINCFNetworkShare->put_Type( pEntry->shi502_type );

				pINCFCollectionListRetVal->AddItemToBack( CComVariant( pINCFNetworkShare.Detach() ) );

				pEntry++;
			}
		}

		NetApiBufferFree( ptrBuffer );
	} while ( result == ERROR_MORE_DATA );	
	
	*ppINCFCollectionList = pINCFCollectionListRetVal.Detach();

	return S_OK;
}

STDMETHODIMP CNCFNetwork::EnumerateAllNetworkResources( /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList )
{
	if ( ppINCFCollectionList == nullptr )
	{
		return Error( L"Argument 'ppINCFCollectionList' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}

	*ppINCFCollectionList = nullptr;

	return this->EnumerateNetworkResourcesHelper( RESOURCE_GLOBALNET, RESOURCETYPE_ANY, RESOURCEUSAGE_ALL, nullptr, ppINCFCollectionList );
	/*
	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance( L"ItSoftware.NCF.CollectionList" );
	if ( FAILED( hr ) )
	{
		return Error( L"Could not create type 'ItSoftware.NCF.CollectionList'", IID_INCFNetwork, hr );
	}	

	
	HANDLE hEnum( NULL );
	DWORD dwResult = WNetOpenEnumW( RESOURCE_GLOBALNET, RESOURCETYPE_ANY, RESOURCEUSAGE_ALL, NULL, &hEnum );
	if ( dwResult == NO_ERROR )
	{
		DWORD dwAmount = 16;
		DWORD dwSize( sizeof( NETRESOURCEW ) * dwAmount );
		NETRESOURCEW* pResource = new NETRESOURCEW[sizeof( NETRESOURCEW ) * dwAmount];
		DWORD dwCount( -1 );		
		
		bool bContinue = true;

		do
		{
			dwResult = WNetEnumResourceW( hEnum, &dwCount, pResource, &dwSize );
			if ( dwResult == NO_ERROR )
			{
				for ( auto dwIndex = 0; dwIndex < dwCount; dwIndex++ )
				{
					CComPtr<INCFNetworkResource> pINCFNetworkResource;
					hr = pINCFNetworkResource.CoCreateInstance( L"ItSoftware.NCF.NetworkResource" );
					if ( FAILED( hr ) )
					{
						delete[] pResource;
						WNetCloseEnum( hEnum );
						return Error( L"Could not create type 'ItSoftware.NCF.NetworkResource'", IID_INCFNetwork, hr );
					}

					pINCFNetworkResource->put_Comment( CComBSTR( pResource[dwIndex].lpComment ) );
					pINCFNetworkResource->put_DisplayType( pResource[dwIndex].dwDisplayType );
					pINCFNetworkResource->put_LocalName( CComBSTR( pResource[dwIndex].lpLocalName ) );
					pINCFNetworkResource->put_Provider( CComBSTR( pResource[dwIndex].lpProvider ) );
					pINCFNetworkResource->put_RemoteName( CComBSTR( pResource[dwIndex].lpRemoteName ) );
					pINCFNetworkResource->put_Scope( pResource[dwIndex].dwScope );
					pINCFNetworkResource->put_Type( pResource[dwIndex].dwType );
					pINCFNetworkResource->put_Usage( pResource[dwIndex].dwUsage );

					CComPtr<INCFNetworkResource> pnr = pINCFNetworkResource;
					pINCFCollectionList->AddItemToBack( CComVariant( pINCFNetworkResource.Detach() ) );
					
					if ( (pResource[dwIndex].dwUsage & RESOURCEUSAGE_CONTAINER) > 0)
					{
						CComPtr<INCFCollectionList> plist;
						hr = this->EnumerateNetworkResources( pnr.Detach(), &plist );
						if ( SUCCEEDED( hr ) )
						{
							long lSize( 0 );
							plist->get_Size( &lSize );
							for ( long l = 0; l < lSize; l++ )
							{
								CComVariant vt;
								plist->GetItemByIndex( l, &vt );
								pINCFCollectionList->AddItemToBack( vt );
							}
						}
					}
				}					
			}
			else if ( dwResult == ERROR_MORE_DATA )
			{
				dwAmount *= 2;
				dwSize = sizeof( NETRESOURCEW ) * dwAmount;
				delete[] pResource;
				pResource = new NETRESOURCEW[sizeof( NETRESOURCEW ) * dwAmount];
				dwCount = -1;
				bContinue = true;
			}
			else if ( dwResult == ERROR_NO_MORE_ITEMS )
			{
				bContinue = false;
			}			
			else
			{
				delete[] pResource;
				WNetCloseEnum( hEnum );
				return Error( ItSoftware::Util::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
			}
		} while ( bContinue );
		
		*ppINCFCollectionList = pINCFCollectionList.Detach();

		delete[] pResource;

		WNetCloseEnum( hEnum );

		return S_OK;
	}

	return Error( ItSoftware::Util::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
	*/
}

STDMETHODIMP CNCFNetwork::EnumerateNetworkResources( /*[in]*/ INCFNetworkResource* pINCFNetworkResource, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList )
{
	if ( pINCFNetworkResource == nullptr )
	{
		return Error( L"Argument 'pINCFNetworkResource' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}
	if ( ppINCFCollectionList == nullptr )
	{
		return Error( L"Argument 'ppINCFCollectionList' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}

	*ppINCFCollectionList = nullptr;

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance( L"ItSoftware.NCF.CollectionList" );
	if ( FAILED( hr ) )
	{
		return Error( L"Could not create type 'ItSoftware.NCF.CollectionList'", IID_INCFNetwork, hr );
	}		

	CComBSTR bstrComment;
	hr = pINCFNetworkResource->get_Comment( &bstrComment );

	CComBSTR bstrLocalName;
	hr = pINCFNetworkResource->get_LocalName( &bstrLocalName );

	CComBSTR bstrProvider;
	hr = pINCFNetworkResource->get_Provider( &bstrProvider );

	CComBSTR bstrRemoteName;
	hr = pINCFNetworkResource->get_RemoteName( &bstrRemoteName );
	
	NETRESOURCEW resource = { 0 };
	resource.lpComment = bstrComment.operator LPWSTR();
	resource.lpLocalName = bstrLocalName.operator LPWSTR();		
	resource.lpProvider = bstrProvider.operator LPWSTR();
	resource.lpRemoteName = bstrRemoteName.operator LPWSTR();

	long lValue( 0 );
	pINCFNetworkResource->get_DisplayType( &lValue );
	resource.dwDisplayType = lValue;

	pINCFNetworkResource->get_Scope( &lValue );
	resource.dwScope = lValue;

	pINCFNetworkResource->get_Type( &lValue );
	resource.dwType = lValue;

	pINCFNetworkResource->get_Usage( &lValue );
	resource.dwUsage = lValue;

	return this->EnumerateNetworkResourcesHelper( RESOURCE_GLOBALNET, RESOURCETYPE_ANY, RESOURCEUSAGE_ALL, &resource, ppINCFCollectionList );
	/*
	HANDLE hEnum( NULL );
	DWORD dwResult = WNetOpenEnumW( RESOURCE_GLOBALNET, RESOURCETYPE_ANY, RESOURCEUSAGE_ALL, &resource, &hEnum );
	if ( dwResult == NO_ERROR )
	{
		DWORD dwAmount = 16;
		DWORD dwSize( sizeof( NETRESOURCEW ) * dwAmount );
		NETRESOURCEW* pResource = new NETRESOURCEW[sizeof( NETRESOURCEW ) * dwAmount];
		DWORD dwCount( -1 );

		bool bContinue = true;

		do
		{
			dwResult = WNetEnumResourceW( hEnum, &dwCount, pResource, &dwSize );
			if ( dwResult == NO_ERROR )
			{
				for ( auto dwIndex = 0; dwIndex < dwCount; dwIndex++ )
				{
					CComPtr<INCFNetworkResource> pINCFNetworkResource2;
					hr = pINCFNetworkResource2.CoCreateInstance( L"ItSoftware.NCF.NetworkResource" );
					if ( FAILED( hr ) )
					{
						delete[] pResource;
						WNetCloseEnum( hEnum );
						return Error( L"Could not create type 'ItSoftware.NCF.NetworkResource'", IID_INCFNetwork, hr );
					}

					pINCFNetworkResource2->put_Comment( CComBSTR( pResource[dwIndex].lpComment ) );
					pINCFNetworkResource2->put_DisplayType( pResource[dwIndex].dwDisplayType );
					pINCFNetworkResource2->put_LocalName( CComBSTR( pResource[dwIndex].lpLocalName ) );
					pINCFNetworkResource2->put_Provider( CComBSTR( pResource[dwIndex].lpProvider ) );
					pINCFNetworkResource2->put_RemoteName( CComBSTR( pResource[dwIndex].lpRemoteName ) );
					pINCFNetworkResource2->put_Scope( pResource[dwIndex].dwScope );
					pINCFNetworkResource2->put_Type( pResource[dwIndex].dwType );
					pINCFNetworkResource2->put_Usage( pResource[dwIndex].dwUsage );

					CComPtr<INCFNetworkResource> pnr = pINCFNetworkResource2;
					pINCFCollectionList->AddItemToBack( CComVariant( pINCFNetworkResource2.Detach() ) );

					if ( (pResource[dwIndex].dwUsage & RESOURCEUSAGE_CONTAINER) > 0 )
					{
						CComPtr<INCFCollectionList> plist;
						hr = this->EnumerateNetworkResources( pnr.Detach(), &plist );
						if ( SUCCEEDED( hr ) )
						{
							long lSize( 0 );
							plist->get_Size( &lSize );
							for ( long l = 0; l < lSize; l++ )
							{
								CComVariant vt;
								plist->GetItemByIndex( l, &vt );
								pINCFCollectionList->AddItemToBack( vt );
							}
						}
					}
				}
			}
			else if ( dwResult == ERROR_MORE_DATA )
			{
				dwAmount *= 2;
				dwSize = sizeof( NETRESOURCEW ) * dwAmount;
				delete[] pResource;
				pResource = new NETRESOURCEW[sizeof( NETRESOURCEW ) * dwAmount];
				dwCount = -1;
				bContinue = true;
			}
			else if ( dwResult == ERROR_NO_MORE_ITEMS )
			{
				bContinue = false;
			}
			else
			{
				delete[] pResource;
				WNetCloseEnum( hEnum );
				return Error( ItSoftware::Util::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
			}
		} while ( bContinue );

		*ppINCFCollectionList = pINCFCollectionList.Detach();

		delete[] pResource;

		WNetCloseEnum( hEnum );

		return S_OK;
	}

	return Error( ItSoftware::Util::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
	*/
}

STDMETHODIMP CNCFNetwork::EnumerateNetworkResourcesHelper( DWORD scope, DWORD type, DWORD usage, NETRESOURCEW* pNetResource, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList )
{	
	if ( ppINCFCollectionList == nullptr )
	{
		return Error( L"Argument 'ppINCFCollectionList' is NULL.", IID_INCFNetwork, E_INVALIDARG );
	}

	*ppINCFCollectionList = nullptr;

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance( L"ItSoftware.NCF.CollectionList" );
	if ( FAILED( hr ) )
	{
		return Error( L"Could not create type 'ItSoftware.NCF.CollectionList'", IID_INCFNetwork, hr );
	}

	HANDLE hEnum( NULL );
	DWORD dwResult = WNetOpenEnumW( scope, type, usage, pNetResource, &hEnum );
	if ( dwResult == NO_ERROR )
	{
		DWORD dwAmount = 1024;
		DWORD dwSize( sizeof( NETRESOURCEW ) * dwAmount );
		NETRESOURCEW* pResource = new NETRESOURCEW[dwSize];
		ZeroMemory( pResource, dwSize );

		DWORD dwCount( -1 );

		bool bContinue = true;

		do
		{
			dwResult = WNetEnumResourceW( hEnum, &dwCount, pResource, &dwSize );
			if ( dwResult == NO_ERROR )
			{
				for ( auto dwIndex = 0; dwIndex < dwCount; dwIndex++ )
				{
					CComPtr<INCFNetworkResource> pINCFNetworkResource2;
					hr = pINCFNetworkResource2.CoCreateInstance( L"ItSoftware.NCF.NetworkResource" );
					if ( FAILED( hr ) )
					{
						delete[] pResource;
						WNetCloseEnum( hEnum );
						return Error( L"Could not create type 'ItSoftware.NCF.NetworkResource'", IID_INCFNetwork, hr );
					}

					pINCFNetworkResource2->put_Comment( CComBSTR( pResource[dwIndex].lpComment ) );
					pINCFNetworkResource2->put_DisplayType( pResource[dwIndex].dwDisplayType );
					pINCFNetworkResource2->put_LocalName( CComBSTR( pResource[dwIndex].lpLocalName ) );
					pINCFNetworkResource2->put_Provider( CComBSTR( pResource[dwIndex].lpProvider ) );
					pINCFNetworkResource2->put_RemoteName( CComBSTR( pResource[dwIndex].lpRemoteName ) );
					pINCFNetworkResource2->put_Scope( pResource[dwIndex].dwScope );
					pINCFNetworkResource2->put_Type( pResource[dwIndex].dwType );
					pINCFNetworkResource2->put_Usage( pResource[dwIndex].dwUsage );

					CComPtr<INCFNetworkResource> pnr = pINCFNetworkResource2;
					pINCFCollectionList->AddItemToBack( CComVariant( pINCFNetworkResource2.Detach() ) );

					if ( (pResource[dwIndex].dwUsage & RESOURCEUSAGE_CONTAINER) > 0 )
					{
						CComPtr<INCFCollectionList> plist;
						hr = this->EnumerateNetworkResourcesHelper(scope,type,usage, &pResource[dwIndex], &plist );
						if ( SUCCEEDED( hr ) )
						{
							long lSize( 0 );
							plist->get_Size( &lSize );
							for ( long l = 0; l < lSize; l++ )
							{
								CComVariant vt;
								plist->GetItemByIndex( l, &vt );
								pINCFCollectionList->AddItemToBack( vt );
							}
						}
					}
				}
			}
			else if ( dwResult == ERROR_MORE_DATA )
			{
				dwAmount *= 2;
				dwSize = sizeof( NETRESOURCEW ) * dwAmount;
				delete[] pResource;
				pResource = new NETRESOURCEW[dwSize];
				ZeroMemory( pResource, dwSize );
				dwCount = -1;
				bContinue = true;
			}
			else if ( dwResult == ERROR_NO_MORE_ITEMS )
			{
				bContinue = false;
			}
			else
			{
				delete[] pResource;
				WNetCloseEnum( hEnum );
				return Error( ItSoftware::ItsError::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
			}
		} while ( bContinue );

		*ppINCFCollectionList = pINCFCollectionList.Detach();

		delete[] pResource;

		WNetCloseEnum( hEnum );

		return S_OK;
	}

	return Error( ItSoftware::ItsError::GetErrorDescription( dwResult ), IID_INCFNetwork, E_FAIL );
}

