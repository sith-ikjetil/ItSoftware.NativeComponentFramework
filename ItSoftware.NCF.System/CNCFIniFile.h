// CNCFIniFile.h : Declaration of the CNCFIniFile

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFSystem_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFIniFile

class ATL_NO_VTABLE CNCFIniFile :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFIniFile, &CLSID_NCFIniFile>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFIniFile, &IID_INCFIniFile, &LIBID_ItSoftwareNCFSystemLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CComBSTR GetLastErrorDesc();
public:
	CNCFIniFile()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFINIFILE)

DECLARE_NOT_AGGREGATABLE(CNCFIniFile)

BEGIN_COM_MAP(CNCFIniFile)
	COM_INTERFACE_ENTRY(INCFIniFile)
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

	// IKKSIniFile
	STDMETHOD(CreateKey)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname,
		/*[in]*/ BSTR keyname,
		/*[in]*/ BSTR value,
		/*[in]*/ VARIANT_BOOL overwriteifexist);

	STDMETHOD(DeleteKey)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname,
		/*[in]*/ BSTR keyname);

	STDMETHOD(ReadValue)( /*[in]*/  BSTR filename,
		/*[in]*/  BSTR sectionname,
		/*[in]*/  BSTR keyname,
		/*[out, retval]*/ BSTR *value);

	STDMETHOD(SetValue)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname,
		/*[in]*/ BSTR keyname,
		/*[in]*/ BSTR value);

	STDMETHOD(CreateSection)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname);

	STDMETHOD(DeleteSection)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname);

	STDMETHOD(StoreCollection)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname,
		/*[in]*/ INCFCollectionMap *pINCFCollectionMap,
		/*[in]*/ VARIANT_BOOL overwriteifexist);

	STDMETHOD(EnumerateKeys)( /*[in]*/ BSTR filename,
		/*[in]*/ BSTR sectionname,
		/*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap);

	STDMETHOD(EnumerateSections)( /*[in]*/ BSTR filename,
		/*[out, retval]*/ INCFCollectionList **ppINCFCollectionList);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFIniFile), CNCFIniFile)
