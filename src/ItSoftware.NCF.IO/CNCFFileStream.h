// CNCFFileStream.h : Declaration of the CNCFFileStream

#pragma once
#include "resource.h"       // main symbols
#include <iostream>
#include <fstream>
using namespace std;

#include "CNCFFile.h"

#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFFileStream

class ATL_NO_VTABLE CNCFFileStream :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFFileStream, &CLSID_NCFFileStream>,
	public ISupportErrorInfo,
	public IDispatchImpl < INCFFileStream, &IID_INCFFileStream, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0 >
{
	fstream* m_pfStream;
	void Initialize( fstream* fs )
	{
		this->m_pfStream = fs;
	}
	bool IsClosed()
	{
		if ( this->m_pfStream == nullptr )
		{
			return true;
		}

		return !this->m_pfStream->is_open();
	}
	bool IsValidReadWritePosition( long position )
	{
		long lLength( 0 );
		this->get_Length( &lLength );
		if ( position < 0 || position >= lLength )
		{
			return false;
		}
		return true;
	}
	friend HRESULT CNCFFile::CreateOrOpen(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFFileStream** ppINCFFileStream );
public:

	CNCFFileStream()
	{
		m_pUnkMarshaler = NULL;
	}

	DECLARE_REGISTRY_RESOURCEID( IDR_CNCFFILESTREAM )

	DECLARE_NOT_AGGREGATABLE( CNCFFileStream )

	BEGIN_COM_MAP( CNCFFileStream )
		COM_INTERFACE_ENTRY( INCFStream )
		COM_INTERFACE_ENTRY( INCFFileStream )
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

		if ( this->m_pfStream != nullptr )
		{
			if ( this->m_pfStream->is_open() )
			{
				this->m_pfStream->flush();
				this->m_pfStream->close();
			}
			delete this->m_pfStream;
			this->m_pfStream = nullptr;
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

OBJECT_ENTRY_AUTO( __uuidof(NCFFileStream), CNCFFileStream )
