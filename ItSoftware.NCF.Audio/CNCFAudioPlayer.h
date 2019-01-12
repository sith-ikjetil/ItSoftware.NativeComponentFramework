// CNCFAudioPlayer.h : Declaration of the CNCFAudioPlayer

#pragma once
#include "resource.h"       // main symbols
#include "mfapi.h"
#include "mfidl.h"


#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFAudioPlayer

class ATL_NO_VTABLE CNCFAudioPlayer :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFAudioPlayer, &CLSID_NCFAudioPlayer>,
	public ISupportErrorInfo,
	public IMFAsyncCallback,
	public IDispatchImpl < INCFAudioPlayer, &IID_INCFAudioPlayer, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	HANDLE m_hEvent;
	AudioPlayerStatus m_status;
	CComPtr<IMFMediaSession> m_pIMFMediaSession;
	CComPtr<IMFMediaSource> m_pIMFMediaSource;
	CComPtr<IMFPresentationDescriptor> m_pIMFPresentationDescriptor;
	CComPtr<IMFTopology> m_pIMFTopology;
	CComPtr<IMFMetadata> m_pIMFMetadata;

	HRESULT AddOutputNode(
		IMFTopology *pTopology,     // Topology.
		IMFActivate *pActivate,     // Media sink activation object.
		DWORD dwId,                 // Identifier of the stream sink.
		IMFTopologyNode **ppNode );   // Receives the node pointer.
	HRESULT AddSourceNode(
		IMFTopology *pTopology,           // Topology.
		IMFMediaSource *pSource,          // Media source.
		IMFPresentationDescriptor *pPD,   // Presentation descriptor.
		IMFStreamDescriptor *pSD,         // Stream descriptor.
		IMFTopologyNode **ppNode );
	HRESULT CreateMediaSinkActivate(
		IMFStreamDescriptor *pSourceSD,     // Pointer to the stream descriptor.
		HWND hVideoWindow,                  // Handle to the video clipping window.
		IMFActivate **ppActivate );
	HRESULT HandleEvent( UINT_PTR pEventPtr );
	HRESULT OnTopologyStatus( IMFMediaEvent *pEvent );
	HRESULT OnPresentationEnded( IMFMediaEvent *pEvent );
	HRESULT OnNewPresentation( IMFMediaEvent *pEvent );
	HRESULT OnSessionEvent( IMFMediaEvent* pEvent, MediaEventType type );	
public:
	// IMFAsyncCallback methods
	STDMETHODIMP GetParameters( DWORD*, DWORD* )
	{
		// Implementation of this method is optional.
		return E_NOTIMPL;
	}
	STDMETHOD( Invoke )(IMFAsyncResult* pAsyncResult);


	CNCFAudioPlayer()
	{
		m_pUnkMarshaler = NULL;
		this->m_status = AudioPlayerStatus::Uninitialized;
		this->m_hEvent = ::CreateEventW( NULL, FALSE, FALSE, L"CNCFAudioPlayer_Play" );
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFAUDIOPLAYER )

	DECLARE_NOT_AGGREGATABLE( CNCFAudioPlayer )

	BEGIN_COM_MAP( CNCFAudioPlayer )
		COM_INTERFACE_ENTRY( INCFAudioPlayer )
		COM_INTERFACE_ENTRY( IDispatch )
		COM_INTERFACE_ENTRY( ISupportErrorInfo )
		COM_INTERFACE_ENTRY_AGGREGATE( IID_IMarshal, m_pUnkMarshaler.p )
	END_COM_MAP()

	// ISupportsErrorInfo
	STDMETHOD( InterfaceSupportsErrorInfo )(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p );
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();

		if ( this->m_status != AudioPlayerStatus::Initialized &&
			this->m_status != AudioPlayerStatus::Closed )
		{
			this->Close();
		}
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	STDMETHOD( Initialize )();
	STDMETHOD( Load )(/*[in]*/ BSTR mediaObject);
	STDMETHOD( Play )();
	STDMETHOD( Pause )();
	STDMETHOD( Resume )();
	STDMETHOD( Stop )();
	STDMETHOD( Close )();
	STDMETHOD( GetPlayedDuration )( /*[out, retval]*/ long* timeMs);
	STDMETHOD( GetDuration )( /*[out, retval]*/ long *timeMs);
	STDMETHOD( get_VolumeLevel )( /*[out, retval]*/ long* volume);
	STDMETHOD( put_VolumeLevel )( /*[in]*/ long volume);
	//STDMETHOD( get_Mute )( /*[out, retval]*/ VARIANT_BOOL* mute);
	//STDMETHOD( put_Mute )( /*[in]*/ VARIANT_BOOL mute);
	STDMETHOD( get_Status )( /*[out, retval]*/ AudioPlayerStatus* status);
	STDMETHOD( get_Metadata)( /*[out, retval]*/ INCFAudioTag** pINCFAudioTag );
};

OBJECT_ENTRY_AUTO( __uuidof(NCFAudioPlayer), CNCFAudioPlayer )
