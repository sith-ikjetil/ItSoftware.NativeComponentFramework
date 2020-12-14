// CNCFStringStream.h : Declaration of the CNCFStringStream

#pragma once
#include "resource.h"       // main symbols
#include "CNCFFile.h"
#include <iostream>
#include <fstream>
using namespace std;

#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFStringStream

class ATL_NO_VTABLE CNCFStringStream :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFStringStream, &CLSID_NCFStringStream>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFStringStream, &IID_INCFStringStream, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	wfstream* m_pfStream;
	bool m_bHasByteOrderMark;
	void Initialize(wfstream* fs, bool bHasByteOrderMark)
	{
		this->m_pfStream = fs;
	}
	bool IsClosed()
	{
		if (this->m_pfStream == nullptr) {
			return true;
		}

		return !this->m_pfStream->is_open();
	}
	bool IsValidReadWritePosition(long position)
	{
		long lLength(0);
		this->get_Length(&lLength);
		if (position < 0 || position >= lLength) {
			return false;
		}
		return true;
	}
	
	friend HRESULT CNCFFile::CreateOrOpenText(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFStringStream** ppINCFStringStreawm);
public:
	CNCFStringStream()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFSTRINGSTREAM)

DECLARE_NOT_AGGREGATABLE(CNCFStringStream)

BEGIN_COM_MAP(CNCFStringStream)
	COM_INTERFACE_ENTRY(INCFStringStream)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();

		if (this->m_pfStream != nullptr) {
			if (this->m_pfStream->is_open()) {
				this->m_pfStream->flush();
				this->m_pfStream->close();
			}
			delete this->m_pfStream;
			this->m_pfStream = nullptr;
		}
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	// INCFStringStream	
	STDMETHOD(WriteLine)(/*[in]*/ BSTR text);
	STDMETHOD(WriteString)(/*[in]*/ BSTR text);
	STDMETHOD(ReadLine)(/*[in]*/ BSTR* pText);
	STDMETHOD(ReadAllLines)(/*[out, retval]*/ INCFCollectionList** pINCFCollectionList);
	STDMETHOD(put_CurrentReadPosition)(/*[in]*/ long position);
	STDMETHOD(get_CurrentReadPosition)(/*[out, retval]*/ long* position);
	STDMETHOD(put_CurrentWritePosition)(/*[in]*/ long position);
	STDMETHOD(get_CurrentWritePosition)(/*[out, retval]*/ long* position);
	STDMETHOD(Close)();
	STDMETHOD(get_Length)(/*[out, retval]*/ long* length);
};

OBJECT_ENTRY_AUTO(__uuidof(NCFStringStream), CNCFStringStream)
