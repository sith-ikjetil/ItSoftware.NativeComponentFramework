// CNCFFileStream.cpp : Implementation of CNCFFileStream

#include "stdafx.h"
#include "CNCFFileStream.h"


// CNCFFileStream

STDMETHODIMP CNCFFileStream::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFFileStream
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFFileStream::WriteFrom(/*[in]*/ BYTE* pData, /*[in]*/ long length)
{
	if (pData == nullptr) {
		return Error(L"Argument 'pData' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	this->m_pfStream->write(reinterpret_cast<char*>(pData), length);
	if (this->m_pfStream->fail()) {	
		return Error(L"Error writing internal stream!", IID_INCFFileStream, E_FAIL);
	}

	return S_OK;
}

STDMETHODIMP CNCFFileStream::WriteFromStream(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length)
{
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}
	
	BYTE* pData = new (std::nothrow) BYTE[length];

	if (pData == nullptr) {
		return Error("Could not allocate memory!", IID_INCFFileStream, E_OUTOFMEMORY);
	}

	HRESULT hr = pINCFStream->ReadTo(pData, length);
	if (FAILED(hr)) {
		delete [] pData;
		return Error(L"Could not read from INCFStream!", IID_INCFFileStream, hr);
	}

	this->m_pfStream->write((char*)pData, length);
	if (this->m_pfStream->fail()) {
		delete[] pData;
		return Error(L"Error writing internal stream!", IID_INCFFileStream, E_FAIL);
	}

	delete [] pData;

	return S_OK;
}

STDMETHODIMP CNCFFileStream::ReadTo(/*[in]*/ BYTE* pData, /*[in]*/ long length)
{
	if (pData == nullptr) {
		return Error(L"Argument 'pData' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}		

	this->m_pfStream->read((char*)pData, length);	
	if (this->m_pfStream->fail()) {
		return Error(L"Error reading internal stream!", IID_INCFFileStream, E_FAIL);
	}

	return S_OK;	
}

STDMETHODIMP CNCFFileStream::ReadToStream(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length)
{
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	BYTE* pData = new (std::nothrow) BYTE[length];
	if (pData == nullptr) {
		return Error(L"Could not allocate memory.", IID_INCFFileStream, E_OUTOFMEMORY);
	}

	this->m_pfStream->read((char*)pData, length);
	if (this->m_pfStream->fail()) {
		delete [] pData;
		return Error(L"Error reading internal stream!", IID_INCFFileStream, E_FAIL);
	}

	HRESULT hr = pINCFStream->WriteFrom(pData, length);
	if (FAILED(hr)) {
		delete[] pData;
		return hr;
	}

	delete [] pData;

	return S_OK;
}

STDMETHODIMP CNCFFileStream::put_CurrentReadPosition(/*[in]*/ long position)
{
	if (!this->IsValidReadWritePosition(position)) {
		return Error(L"Argument 'position' is invalid.", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	this->m_pfStream->seekg(position);

	return S_OK;
}

STDMETHODIMP CNCFFileStream::get_CurrentReadPosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	*position = (long)this->m_pfStream->tellg();

	return S_OK;
}

STDMETHODIMP CNCFFileStream::put_CurrentWritePosition(/*[in]*/ long position)
{
	if (!this->IsValidReadWritePosition(position)) {
		return Error(L"Argument 'position' is invalid.", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	this->m_pfStream->seekp(position);

	return S_OK;
}

STDMETHODIMP CNCFFileStream::get_CurrentWritePosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	*position = (long)this->m_pfStream->tellp();

	return S_OK;
}

STDMETHODIMP CNCFFileStream::Close()
{
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	this->m_pfStream->flush();
	this->m_pfStream->close();
	delete this->m_pfStream;
	this->m_pfStream = nullptr;

	return S_OK;
}

STDMETHODIMP CNCFFileStream::get_Length(/*[out, retval]*/ long* length)
{
	if (length == nullptr) {
		return Error(L"Argument 'length' is NULL!", IID_INCFFileStream, E_INVALIDARG);
	}
	if (this->m_pfStream == nullptr) {
		return Error(L"Invalid FileStream object!", IID_INCFFileStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFFileStream, E_FAIL);
	}

	if (!this->m_pfStream->good()) {
		this->m_pfStream->clear();
	}

	long currentPosition = this->m_pfStream->tellg();

	this->m_pfStream->seekg(0, ios::end);
	*length = (long)this->m_pfStream->tellg();

	this->m_pfStream->seekg(currentPosition);

	return S_OK;
}