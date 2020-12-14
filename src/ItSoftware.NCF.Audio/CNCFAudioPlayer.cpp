// CNCFAudioPlayer.cpp : Implementation of CNCFAudioPlayer

#include "stdafx.h"
#include "CNCFAudioPlayer.h"
#include "mfapi.h"
#include "mfidl.h"
#include "wmsdkidl.h"

// CNCFAudioPlayer

STDMETHODIMP CNCFAudioPlayer::InterfaceSupportsErrorInfo( REFIID riid )
{
	static const IID* const arr[] =
	{
		&IID_INCFAudioPlayer
	};

	for ( int i = 0; i < sizeof( arr ) / sizeof( arr[0] ); i++ )
	{
		if ( InlineIsEqualGUID( *arr[i], riid ) )
			return S_OK;
	}
	return S_FALSE;
}

template <class Q>
HRESULT GetEventObject( IMFMediaEvent *pEvent, Q **ppObject )
{
	*ppObject = NULL;   // zero output

	PROPVARIANT var;
	HRESULT hr = pEvent->GetValue( &var );
	if ( SUCCEEDED( hr ) )
	{
		if ( var.vt == VT_UNKNOWN )
		{
			hr = var.punkVal->QueryInterface( ppObject );
		}
		else
		{
			hr = E_FAIL;// MF_E_INVALIDTYPE;
		}
		PropVariantClear( &var );
	}
	return hr;
}

//  Callback for the asynchronous BeginGetEvent method.

HRESULT CNCFAudioPlayer::Invoke( IMFAsyncResult *pResult )
{
	MediaEventType meType = MEUnknown;  // Event type

	CComPtr<IMFMediaEvent> pEvent = NULL;

	// Get the event from the event queue.
	HRESULT hr = this->m_pIMFMediaSession->EndGetEvent( pResult, &pEvent );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Get the event type. 
	hr = pEvent->GetType( &meType );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	if ( meType == MESessionClosed )
	{
		// The session was closed. 
		// The application is waiting on the m_hCloseEvent event handle. 
		//SetEvent( m_hCloseEvent );
	}
	else
	{
		// For all other events, get the next event in the queue.
		hr = m_pIMFMediaSession->BeginGetEvent( this, NULL );
		if ( FAILED( hr ) )
		{
			goto done;
		}
	}

	this->HandleEvent( (UINT_PTR) pEvent.p );
	// Check the application state. 

	// If a call to IMFMediaSession::Close is pending, it means the 
	// application is waiting on the m_hCloseEvent event and
	// the application's message loop is blocked. 

	// Otherwise, post a private window message to the application. 

	//if ( m_state != Closing )
	//{
	//	// Leave a reference count on the event.
	//	pEvent->AddRef();

	//	PostMessage( m_hwndEvent, WM_APP_PLAYER_EVENT,
	//		(WPARAM) pEvent, (LPARAM) meType );
	//}

done:
	//SafeRelease( &pEvent );
	return S_OK;
}
#include <vector>
using namespace std;
vector<MediaEventType> g_events;
HRESULT CNCFAudioPlayer::HandleEvent( UINT_PTR pEventPtr )
{
	HRESULT hrStatus = S_OK;
	MediaEventType meType = MEUnknown;

	CComPtr<IMFMediaEvent> pEvent = (IMFMediaEvent*) pEventPtr;

	if ( !pEvent )
	{
		return E_POINTER;
	}

	// Get the event type.
	HRESULT hr = pEvent->GetType( &meType );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Get the event status. If the operation that triggered the event 
	// did not succeed, the status is a failure code.
	hr = pEvent->GetStatus( &hrStatus );

	// Check if the async operation succeeded.
	if ( SUCCEEDED( hr ) && FAILED( hrStatus ) )
	{
		hr = hrStatus;
	}
	if ( FAILED( hr ) )
	{
		goto done;
	}

	g_events.push_back(meType);
	switch ( meType )
	{
	case MESessionTopologyStatus:
		hr = OnTopologyStatus( pEvent );
		break;

	case MEEndOfPresentation:
		hr = OnPresentationEnded( pEvent );
		break;

	case MENewPresentation:
		hr = OnNewPresentation( pEvent );
		break;

	default:
		hr = OnSessionEvent( pEvent, meType );
		break;
	}

done:

	return hr;
}

