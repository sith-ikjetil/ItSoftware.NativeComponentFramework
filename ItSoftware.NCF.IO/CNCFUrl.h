// CNFCUrl.h : Declaration of the CNFCUrl

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNFCUrl

class ATL_NO_VTABLE CNCFUrl :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFUrl, &CLSID_NCFUrl>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFUrl, &IID_INCFUrl, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
public:
	CNCFUrl()
	{
		m_pUnkMarshaler = NULL;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFURL )

	DECLARE_NOT_AGGREGATABLE( CNCFUrl )

	BEGIN_COM_MAP( CNCFUrl )
		COM_INTERFACE_ENTRY( INCFUrl )
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
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	// IKKSURL
	STDMETHOD( ExtractProtocol )( /*[in]*/ BSTR url,
		/*[out, retval]*/ BSTR *protocol);

	STDMETHOD( ExtractDomain )( /*[in]*/ BSTR url,
		/*[out, retval]*/ BSTR* domain);

	STDMETHOD( ExtractPort )( /*[in]*/ BSTR url,
		/*[out, retval]*/ BSTR* port);

	STDMETHOD( ExtractPath )( /*[in]*/ BSTR url,
		/*[out, retval]*/ BSTR* path);

	STDMETHOD( ExtractFilename )( /*[in]*/ BSTR url,
		/*[out, retval]*/ BSTR* filename);

	STDMETHOD( SplitURL )( /*[in]*/ BSTR url,
		/*[in, out]*/ BSTR *protocol,
		/*[in, out]*/ BSTR *domain,
		/*[in, out]*/ BSTR *port,
		/*[in, out]*/ BSTR *path,
		/*[out, retval]*/ BSTR *filename);

	STDMETHOD( Encode )( /*[in]*/ BSTR url, /*[out, retval]*/ BSTR* urlEncoded);
	STDMETHOD( Decode )(/*[in]*/ BSTR url, /*[out, retval]*/ BSTR* urlDecoded);

};

OBJECT_ENTRY_AUTO( __uuidof(NCFUrl), CNCFUrl )
