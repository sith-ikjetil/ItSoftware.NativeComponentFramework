// CNCFStringStream.cpp : Implementation of CNCFStringStream

#include "stdafx.h"
#include "CNCFStringStream.h"


// CNCFStringStream

STDMETHODIMP CNCFStringStream::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFStringStream
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

// INCFStream
STDMETHODIMP CNCFStringStream::put_CurrentReadPosition(/*[in]*/ long position)
{	
	if (!this->IsValidReadWritePosition(position)) {
		return Error(L"Argument 'position' is invalid.", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}
	
	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	this->m_pfStream->seekg(position+((this->m_bHasByteOrderMark) ? 3 : 0));

	return S_OK;
}

STDMETHODIMP CNCFStringStream::get_CurrentReadPosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}	
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	*position = (((long)this->m_pfStream->tellg()) - ((this->m_bHasByteOrderMark) ? 3 : 0));
	
	return S_OK;
}

STDMETHODIMP CNCFStringStream::put_CurrentWritePosition(/*[in]*/ long position)
{
	if (!this->IsValidReadWritePosition(position)) {
		return Error(L"Argument 'position' is invalid.", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	this->m_pfStream->seekp(position + ((this->m_bHasByteOrderMark) ? 3 : 0));

	return S_OK;
}

STDMETHODIMP CNCFStringStream::get_CurrentWritePosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	*position = (((long)this->m_pfStream->tellp()) - ((this->m_bHasByteOrderMark) ? 3 : 0));

	return S_OK;
}

STDMETHODIMP CNCFStringStream::Close()
{
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	this->m_pfStream->flush();
	this->m_pfStream->close();
	delete this->m_pfStream;
	this->m_pfStream = nullptr;

	return S_OK;	
}

STDMETHODIMP CNCFStringStream::get_Length(/*[out, retval]*/ long* length)
{
	if (length == nullptr) {
		return Error(L"Argument 'length' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	long currentPosition = this->m_pfStream->tellg();
	
	this->m_pfStream->seekg(0,ios::end);
	*length = (((long)this->m_pfStream->tellg()) - ((this->m_bHasByteOrderMark) ? 3 : 0));

	this->m_pfStream->seekg(currentPosition);

	return S_OK;
}

// INCFStringStream
STDMETHODIMP CNCFStringStream::WriteLine(/*[in]*/ BSTR text)
{
	if (text == nullptr) {
		return Error(L"Argument 'text' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}	
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	*this->m_pfStream << CComBSTR(text).operator LPWSTR() << endl;
	this->m_pfStream->flush();

	return S_OK;
}

STDMETHODIMP CNCFStringStream::WriteString(/*[in]*/ BSTR text)
{
	if (text == nullptr) {
		return Error(L"Argument 'text' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	*this->m_pfStream << CComBSTR(text).operator LPWSTR();
	this->m_pfStream->flush();

	return S_OK;
}

STDMETHODIMP CNCFStringStream::ReadLine(/*[in]*/ BSTR* pText)
{
	if (pText == nullptr) {
		return Error(L"Argument 'pText' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	long bufferSize(0);
	this->get_Length(&bufferSize);

	long lReadPosition(0);
	this->get_CurrentReadPosition(&lReadPosition);

	if (bufferSize == lReadPosition) {
		*pText = nullptr;
		return S_FALSE;
	}

	wchar_t* pwszBuffer = new wchar_t[bufferSize];	
	this->m_pfStream->getline(pwszBuffer, bufferSize);

	*pText = CComBSTR(pwszBuffer).Detach();

	delete [] pwszBuffer;

	return S_OK;
}

STDMETHODIMP CNCFStringStream::ReadAllLines(/*[out, retval]*/ INCFCollectionList** ppINCFCollectionList)
{
	if (ppINCFCollectionList == nullptr) {
		return Error(L"Argument 'ppINCFCollectionList' is NULL!", IID_INCFStringStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFStringStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFStringStream, E_FAIL);
	}

	CComPtr<INCFCollectionList> pINCFCollectionList;
	HRESULT hr = pINCFCollectionList.CoCreateInstance(L"ItSoftware.NCF.CollectionList");
	if (FAILED(hr)) {
		return Error(L"Could not create 'ItSoftware.NCF.CollectionList'!", IID_INCFStringStream, hr);
	}
	
	this->put_CurrentReadPosition(0);

	CComBSTR bstrLine;
	do {
		if (this->ReadLine(&bstrLine) == S_FALSE) {
			break;
		}
		else {
			pINCFCollectionList->AddItemToBack(CComVariant(bstrLine));
		}
	} while (true);

	*ppINCFCollectionList = pINCFCollectionList.Detach();

	return S_OK;
}