HRESULT CNCFAudioPlayer::OnTopologyStatus( IMFMediaEvent *pEvent )
{
	UINT32 status;

	HRESULT hr = pEvent->GetUINT32( MF_EVENT_TOPOLOGY_STATUS, &status );
	if ( SUCCEEDED( hr ) && (status == MF_TOPOSTATUS_READY) )
	{
		//SafeRelease( &m_pVideoDisplay );

		// Get the IMFVideoDisplayControl interface from EVR. This call is
		// expected to fail if the media file does not have a video stream.

		//(void) MFGetService( m_pSession, MR_VIDEO_RENDER_SERVICE,
		///IID_PPV_ARGS( &m_pVideoDisplay ) );

		//hr = StartPlayback();
		this->m_status = AudioPlayerStatus::Loaded;
	}
	return hr;
}


//  Handler for MEEndOfPresentation event.
HRESULT CNCFAudioPlayer::OnPresentationEnded( IMFMediaEvent *pEvent )
{
	// The session puts itself into the stopped state automatically.
	this->m_status = AudioPlayerStatus::Stopped;
	return S_OK;
}

//  Handler for MENewPresentation event.
//
//  This event is sent if the media source has a new presentation, which 
//  requires a new topology. 

HRESULT CNCFAudioPlayer::OnNewPresentation( IMFMediaEvent *pEvent )
{
	CComPtr<IMFPresentationDescriptor> pPD;
	CComPtr<IMFTopology> pTopology;

	// Get the presentation descriptor from the event.
	HRESULT hr = GetEventObject( pEvent, &pPD );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Create a partial topology.
	//hr = CreatePlaybackTopology( this->m_pIMFMediaSource, pPD, NULL, &pTopology );
	//if ( FAILED( hr ) )
	//{
	//	goto done;
	//}

	//// Set the topology on the media session.
	//hr = m_pIMFMediaSession->SetTopology( 0, pTopology );
	//if ( FAILED( hr ) )
	//{
	//	goto done;
	//}

	//m_state = OpenPending;

done:

	return S_OK;
}

HRESULT CNCFAudioPlayer::OnSessionEvent( IMFMediaEvent* pIMFMediaEvent, MediaEventType type )
{
	switch ( type )
	{
		case MESessionStarted:
			SetEvent( this->m_hEvent );
			break;
		case MESessionEnded:
			this->m_status = AudioPlayerStatus::Stopped;
			break;
	}
	return S_OK;
}


