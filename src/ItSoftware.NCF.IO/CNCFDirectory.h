// CNCFDirectory.h : Declaration of the CNCFDirectory

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFDirectory

class ATL_NO_VTABLE CNCFDirectory :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFDirectory, &CLSID_NCFDirectory>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFDirectory, &IID_INCFDirectory, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNCFDirectory()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFDIRECTORY)

DECLARE_NOT_AGGREGATABLE(CNCFDirectory)

BEGIN_COM_MAP(CNCFDirectory)
	COM_INTERFACE_ENTRY(INCFDirectory)
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
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:
	
	STDMETHOD(Create)(/*[in]*/ BSTR directory);	
	STDMETHOD(Delete)(/*[in]*/ BSTR directory);	
	STDMETHOD(Exists)(/*[in]*/ BSTR directory, /*[out, retval]*/ VARIANT_BOOL* status);	
	STDMETHOD(EnumerateDirectories)(/*[in]*/ BSTR directory, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList);	
	STDMETHOD(GetTempDirectory)(/*[out, retval]*/ BSTR* directory);	
	STDMETHOD(GetProgramDataDirectory)(/*[out, retval]*/ BSTR* directory);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFDirectory), CNCFDirectory)
