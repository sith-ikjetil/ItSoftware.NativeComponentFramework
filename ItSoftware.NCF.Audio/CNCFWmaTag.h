// CWMHeaderInfo.h : Declaration of the CWMHeaderInfo

#pragma once
#include "resource.h"       // main symbols


#include "ItSoftwareNCFAudio_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CWMHeaderInfo

class ATL_NO_VTABLE CNCFWmaTag :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CNCFWmaTag, &CLSID_NCFWmaTag>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFWmaTag, &IID_INCFWmaTag, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CComBSTR m_bstrAlbumAuthor;
	CComBSTR m_bstrTitle;
	CComBSTR m_bstrAuthor;
	CComBSTR m_bstrRating;
	CComBSTR m_bstrCopyright;
	CComBSTR m_bstrDescription;
	CComBSTR m_bstrAlbumTitle;
	CComBSTR m_bstrTrack;
	CComBSTR m_bstrGenre;
	CComBSTR m_bstrCopyrightURL;
	CComBSTR m_bstrYear;
	CComBSTR m_bstrAlbumCoverURL;
	CComBSTR m_bstrPromotionURL;
	CComBSTR m_bstrLyrics;
	CComBSTR m_bstrComposer;

	QWORD m_qwDuration;

	BOOL m_bHasAudio;
	BOOL m_bHasVideo;

	//DWORD m_dwOptimalBitrate;

	CComBSTR GetStringAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo);
	DWORD GetDWORDAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo);
	QWORD GetQWORDAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo);
	BOOL GetBOOLAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo);

	void SetStringAttribute(const wchar_t *name, BSTR value, IWMHeaderInfo3 *pIWMHeaderInfo);
	void SetDWORDAttribute(const wchar_t *name, DWORD value, IWMHeaderInfo3 *pIWMHeaderInfo);

	void UpdateGenre();

public:
	CNCFWmaTag()
	{
	}

DECLARE_REGISTRY_RESOURCEID( IDR_CNCFWMATAG )

DECLARE_NOT_AGGREGATABLE(CNCFWmaTag)

BEGIN_COM_MAP(CNCFWmaTag)
	COM_INTERFACE_ENTRY( INCFAudioTag )
	COM_INTERFACE_ENTRY(INCFWmaTag)
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

	STDMETHOD(SetTitle)( /*[in]*/ BSTR title);
	STDMETHOD(GetTitle)( /*[out, retval]*/ BSTR *title);
	STDMETHOD(SetAuthor)( /*[in]*/ BSTR author);
	STDMETHOD(GetAuthor)( /*[out, retval]*/ BSTR *author);
	STDMETHOD(SetDescription)( /*[in]*/ BSTR description);
	STDMETHOD(GetDescription)( /*[out, retval]*/ BSTR *description);
	STDMETHOD(SetRating)( /*[in]*/ BSTR rating);
	STDMETHOD(GetRating)( /*[out, retval]*/ BSTR *rating);
	STDMETHOD(SetCopyright)( /*[in]*/ BSTR copyright);
	STDMETHOD(GetCopyright)( /*[out, retval]*/ BSTR *copyright);
	STDMETHOD(SetAlbumTitle)( /*[in]*/ BSTR album_title);
	STDMETHOD(GetAlbumTitle)( /*[out, retval]*/ BSTR *album_title);
	STDMETHOD(SetTrack)(/*[in]*/ BSTR track_number);
	STDMETHOD(GetTrack)(/*[out, retval]*/ BSTR *track_number);
	STDMETHOD(SetGenre)( /*[in]*/ BSTR genre);
	STDMETHOD(GetGenre)( /*[out, retval]*/ BSTR *genre);
	STDMETHOD(SetYear)( /*[in]*/ BSTR year);
	STDMETHOD(GetYear)( /*[out, retval]*/ BSTR *year);
	STDMETHOD(SetCopyrightURL)( /*[in]*/ BSTR copyright_url);
	STDMETHOD(GetCopyrightURL)( /*[out, retval]*/ BSTR *copyright_url);
	STDMETHOD(SetAlbumCoverURL)( /*[in]*/ BSTR album_cover_url);
	STDMETHOD(GetAlbumCoverURL)( /*[out, retval]*/ BSTR *album_cover_url);
	STDMETHOD(SetPromotionURL)( /*[in]*/ BSTR promotion_url);
	STDMETHOD(GetPromotionURL)( /*[out, retval]*/ BSTR *promotion_url);
	STDMETHOD(SetLyrics)( /*[in]*/ BSTR lyrics);
	STDMETHOD(GetLyrics)( /*[out, retval]*/ BSTR *lyrics);
	STDMETHOD(LoadFromFile)( /*[in]*/ BSTR filename);
	STDMETHOD(SaveToFile)( /*[in]*/ BSTR filename);
	STDMETHOD(LoadFromInterface)( /*[in]*/ IUnknown *pIUnknown);
	STDMETHOD(SaveToInterface)( /*[in]*/ IUnknown *pIUnknown);
	STDMETHOD(Clear)();
	STDMETHOD(get_Duration)( /*[out, retval]*/ long *milliseconds);
	STDMETHOD(get_HasAudio)( /*[out, retval]*/ VARIANT_BOOL *has_audio);
	STDMETHOD(get_HasVideo)( /*[out, retval]*/ VARIANT_BOOL *has_video);
	STDMETHOD(GetComposer)( /*[out, retval]*/ BSTR *composer);
	STDMETHOD(SetComposer)( /*[in]*/ BSTR composer);
	STDMETHOD(SetAlbumAuthor)(/*[in]*/ BSTR author);
	STDMETHOD(GetAlbumAuthor)(/*[out,retval]*/ BSTR *author);
};

OBJECT_ENTRY_AUTO(__uuidof(NCFWmaTag), CNCFWmaTag)