STDMETHODIMP CNCFAudioPlayer::Initialize()
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized )
	{
		HRESULT hr = MFStartup( MF_VERSION );
		if ( SUCCEEDED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Initialized;
		}
		return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFAudioPlayer::Load(/*[in]*/ BSTR mediaObject )
{
	if ( this->m_status == AudioPlayerStatus::Closed ||
		 this->m_status == AudioPlayerStatus::Playing )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( mediaObject == nullptr )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"Argument 'mediaObject' is NULL.", IID_INCFAudioPlayer, E_INVALIDARG );
	}
	if ( SysStringLen( mediaObject ) == 0 )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"Argument 'mediaObject' has invalid length.", IID_INCFAudioPlayer, E_INVALIDARG );
	}
	if ( this->m_status == AudioPlayerStatus::Closed )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"Player is in a closed state. Cannot play media.", IID_INCFAudioPlayer, E_INVALIDARG );
	}

	HRESULT hr = S_OK;
	if ( this->m_status == AudioPlayerStatus::Uninitialized )
	{
		hr = this->Initialize();
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return hr;
		}
	}
	if ( this->m_status == AudioPlayerStatus::Playing ||
		this->m_status == AudioPlayerStatus::Paused )
	{
		hr = this->Stop();
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return hr;
		}
	}
	
	this->m_status = AudioPlayerStatus::Loading;

	if ( this->m_pIMFMediaSession )
	{
		hr = this->m_pIMFMediaSession->Close();
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		if ( this->m_pIMFMediaSource )
		{
			hr = this->m_pIMFMediaSource->Shutdown();
			if ( FAILED( hr ) )
			{
				return Error( L"", IID_INCFAudioPlayer, hr );
			}
			this->m_pIMFMediaSource.Release();
			this->m_pIMFPresentationDescriptor.Release();
			this->m_pIMFTopology.Release();
		}
		hr = this->m_pIMFMediaSession->Shutdown();
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return Error( L"Failed to shutdown IMFMediaSession.", IID_INCFAudioPlayer, hr );
		}
		this->m_pIMFMediaSession.Release();
	}


	// Create the media session.	
	hr = MFCreateMediaSession( NULL, &this->m_pIMFMediaSession );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}


	// Start pulling events from the media session
	hr = this->m_pIMFMediaSession->BeginGetEvent( (IMFAsyncCallback*)this, NULL );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}


	// Create the media source.
	MF_OBJECT_TYPE ObjectType = MF_OBJECT_INVALID;

	CComPtr<IMFSourceResolver> pSourceResolver;
	CComPtr<IUnknown> pSource;

	// Create the source resolver.
	hr = MFCreateSourceResolver( &pSourceResolver );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	// Use the source resolver to create the media source.

	// Note: For simplicity this sample uses the synchronous method to create 
	// the media source. However, creating a media source can take a noticeable
	// amount of time, especially for a network source. For a more responsive 
	// UI, use the asynchronous BeginCreateObjectFromURL method.

	hr = pSourceResolver->CreateObjectFromURL(
		mediaObject,                       // URL of the source.
		MF_RESOLUTION_MEDIASOURCE,  // Create a source object.
		NULL,                       // Optional property store.
		&ObjectType,        // Receives the created object type. 
		&pSource            // Receives a pointer to the media source.
		);
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	// Get the IMFMediaSource interface from the media source.
	hr = pSource->QueryInterface( IID_PPV_ARGS( &m_pIMFMediaSource ) );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}


	// Create the presentation descriptor for the media source.
	hr = m_pIMFMediaSource->CreatePresentationDescriptor( &this->m_pIMFPresentationDescriptor );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}
	

	// Create a partial topology.

	DWORD cSourceStreams = 0;

	// Create a new topology.
	hr = MFCreateTopology( &this->m_pIMFTopology );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}


	// Get the number of streams in the media source.
	hr = this->m_pIMFPresentationDescriptor->GetStreamDescriptorCount( &cSourceStreams );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	// Fetch metdata interface
	CComPtr<IMFMetadataProvider> pProvider;
	hr = MFGetService( this->m_pIMFMediaSource, MF_METADATA_PROVIDER_SERVICE, IID_PPV_ARGS( &pProvider ) );
	if ( SUCCEEDED( hr ) )
	{
		hr = pProvider->GetMFMetadata( this->m_pIMFPresentationDescriptor, 0, 0, &this->m_pIMFMetadata );		
	}

	

	// For each stream, create the topology nodes and add them to the topology.
	for ( DWORD i = 0; i < cSourceStreams; i++ )
	{
		//hr = AddBranchToPartialTopology(this->m_pIMFTopology, pSource, pPD, i, hVideoWnd);
		CComPtr<IMFStreamDescriptor> pSD;
		CComPtr<IMFActivate>         pSinkActivate;
		CComPtr<IMFTopologyNode>     pSourceNode;
		CComPtr<IMFTopologyNode>     pOutputNode;
		HWND hVideoWnd = NULL;

		BOOL fSelected = FALSE;

		HRESULT hr = this->m_pIMFPresentationDescriptor->GetStreamDescriptorByIndex( i, &fSelected, &pSD );
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return Error( L"", IID_INCFAudioPlayer, hr );
		}

		if ( fSelected )
		{
			// Create the media sink activation object.
			hr = CreateMediaSinkActivate( pSD, hVideoWnd, &pSinkActivate );
			if ( FAILED( hr ) )
			{
				goto done;
			}

			// Add a source node for this stream.
			hr = AddSourceNode( this->m_pIMFTopology, this->m_pIMFMediaSource, this->m_pIMFPresentationDescriptor, pSD, &pSourceNode );
			if ( FAILED( hr ) )
			{
				goto done;
			}

			// Create the output node for the renderer.
			hr = AddOutputNode( this->m_pIMFTopology, pSinkActivate, 0, &pOutputNode );
			if ( FAILED( hr ) )
			{
				goto done;
			}

			// Connect the source node to the output node.
			hr = pSourceNode->ConnectOutput( 0, pOutputNode, 0 );
		}
		// else: If not selected, don't add the branch. 

		if ( FAILED( hr ) )
		{
			goto done;
		}
	}

	// Set the topology on the media session.
	hr = this->m_pIMFMediaSession->SetTopology( 0, this->m_pIMFTopology );
	if ( FAILED( hr ) )
	{
		this->m_status = AudioPlayerStatus::Error;
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	//PROPVARIANT varStart;
	//PropVariantInit(&varStart);

	//hr = m_pIMFMediaSession->Start(&GUID_NULL, &varStart);
	//if (SUCCEEDED(hr))
	//{		
	//	// Note: Start is an asynchronous operation. However, we
	//	// can treat our state as being already started. If Start
	//	// fails later, we'll get an MESessionStarted event with
	//	// an error code, and we will update our state then.			
	//	this->m_status = AudioPlayerStatus::Playing;
	//}
	//PropVariantClear(&varStart);
	
done:

	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::Play()
{
	if ( this->m_status != AudioPlayerStatus::Loaded )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	PROPVARIANT varStart;
	PropVariantInit( &varStart );

	HRESULT hr = m_pIMFMediaSession->Start( &GUID_NULL, &varStart );
	if ( SUCCEEDED( hr ) )
	{
		// Note: Start is an asynchronous operation. However, we
		// can treat our state as being already started. If Start
		// fails later, we'll get an MESessionStarted event with
		// an error code, and we will update our state then.					
		DWORD dw = ::WaitForSingleObject( this->m_hEvent, INFINITE );	
		this->m_status = AudioPlayerStatus::Playing;
	}
	else
	{
		this->m_status = AudioPlayerStatus::Error;
	}
	PropVariantClear( &varStart );

	return S_OK;
}

HRESULT CNCFAudioPlayer::CreateMediaSinkActivate(
	IMFStreamDescriptor *pSourceSD,     // Pointer to the stream descriptor.
	HWND hVideoWindow,                  // Handle to the video clipping window.
	IMFActivate **ppActivate
	)
{
	CComPtr<IMFMediaTypeHandler> pHandler;
	CComPtr<IMFActivate> pActivate;

	// Get the media type handler for the stream.
	HRESULT hr = pSourceSD->GetMediaTypeHandler( &pHandler );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Get the major media type.
	GUID guidMajorType;
	hr = pHandler->GetMajorType( &guidMajorType );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Create an IMFActivate object for the renderer, based on the media type.
	if ( MFMediaType_Audio == guidMajorType )
	{
		// Create the audio renderer.
		hr = MFCreateAudioRendererActivate( &pActivate );
	}
	else if ( MFMediaType_Video == guidMajorType )
	{
		// Create the video renderer.
		hr = MFCreateVideoRendererActivate( hVideoWindow, &pActivate );
	}
	else
	{
		// Unknown stream type. 
		hr = E_FAIL;
		// Optionally, you could deselect this stream instead of failing.
	}
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Return IMFActivate pointer to caller.
	*ppActivate = pActivate.Detach();

done:

	return hr;
}

// Add a source node to a topology.
HRESULT CNCFAudioPlayer::AddSourceNode(
	IMFTopology *pTopology,           // Topology.
	IMFMediaSource *pSource,          // Media source.
	IMFPresentationDescriptor *pPD,   // Presentation descriptor.
	IMFStreamDescriptor *pSD,         // Stream descriptor.
	IMFTopologyNode **ppNode )         // Receives the node pointer.
{
	CComPtr<IMFTopologyNode> pNode;

	// Create the node.
	HRESULT hr = MFCreateTopologyNode( MF_TOPOLOGY_SOURCESTREAM_NODE, &pNode );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Set the attributes.
	hr = pNode->SetUnknown( MF_TOPONODE_SOURCE, pSource );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	hr = pNode->SetUnknown( MF_TOPONODE_PRESENTATION_DESCRIPTOR, pPD );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	hr = pNode->SetUnknown( MF_TOPONODE_STREAM_DESCRIPTOR, pSD );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Add the node to the topology.
	hr = pTopology->AddNode( pNode );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Return the pointer to the caller.
	*ppNode = pNode.Detach();


done:

	return hr;
}

// Add an output node to a topology.
HRESULT CNCFAudioPlayer::AddOutputNode(
	IMFTopology *pTopology,     // Topology.
	IMFActivate *pActivate,     // Media sink activation object.
	DWORD dwId,                 // Identifier of the stream sink.
	IMFTopologyNode **ppNode )   // Receives the node pointer.
{
	CComPtr<IMFTopologyNode> pNode;

	// Create the node.
	HRESULT hr = MFCreateTopologyNode( MF_TOPOLOGY_OUTPUT_NODE, &pNode );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Set the object pointer.
	hr = pNode->SetObject( pActivate );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Set the stream sink ID attribute.
	hr = pNode->SetUINT32( MF_TOPONODE_STREAMID, dwId );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	hr = pNode->SetUINT32( MF_TOPONODE_NOSHUTDOWN_ON_REMOVE, FALSE );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Add the node to the topology.
	hr = pTopology->AddNode( pNode );
	if ( FAILED( hr ) )
	{
		goto done;
	}

	// Return the pointer to the caller.
	*ppNode = pNode.Detach();


done:

	return hr;
}


STDMETHODIMP CNCFAudioPlayer::Pause()
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( this->m_status == AudioPlayerStatus::Playing )
	{
		HRESULT hr( S_OK );
		hr = this->m_pIMFMediaSession->Pause();
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return Error( L"", IID_INCFAudioPlayer, hr );
		}

		this->m_status = AudioPlayerStatus::Paused;
	}

	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::Resume()
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( this->m_status == AudioPlayerStatus::Paused )
	{
		HRESULT hr( S_OK );
		PROPVARIANT varStart;
		PropVariantInit( &varStart );
		hr = m_pIMFMediaSession->Start( &GUID_NULL, &varStart );
		if ( FAILED( hr ) )
		{
			this->m_status = AudioPlayerStatus::Error;
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
	}
	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::Stop()
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( this->m_status == AudioPlayerStatus::Playing ||
		this->m_status == AudioPlayerStatus::Paused )
	{
		HRESULT hr( S_OK );
		hr = this->m_pIMFMediaSession->Stop();
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}

		this->m_status = AudioPlayerStatus::Stopped;
	}
	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::Close()
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( this->m_status == AudioPlayerStatus::Playing ||
		this->m_status == AudioPlayerStatus::Paused )
	{
		this->Stop();
	}

	HRESULT hr( S_OK );

	hr = this->m_pIMFMediaSession->Close();
	if ( FAILED( hr ) )
	{
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	hr = this->m_pIMFMediaSource->Shutdown();
	if ( FAILED( hr ) )
	{
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	hr = this->m_pIMFMediaSession->Shutdown();
	if ( FAILED( hr ) )
	{
		return Error( L"", IID_INCFAudioPlayer, hr );
	}

	::MFShutdown();

	this->m_status = AudioPlayerStatus::Closed;

	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::GetPlayedDuration( /*[out, retval]*/ long* timeMs )
{	
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( timeMs == nullptr )
	{
		return Error( L"Argument 'timeMs' is NULL." );
	}

	if ( this->m_status == AudioPlayerStatus::Playing ||
		this->m_status == AudioPlayerStatus::Paused )
	{
		CComPtr<IMFClock> pIMFClock;
		HRESULT hr( S_OK );
		hr = this->m_pIMFMediaSession->GetClock( &pIMFClock );
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		CComQIPtr<IMFPresentationClock> pIMFPresentationClock;
		pIMFPresentationClock = pIMFClock;

		if ( pIMFPresentationClock )
		{
			MFTIME time = { 0 };
			hr = pIMFPresentationClock->GetTime( &time );
			if ( FAILED( hr ) )
			{
				*timeMs = 0;
				return S_OK;
			}
			*timeMs = (long) (time / 10000);
			return S_OK;
		}
	}

	*timeMs = 0;
	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::GetDuration( long *timeMs )
{	
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( timeMs == nullptr )
	{
		return Error( L"Argument 'timeMs' is NULL." );
	}

	if ( !this->m_pIMFPresentationDescriptor )
	{
		return Error( L"Media not played yet.", IID_INCFAudioPlayer, E_FAIL );
	}

	MFTIME time = 0;

	HRESULT hr = this->m_pIMFPresentationDescriptor->GetUINT64( MF_PD_DURATION, (UINT64*) &time );

	*timeMs = (long) (time / 10000L);

	return hr;
}

STDMETHODIMP CNCFAudioPlayer::get_VolumeLevel( /*[out, retval]*/ long* volume )
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );	
	}

	if ( volume == nullptr )
	{
		return Error( L"Argument 'volume' is NULL.", IID_INCFAudioPlayer, E_INVALIDARG );
	}

	CComQIPtr<IMFGetService> pIMFGetService = this->m_pIMFMediaSession;
	if ( pIMFGetService )
	{
		CComPtr<IMFAudioStreamVolume> pIMFAudioStreamVolume;
		HRESULT hr = pIMFGetService->GetService( MR_STREAM_VOLUME_SERVICE, IID_IMFSimpleAudioVolume, (LPVOID*) &pIMFAudioStreamVolume );
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		UINT32 dwChannelCount( 0 );
		hr = pIMFAudioStreamVolume->GetChannelCount( &dwChannelCount );
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		float* pVolumes = new float[dwChannelCount];
		hr = pIMFAudioStreamVolume->GetAllVolumes( dwChannelCount, pVolumes );
		if ( FAILED( hr ) )
		{
			delete[] pVolumes;
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		
		*volume = (long) (pVolumes[0]*100.0f);
		delete[] pVolumes;
	}
	return S_OK;
}

STDMETHODIMP CNCFAudioPlayer::put_VolumeLevel( /*[in]*/ long volume )
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}

	if ( volume < 0 || volume > 100 )
	{
		return Error( L"", IID_INCFAudioPlayer, E_INVALIDARG );
	}

	CComQIPtr<IMFGetService> pIMFGetService = this->m_pIMFMediaSession;
	if ( pIMFGetService )
	{
		CComPtr<IMFAudioStreamVolume> pIMFAudioStreamVolume;
		HRESULT hr = pIMFGetService->GetService( MR_STREAM_VOLUME_SERVICE, IID_IMFAudioStreamVolume, (LPVOID*) &pIMFAudioStreamVolume );
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		UINT32 dwChannelCount( 0 );
		hr = pIMFAudioStreamVolume->GetChannelCount( &dwChannelCount );
		if ( FAILED( hr ) )
		{
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		float fVolume = ((float) volume / 100.0f);
		float* pVolumes = new float[dwChannelCount];
		for ( int i = 0; i < dwChannelCount; i++ )
		{
			pVolumes[i] = fVolume;
		}
		hr = pIMFAudioStreamVolume->SetAllVolumes( dwChannelCount, pVolumes );
		if ( FAILED( hr ) )
		{
			delete[] pVolumes;
			return Error( L"", IID_INCFAudioPlayer, hr );
		}
		delete[] pVolumes;
	}
	return S_OK;
}
//
//STDMETHODIMP CNCFAudioPlayer::get_Mute( /*[out, retval]*/ VARIANT_BOOL* mute )
//{
//	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
//		this->m_status == AudioPlayerStatus::Closed )
//	{
//		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
//	}
//
//	if ( mute == nullptr )
//	{
//		return Error( L"Argument 'mute' is NULL.", IID_INCFAudioPlayer, E_INVALIDARG );
//	}
//
//	CComQIPtr<IMFGetService> pIMFGetService = this->m_pIMFMediaSession;
//	if ( pIMFGetService )
//	{
//		CComPtr<IMFAudioStreamVolume> pIMFAudioStreamVolume;
//		HRESULT hr = pIMFGetService->GetService( MR_STREAM_VOLUME_SERVICE, IID_IMFSimpleAudioVolume, (LPVOID*) &pIMFAudioStreamVolume );
//		if ( FAILED( hr ) )
//		{
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}
//		UINT32 dwChannelCount( 0 );
//		hr = pIMFAudioStreamVolume->GetChannelCount( &dwChannelCount );
//		if ( FAILED( hr ) )
//		{
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}
//		float* pVolumes = new float[dwChannelCount];
//		hr = pIMFAudioStreamVolume->GetAllVolumes( dwChannelCount, pVolumes );
//		if ( FAILED( hr ) )
//		{
//			delete[] pVolumes;
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}
//
//		long v = (long) (pVolumes[0] * 100.0f);
//		if ( v == 0 )
//		{
//			*mute = VARIANT_TRUE;
//		}
//		else
//		{
//			*mute = VARIANT_FALSE;
//		}
//
//		delete[] pVolumes;
//	}
//	return S_OK;
//}
//
//STDMETHODIMP CNCFAudioPlayer::put_Mute( /*[in]*/ VARIANT_BOOL mute )
//{
//	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
//		this->m_status == AudioPlayerStatus::Closed )
//	{
//		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
//	}
//
//	CComQIPtr<IMFGetService> pIMFGetService = this->m_pIMFMediaSession;
//	if ( pIMFGetService )
//	{
//		CComPtr<IMFAudioStreamVolume> pIMFAudioStreamVolume;
//		HRESULT hr = pIMFGetService->GetService( MR_STREAM_VOLUME_SERVICE, IID_IMFAudioStreamVolume, (LPVOID*) &pIMFAudioStreamVolume );
//		if ( FAILED( hr ) )
//		{
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}
//		UINT32 dwChannelCount( 0 );
//		hr = pIMFAudioStreamVolume->GetChannelCount( &dwChannelCount );
//		if ( FAILED( hr ) )
//		{
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}		
//		float* pVolumes = new float[dwChannelCount];
//		for ( int i = 0; i < dwChannelCount; i++ )
//		{
//			pVolumes[i] = 0.0f;
//		}
//		hr = pIMFAudioStreamVolume->SetAllVolumes( dwChannelCount, pVolumes );
//		if ( FAILED( hr ) )
//		{
//			delete[] pVolumes;
//			return Error( L"", IID_INCFAudioPlayer, hr );
//		}
//		delete[] pVolumes;
//	}
//	return S_OK;
//}


