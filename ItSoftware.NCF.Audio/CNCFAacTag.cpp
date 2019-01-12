// CNCFAacTag.cpp : Implementation of CNCFAacTag

#include "stdafx.h"
#include "CNCFAacTag.h"
#include "wmsdkidl.h"
#include "../ItSoftware.NCF.System/ItSoftwareNCFSystem_i.h"
#include "../ItSoftware.NCF.Audio/ItSoftwareNCFAudio_i.h"

// CNCFAacTag

STDMETHODIMP CNCFAacTag::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] =
	{
		&IID_INCFAacTag
	};

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i], riid))
			return S_OK;
	}
	return S_FALSE;
}


//
// INCFWMHeaderInfo
//
STDMETHODIMP CNCFAacTag::SetTitle( /*[in]*/ BSTR title)
{
	m_bstrTitle.Empty();
	m_bstrTitle.AppendBSTR(title);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetTitle( /*[out, retval]*/ BSTR *title)
{
	if (title == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	*title = m_bstrTitle.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetAuthor( /*[in]*/ BSTR author)
{
	m_bstrAuthor.Empty();
	m_bstrAuthor.AppendBSTR(author);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetAuthor( /*[out, retval]*/ BSTR *author)
{
	if (author == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*author);
	*author = m_bstrAuthor.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetDescription( /*[in]*/ BSTR description)
{
	m_bstrDescription.Empty();
	m_bstrDescription.AppendBSTR(description);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetDescription( /*[out, retval]*/ BSTR *description)
{
	if (description == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*description);
	*description = m_bstrDescription.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetRating( /*[in]*/ BSTR rating)
{
	m_bstrRating.Empty();
	m_bstrRating.AppendBSTR(rating);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetRating( /*[out, retval]*/ BSTR *rating)
{
	if (rating == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*rating);
	*rating = m_bstrRating.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetCopyright( /*[in]*/ BSTR copyright)
{
	m_bstrCopyright.Empty();
	m_bstrCopyright.AppendBSTR(copyright);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetCopyright( /*[out, retval]*/ BSTR *copyright)
{
	if (copyright == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*copyright);
	*copyright = m_bstrCopyright.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetAlbumTitle( /*[in]*/ BSTR album)
{
	m_bstrAlbumTitle.Empty();
	m_bstrAlbumTitle.AppendBSTR(album);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetAlbumTitle( /*[out, retval]*/ BSTR *album)
{
	if (album == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*album);
	*album = m_bstrAlbumTitle.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetTrack(/*[in]*/ BSTR track_number)
{
	m_bstrTrack.Empty();
	m_bstrTrack.AppendBSTR(track_number);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetTrack(/*[out, retval]*/ BSTR *track_number)
{
	if (track_number == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	*track_number = m_bstrTrack.Copy();;
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetGenre( /*[in]*/ BSTR genre)
{
	m_bstrGenre.Empty();
	m_bstrGenre.AppendBSTR(genre);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetGenre( /*[out, retval]*/ BSTR *genre)
{
	if (genre == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*genre);
	*genre = m_bstrGenre.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetYear( /*[in]*/ BSTR year)
{
	m_bstrYear.Empty();
	m_bstrYear.AppendBSTR(year);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetYear( /*[out, retval]*/ BSTR *year)
{
	if (year == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*year);
	*year = m_bstrYear.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetCopyrightURL( /*[in]*/ BSTR copyright_url)
{
	m_bstrCopyrightURL.Empty();
	m_bstrCopyrightURL.AppendBSTR(copyright_url);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetCopyrightURL( /*[out, retval]*/ BSTR *copyright_url)
{
	if (copyright_url == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	*copyright_url = m_bstrCopyrightURL.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetComposer( /*[out, retval]*/ BSTR *composer)
{
	if (composer == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	*composer = m_bstrComposer.Copy();

	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetComposer( /*[in]*/ BSTR composer)
{
	m_bstrComposer.Empty();
	m_bstrComposer.AppendBSTR(composer);
	return S_OK;
}


STDMETHODIMP CNCFAacTag::SetAlbumCoverURL( /*[in]*/ BSTR album_cover_url)
{
	m_bstrAlbumCoverURL.Empty();
	m_bstrAlbumCoverURL.AppendBSTR(album_cover_url);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetAlbumCoverURL( /*[out, retval]*/ BSTR *album_cover_url)
{
	if (album_cover_url == NULL) {
		return Error(CComBSTR(L"GetAlbumCoverURL failed. Invalid Arguments."), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*album_cover_url);
	*album_cover_url = m_bstrAlbumCoverURL.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetPromotionURL( /*[in]*/ BSTR promotion_url)
{
	m_bstrPromotionURL.Empty();
	m_bstrPromotionURL.AppendBSTR(promotion_url);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetPromotionURL( /*[out, retval]*/ BSTR *promotion_url)
{
	if (promotion_url == NULL) {
		return Error(CComBSTR(L"GetPromotionURL failed. Invalid Arguments."), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*promotion_url);
	*promotion_url = m_bstrPromotionURL.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetLyrics( /*[in]*/ BSTR lyrics)
{
	m_bstrLyrics.Empty();
	m_bstrLyrics.AppendBSTR(lyrics);
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetLyrics( /*[out, retval]*/ BSTR *lyrics)
{
	if (lyrics == NULL) {
		return Error(CComBSTR(L"GetLyrics Failed. Invalid Arguments."), IID_INCFAacTag, E_INVALIDARG);
	}
	SysFreeString(*lyrics);
	*lyrics = m_bstrLyrics.Copy();
	return S_OK;
}

STDMETHODIMP CNCFAacTag::SetAlbumAuthor(/*[in]*/ BSTR author)
{
	this->m_bstrAlbumAuthor = author;
	return S_OK;
}

STDMETHODIMP CNCFAacTag::GetAlbumAuthor(/*[out,retval]*/ BSTR *author)
{
	if (author == nullptr) {
		return Error(CComBSTR(L"GetAlbumAuthor failed. Invalid Arguments."), IID_INCFAacTag, E_INVALIDARG);
	}
	*author = this->m_bstrAlbumAuthor.Copy();

	return S_OK;
}


STDMETHODIMP CNCFAacTag::LoadFromFile( /*[in]*/ BSTR filename)
{
	if (SysStringLen(filename) == 0) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	CComPtr<IWMMetadataEditor> pIWMMetadataEditor;
	hr = WMCreateEditor(&pIWMMetadataEditor);
	if (FAILED(hr)) {
		return Error(CComBSTR(L"LoadFromFile Failed. WMCreateEditor Failed."), IID_INCFAacTag, E_INVALIDARG);
	}

	hr = pIWMMetadataEditor->Open(filename);
	if (FAILED(hr)) {
		return Error(CComBSTR(L"LoadFromFile Failed. Failed To Open File."), IID_INCFAacTag, E_INVALIDARG);
	}

	CComQIPtr<IWMHeaderInfo3> pIWMHeaderInfo3;
	pIWMHeaderInfo3 = pIWMMetadataEditor;
	if (pIWMHeaderInfo3.p == NULL) {
		return Error(CComBSTR(L"LoadFromFile Failed. Failed To QueryInterface for IWMHeaderInfo interface on IWMMetadataEditor."), IID_INCFAacTag, E_INVALIDARG);
	}

	hr = LoadFromInterface(pIWMHeaderInfo3);

	UpdateGenre();

	hr = pIWMMetadataEditor->Close();

	return S_OK;
}


STDMETHODIMP CNCFAacTag::SaveToFile( /*[in]*/ BSTR filename)
{
	if (SysStringLen(filename) == 0) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	HRESULT hr(S_OK);
	CComPtr<IWMMetadataEditor> pIWMMetadataEditor;
	hr = WMCreateEditor(&pIWMMetadataEditor);
	if (FAILED(hr)) {
		return Error(CComBSTR(L"SaveToFile Failed. WMCreateEditor Failed."), IID_INCFAacTag, E_INVALIDARG);
	}

	hr = pIWMMetadataEditor->Open(filename);
	if (FAILED(hr)) {
		return Error(CComBSTR(L"SaveToFile Failed. Failed To Open File."), IID_INCFAacTag, E_INVALIDARG);
	}

	CComQIPtr<IWMHeaderInfo3> pIWMHeaderInfo3;
	pIWMHeaderInfo3 = pIWMMetadataEditor;
	if (pIWMHeaderInfo3.p == NULL) {
		return Error(CComBSTR(L"SaveToFile Failed. Failed To QueryInterface for IWMHeaderInfo interface on IWMMetadataEditor."), IID_INCFAacTag, E_INVALIDARG);
	}

	hr = SaveToInterface(pIWMHeaderInfo3);

	hr = pIWMMetadataEditor->Flush();

	return S_OK;
}


STDMETHODIMP CNCFAacTag::LoadFromInterface( /*[in]*/ IUnknown *pIUnknown)
{
	CComQIPtr<IWMHeaderInfo3> pIWMHeaderInfo3;
	pIWMHeaderInfo3 = pIUnknown;
	if (pIWMHeaderInfo3.p == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	m_bstrAlbumAuthor.Empty();
	m_bstrAlbumAuthor = GetStringAttribute(g_wszWMAlbumArtist, pIWMHeaderInfo3);

	m_bstrAlbumTitle.Empty();
	m_bstrAlbumTitle = GetStringAttribute(g_wszWMAlbumTitle, pIWMHeaderInfo3);

	m_bstrAuthor.Empty();
	m_bstrAuthor = GetStringAttribute(g_wszWMAuthor, pIWMHeaderInfo3);

	m_bstrRating.Empty();
	m_bstrRating = GetStringAttribute(g_wszWMRating, pIWMHeaderInfo3);

	m_bstrCopyright.Empty();
	m_bstrCopyright = GetStringAttribute(g_wszWMCopyright, pIWMHeaderInfo3);

	m_bstrCopyrightURL.Empty();
	m_bstrCopyrightURL = GetStringAttribute(g_wszWMCopyrightURL, pIWMHeaderInfo3);

	m_bstrDescription.Empty();
	m_bstrDescription = GetStringAttribute(g_wszWMDescription, pIWMHeaderInfo3);

	m_bstrGenre.Empty();
	m_bstrGenre = GetStringAttribute(g_wszWMGenre, pIWMHeaderInfo3);

	m_bstrYear.Empty();
	m_bstrYear = GetStringAttribute(g_wszWMYear, pIWMHeaderInfo3);

	m_bstrAlbumCoverURL.Empty();
	m_bstrAlbumCoverURL = GetStringAttribute(g_wszWMAlbumCoverURL, pIWMHeaderInfo3);

	m_bstrPromotionURL.Empty();
	m_bstrPromotionURL = GetStringAttribute(g_wszWMPromotionURL, pIWMHeaderInfo3);

	m_bstrLyrics.Empty();
	m_bstrLyrics = GetStringAttribute(g_wszWMLyrics, pIWMHeaderInfo3);

	m_bstrTitle.Empty();
	m_bstrTitle = GetStringAttribute(g_wszWMTitle, pIWMHeaderInfo3);

	m_bstrTrack.Empty();
	m_bstrTrack = GetStringAttribute(g_wszWMTrack, pIWMHeaderInfo3);

	m_bstrComposer.Empty();
	m_bstrComposer = GetStringAttribute(g_wszWMComposer, pIWMHeaderInfo3);

	m_qwDuration = GetQWORDAttribute(g_wszWMDuration, pIWMHeaderInfo3);
	m_bHasVideo = GetBOOLAttribute(g_wszWMHasVideo, pIWMHeaderInfo3);
	m_bHasAudio = GetBOOLAttribute(g_wszWMHasAudio, pIWMHeaderInfo3);

	return S_OK;
}


STDMETHODIMP CNCFAacTag::SaveToInterface( /*[in]*/ IUnknown *pIUnknown)
{
	if (pIUnknown == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	CComQIPtr<IWMHeaderInfo3> pIWMHeaderInfo3;
	pIWMHeaderInfo3 = pIUnknown;
	if (pIWMHeaderInfo3.p == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	SetStringAttribute(g_wszWMAlbumArtist, m_bstrAlbumAuthor, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMAlbumTitle, m_bstrAlbumTitle, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMAuthor, m_bstrAuthor, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMRating, m_bstrRating, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMCopyright, m_bstrCopyright, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMCopyrightURL, m_bstrCopyrightURL, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMDescription, m_bstrDescription, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMGenre, m_bstrGenre, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMYear, m_bstrYear, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMAlbumCoverURL, m_bstrAlbumCoverURL, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMPromotionURL, m_bstrPromotionURL, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMLyrics, m_bstrLyrics, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMTitle, m_bstrTitle, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMTrack, m_bstrTrack, pIWMHeaderInfo3);
	SetStringAttribute(g_wszWMComposer, m_bstrComposer, pIWMHeaderInfo3);


	return S_OK;
}


STDMETHODIMP CNCFAacTag::get_Duration( /*[out, retval]*/ long *milliseconds)
{
	if (milliseconds == NULL) {
		return Error(CComBSTR(L"milliseconds is NULL"), IID_INCFAacTag, E_INVALIDARG);
	}

	*milliseconds = static_cast<long>(m_qwDuration / 10000);

	return S_OK;
}

STDMETHODIMP CNCFAacTag::get_HasAudio( /*[out, retval]*/ VARIANT_BOOL *has_audio)
{
	if (has_audio == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	(m_bHasAudio == TRUE) ? *has_audio = VARIANT_TRUE : *has_audio = VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CNCFAacTag::get_HasVideo( /*[out, retval]*/ VARIANT_BOOL *has_video)
{
	if (has_video == NULL) {
		return Error(CComBSTR(L""), IID_INCFAacTag, E_INVALIDARG);
	}

	(m_bHasVideo == TRUE) ? *has_video = VARIANT_TRUE : *has_video = VARIANT_FALSE;
	return S_OK;
}

CComBSTR CNCFAacTag::GetStringAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);

	CComBSTR bstr;
	wchar_t *pwszBuffer = NULL;
	WMT_ATTR_DATATYPE wad = WMT_TYPE_STRING;
	WORD cbLength(0);
	WORD wStreamNum(0);
	hr = pIWMHeaderInfo->GetAttributeByName(&wStreamNum, name, &wad, NULL, &cbLength);
	if (cbLength != 0) {
		pwszBuffer = new wchar_t[cbLength];
		hr = pIWMHeaderInfo->GetAttributeByName(&wStreamNum, name, &wad, (BYTE *)pwszBuffer, &cbLength);
		bstr.Append(pwszBuffer);
		delete[] pwszBuffer;
	}

	return bstr;
}

DWORD CNCFAacTag::GetDWORDAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);

	DWORD dwValue(0);
	WORD  cbLength = sizeof(QWORD);
	WMT_ATTR_DATATYPE wad = WMT_TYPE_QWORD;
	QWORD time;
	WORD wStreamNum(0);
	hr = pIWMHeaderInfo->GetAttributeByName(&wStreamNum, name, &wad, (BYTE *)&time, &cbLength);

	return dwValue;
}

QWORD CNCFAacTag::GetQWORDAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);

	QWORD qwValue;
	WORD  cbLength = sizeof(QWORD);
	WMT_ATTR_DATATYPE wad = WMT_TYPE_QWORD;
	WORD wStreamNum(0);
	hr = pIWMHeaderInfo->GetAttributeByName(&wStreamNum, name, &wad, (BYTE *)&qwValue, &cbLength);

	return qwValue;
}

BOOL CNCFAacTag::GetBOOLAttribute(const wchar_t *name, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);

	BOOL bValue;
	WORD  cbLength = sizeof(BOOL);
	WMT_ATTR_DATATYPE wad = WMT_TYPE_BOOL;
	WORD wStreamNum(0);
	hr = pIWMHeaderInfo->GetAttributeByName(&wStreamNum, name, &wad, (BYTE *)&bValue, &cbLength);

	return bValue;
}

void CNCFAacTag::SetStringAttribute(const wchar_t *name, BSTR value, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);
	WMT_ATTR_DATATYPE wad = WMT_TYPE_STRING;
	hr = pIWMHeaderInfo->SetAttribute(0, name, wad, (BYTE *)value, SysStringLen(value) * 2 + 2);
}

void CNCFAacTag::SetDWORDAttribute(const wchar_t *name, DWORD value, IWMHeaderInfo3 *pIWMHeaderInfo)
{
	HRESULT hr(S_OK);
	WMT_ATTR_DATATYPE wad = WMT_TYPE_DWORD;
	hr = pIWMHeaderInfo->SetAttribute(0, name, wad, (BYTE *)&value, sizeof(DWORD));
}


STDMETHODIMP CNCFAacTag::Clear()
{
	m_bstrAlbumAuthor.Empty();
	m_bstrAlbumTitle.Empty();
	m_bstrAuthor.Empty();
	m_bstrRating.Empty();
	m_bstrCopyright.Empty();
	m_bstrCopyrightURL.Empty();
	m_bstrDescription.Empty();
	m_bstrGenre.Empty();
	m_bstrYear.Empty();
	m_bstrAlbumCoverURL.Empty();
	m_bstrPromotionURL.Empty();
	m_bstrLyrics.Empty();
	m_bstrTitle.Empty();
	m_bstrTrack.Empty();
	return S_OK;
}

//
// If information is retrieved from MP3 file than
// we must be able to remove the (xx) and replace it with
// the genre name.
void CNCFAacTag::UpdateGenre()
{
	HRESULT hr(S_OK);
	CComPtr<INCFString> pINCFString;
	hr = pINCFString.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.String"));
	if (pINCFString.p != NULL) {
		CComBSTR bstr;
		CComBSTR string1(L"(");
		CComBSTR string2(L")");
		hr = pINCFString->StringBetweenStrings(m_bstrGenre, string1, string2, &bstr);
		if (bstr.Length() > 0) {
			long lGenreID = _wtol(bstr);
			m_bstrGenre.Empty();
			CComPtr<INCFMp3Genre> pINCFMp3Genre;
			hr = pINCFMp3Genre.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.Mp3Genre"));
			if (pINCFMp3Genre.p != NULL) {
				hr = pINCFMp3Genre->GetGenreById(lGenreID, &m_bstrGenre);
			}// if
		}// if
	}// if
}// if