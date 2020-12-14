// CNCFMp3Genre.h : Declaration of the CNCFMp3Genre

#pragma once
#include "resource.h"       // main symbols
#include "../ItSoftware.NCF.Collection/ItSoftwareNCFCollection_i.h"


#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CNCFMp3Genre

class ATL_NO_VTABLE CNCFMp3Genre :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFMp3Genre, &CLSID_NCFMp3Genre>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFMp3Genre, &IID_INCFMp3Genre, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CNCFMp3Genre()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFMP3GENRE)

DECLARE_NOT_AGGREGATABLE(CNCFMp3Genre)

BEGIN_COM_MAP(CNCFMp3Genre)
	COM_INTERFACE_ENTRY(INCFMp3Genre)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(GetGenreById)( /*[in]*/ long genre_id, /*[out, retval]*/ BSTR *genre_name);
	STDMETHOD(GetGenreByName)( /*[in]*/ BSTR genre_name, /*[out, retval]*/ long *genre_id);
	STDMETHOD(EnumerateGenre)( /*[out, retval]*/ INCFCollectionMap **ppINCFCollectionMap);


};

OBJECT_ENTRY_AUTO(__uuidof(NCFMp3Genre), CNCFMp3Genre)