STDMETHODIMP CNCFAudioPlayer::get_Status( /*[out, retval]*/ AudioPlayerStatus* status)
{
	if ( status == nullptr )
	{
		return Error( L"Argument 'status' is NULL.", IID_INCFAudioPlayer, E_INVALIDARG );
	}
	
	*status = this->m_status;

	return S_OK;
}


STDMETHODIMP CNCFAudioPlayer::get_Metadata( /*[out, retval]*/ INCFAudioTag** ppINCFAudioTag )
{
	if ( this->m_status == AudioPlayerStatus::Uninitialized ||
		this->m_status == AudioPlayerStatus::Closed )
	{
		return Error( L"Cannot execute command with current status.", IID_INCFAudioPlayer, E_FAIL );
	}
	
	if ( ppINCFAudioTag == nullptr )
	{
		return Error( L"Argument 'ppINCFAudioTag' is NULL.", IID_INCFAudioPlayer, E_INVALIDARG );
	}

	CComPtr<INCFAudioTag> pINCFAudioTag;
	HRESULT hr = pINCFAudioTag.CoCreateInstance( L"ItSoftware.NCF.WmaTag" );
	if ( FAILED( hr ) )
	{
		return Error( L"Could not create type ItSoftware.NCF.WmaTag" );
	}	

	if ( this->m_pIMFMetadata )
	{
		PROPVARIANT prop;
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMAlbumArtist, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetAlbumAuthor( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMAlbumTitle, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetAlbumTitle( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMAuthor, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetAuthor( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMRating, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetRating( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMCopyright, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetCopyright( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMCopyrightURL, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetCopyrightURL( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMDescription, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetDescription( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMGenre, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetGenre( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMYear, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetYear( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMAlbumCoverURL, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetAlbumCoverURL( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMPromotionURL, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetPromotionURL( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMLyrics, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetLyrics( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMTitle, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetTitle( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMTrack, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetTrack( CComBSTR( prop.pwszVal ) );
		}
		hr = this->m_pIMFMetadata->GetProperty( g_wszWMComposer, &prop );
		if ( SUCCEEDED( hr ) )
		{
			pINCFAudioTag->SetComposer( CComBSTR( prop.pwszVal ) );
		}
		PropVariantClear( &prop );
	}	

	*ppINCFAudioTag = pINCFAudioTag.Detach();

	return S_OK;
}