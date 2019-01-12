// CNCFPath.h : Declaration of the CNCFPath

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFIO_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFPath

class ATL_NO_VTABLE CNCFPath :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFPath, &CLSID_NCFPath>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFPath, &IID_INCFPath, &LIBID_ItSoftwareNCFIOLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNCFPath()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFPATH)

DECLARE_NOT_AGGREGATABLE(CNCFPath)

BEGIN_COM_MAP(CNCFPath)
	COM_INTERFACE_ENTRY(INCFPath)
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

	// IKKSPath
	STDMETHOD(NormalizePath)( /*[in]*/ BSTR path,
		/*[out, retval]*/ BSTR* new_path);

	STDMETHOD(NormalizeExtension)( /*[in]*/ BSTR extension,
		/*[out, retval]*/ BSTR* new_extension);

	STDMETHOD(ExtractPath)( /*[in]*/ BSTR full_path,
		/*[out, retval]*/ BSTR* path);

	STDMETHOD(ExtractExtension)( /*[in]*/ BSTR full_path,
		/*[out, retval]*/ BSTR* extension);

	STDMETHOD(ExtractFilename)( /*[in]*/ BSTR full_path,
		/*[out, retval]*/ BSTR* filename);

	STDMETHOD(ExtractBaseFilename)( /*[in]*/ BSTR full_path,
		/*[out, retval]*/ BSTR* base_filename);

	STDMETHOD(ReplaceFilename)( /*[in]*/ BSTR full_path,
		/*[in]*/ BSTR new_file_name,
		/*[out, retval]*/ BSTR* new_full_path);

	STDMETHOD(ReplacePath)( /*[in]*/ BSTR full_path,
		/*[in]*/ BSTR new_path,
		/*[out, retval]*/ BSTR* new_full_path);

	STDMETHOD(ReplaceBaseFilename)( /*[in]*/ BSTR full_path,
		/*[in]*/ BSTR new_base_filename,
		/*[out, retval]*/ BSTR* new_full_path);

	STDMETHOD(ReplaceFileExtension)( /*[in]*/ BSTR full_path,
		/*[in]*/ BSTR new_file_extension,
		/*[out, retval]*/ BSTR* new_full_path);

	STDMETHOD(ReplaceVolume)( /*[in]*/ BSTR full_path,
		/*[in]*/ BSTR new_volume,
		/*[out, retval]*/ BSTR* new_full_path);

	STDMETHOD(SplitFullPath)( /*[in]*/ BSTR full_path,
		/*[in, out]*/ BSTR *volume,
		/*[in, out]*/ BSTR *path,
		/*[in, out]*/ BSTR *base_filename,
		/*[out, retval]*/ BSTR *file_extension);

	STDMETHOD(ExtractVolume)( /*[in]*/ BSTR full_path,
		/*[out, retval]*/ BSTR *volume);

};

OBJECT_ENTRY_AUTO(__uuidof(NCFPath), CNCFPath)
