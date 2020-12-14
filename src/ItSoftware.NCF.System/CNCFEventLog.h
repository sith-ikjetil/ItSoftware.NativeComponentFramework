// CNCFEventLog.h : Declaration of the CNCFEventLog

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFSystem_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFEventLog

class ATL_NO_VTABLE CNCFEventLog :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFEventLog, &CLSID_NCFEventLog>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFEventLog, &IID_INCFEventLog, &LIBID_ItSoftwareNCFSystemLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	WORD ConvertEnumToType(EEVENTLOGTYPE type);
public:
	CNCFEventLog()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFEVENTLOG)

DECLARE_NOT_AGGREGATABLE(CNCFEventLog)

BEGIN_COM_MAP(CNCFEventLog)
	COM_INTERFACE_ENTRY(INCFEventLog)
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

	// IKKSEventLog
	STDMETHOD(ReportEvent)( /*[in]*/ BSTR sourcename, /*[in]*/ EEVENTLOGTYPE eeventlogtype, /*[in]*/ short category, /*[in]*/ long eventid, /*[in]*/ short numberofstrings, /*[in]*/ BSTR description);
	STDMETHOD(ReportEventEx)( /*[in]*/ BSTR uncservername, /*[in]*/ BSTR sourcename, /*[in]*/ EEVENTLOGTYPE eeventlogtype, /*[in]*/ short category, /*[in]*/ long eventid, /*[in]*/ short numberofstrings, /*[in]*/ BSTR description);
	//STDMETHOD(ReportEventRemote)( /*[in]*/ BSTR serveraddress, /*[in]*/ BSTR sourcename, /*[in]*/ EEVENTLOGTYPE eeventlogtype, /*[in]*/ short category, /*[in]*/ long eventid, /*[in]*/ short numberofstrings, /*[in]*/ BSTR description );

};

OBJECT_ENTRY_AUTO(__uuidof(NCFEventLog), CNCFEventLog)
