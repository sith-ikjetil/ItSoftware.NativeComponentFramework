// CNCFFile.h : Declaration of the CNCFFile

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFFile

class ATL_NO_VTABLE CNCFFile :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFFile, &CLSID_NCFFile>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFFile, &IID_INCFFile, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNCFFile()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFFILE)

DECLARE_NOT_AGGREGATABLE(CNCFFile)

BEGIN_COM_MAP(CNCFFile)
	COM_INTERFACE_ENTRY(INCFFile)
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

	STDMETHOD(CreateOrOpen)(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFFileStream** ppINCFFileStream);
	STDMETHOD(CreateOrOpenText)(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFStringStream** ppINCFStringStream);
	STDMETHOD(CreateNew)(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFFileStream** ppINCFFileStream);
	STDMETHOD(CreateNewText)(/*[in]*/ BSTR filename, /*[out, retval]*/ INCFStringStream** ppINCFStringStream);
	STDMETHOD(Exists)(/*[in]*/ BSTR filename, /*[out, retval]*/ VARIANT_BOOL* status);
	STDMETHOD(Delete)(/*[in]*/ BSTR filename);
	STDMETHOD(EnumerateFiles)(/*[in]*/ BSTR directory, /*[in]*/BSTR pattern, /*[out, retval]*/ INCFCollectionList** ppINCFCollectionList);
	STDMETHOD(GetTempFilename)(/*[in]*/ BSTR extension, /*[out, retval]*/ BSTR* filename);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFFile), CNCFFile)
