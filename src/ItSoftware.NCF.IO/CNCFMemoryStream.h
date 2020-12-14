// CNCFMemoryStream.h : Declaration of the CNCFMemoryStream

#pragma once
#include "resource.h"       // main symbols
#include <vector>
using namespace std;


#include "ItSoftwareNCFIO_i.h"

#define INITIAL_STREAM_SIZE 4098
#define MAX_STREAM_SIZE		1024*1024*250
struct MemStreamItem
{
	BYTE* pBuffer;
	long lBufferLength;

	MemStreamItem( int sizeFactor )
	{
		long bufferLength = sizeFactor * sizeFactor * sizeFactor * 16 * INITIAL_STREAM_SIZE;
		if ( bufferLength > MAX_STREAM_SIZE )
		{
			bufferLength = MAX_STREAM_SIZE;
		}

		this->pBuffer = new (std::nothrow) BYTE[bufferLength];
		if ( this->pBuffer == nullptr )
		{
			this->lBufferLength = -1;
		}
		else
		{
			lBufferLength = bufferLength;
		}
	}

	~MemStreamItem()
	{
		if ( pBuffer != nullptr )
		{
			delete[] pBuffer;
			pBuffer = nullptr;
			lBufferLength = -1;
		}
	}
};

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFMemoryStream

class ATL_NO_VTABLE CNCFMemoryStream :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFMemoryStream, &CLSID_NCFMemoryStream>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFMemoryStream, &IID_INCFMemoryStream, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	bool m_bClosed;
	vector<MemStreamItem*> m_memStream;
	long m_lReadPosition;
	long m_lWritePosition;
	long m_lWrittenLength;

	bool WriteToStream( BYTE* pData, long length );
	bool ReadFromStream( BYTE *pData, long length );
	long GetMemoryStreamLength();
	bool EnsureStreamLength( long length );
	bool IsClosed();
public:
	CNCFMemoryStream()
	{
		m_pUnkMarshaler = NULL;
		this->m_bClosed = false;
		this->m_lReadPosition = 0;
		this->m_lWritePosition = 0;
		this->m_lWrittenLength = 0;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFMEMORYSTREAM )

	DECLARE_NOT_AGGREGATABLE( CNCFMemoryStream )

	BEGIN_COM_MAP( CNCFMemoryStream )
		COM_INTERFACE_ENTRY( INCFStream )
		COM_INTERFACE_ENTRY( INCFMemoryStream )
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

		if ( !this->IsClosed() )
		{
			this->m_bClosed = true;
		}
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	STDMETHOD( WriteFrom )(/*[in]*/ BYTE* pData, /*[in]*/ long length);
	STDMETHOD( WriteFromStream )(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length);
	STDMETHOD( ReadTo )(/*[in]*/ BYTE* pData, /*[in]*/ long length);
	STDMETHOD( ReadToStream )(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length);
	STDMETHOD( put_CurrentReadPosition )(/*[in]*/ long position);
	STDMETHOD( get_CurrentReadPosition )(/*[out, retval]*/ long* position);
	STDMETHOD( put_CurrentWritePosition )(/*[in]*/ long position);
	STDMETHOD( get_CurrentWritePosition )(/*[out, retval]*/ long* position);
	STDMETHOD( Close )();
	STDMETHOD( get_Length )(/*[out, retval]*/ long* length);

};

OBJECT_ENTRY_AUTO( __uuidof(NCFMemoryStream), CNCFMemoryStream )
