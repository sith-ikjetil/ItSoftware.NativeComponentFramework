// CNCFMemoryStream.cpp : Implementation of CNCFMemoryStream

#include "stdafx.h"
#include "CNCFMemoryStream.h"
#include <streambuf>
using namespace std;

// CNCFMemoryStream

STDMETHODIMP CNCFMemoryStream::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFMemoryStream
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFMemoryStream::WriteFrom(/*[in]*/ BYTE* pData, /*[in]*/ long length)
{
	if (pData == nullptr) {
		return Error(L"Argument 'pData' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFMemoryStream, E_INVALIDARG);
	}	
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}

	if (!this->WriteToStream(pData, length)) {
		return Error(L"Error writing internal stream!", IID_INCFMemoryStream, E_FAIL);
	}	

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::WriteFromStream(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length)
{
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (length <= 0) {
		return Error(L"Argument 'length' is invalid!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (this->IsClosed()) {
		return Error(L"FileStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}	

	BYTE* pData = new (std::nothrow) BYTE[length];
	if (pData == nullptr) {
		return Error("Could not allocate memory!", IID_INCFMemoryStream, E_OUTOFMEMORY);
	}

	HRESULT hr = pINCFStream->ReadTo(pData, length);
	if (FAILED(hr)) {
		delete[] pData;
		return Error(L"Could not read from INCFStream!", IID_INCFMemoryStream, hr);
	}

	if (!this->WriteToStream(pData, length)) {
		delete[] pData;
		return Error(L"Error writing internal stream!", IID_INCFMemoryStream, E_FAIL);
	}
	
	delete[] pData;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::ReadTo(/*[in]*/ BYTE* pData, /*[in]*/ long length)
{
	if (pData == nullptr) {
		return Error(L"Argument 'pData' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (length <= 0 || (length + this->m_lReadPosition > this->GetMemoryStreamLength())) {
		return Error(L"Argument 'length' is invalid!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (this->IsClosed()) {
		return Error(L"MemoryStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}
	
	if (!this->ReadFromStream(pData, length)) {
		return Error(L"Error reading internal stream!", IID_INCFMemoryStream, E_FAIL);
	}

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::ReadToStream(/*[in]*/ INCFStream* pINCFStream, /*[in]*/ long length)
{
	if (pINCFStream == nullptr) {
		return Error(L"Argument 'pINCFStream' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	if (length <= 0 || (length + this->m_lReadPosition > this->GetMemoryStreamLength()) ) {
		return Error(L"Argument 'length' is invalid!", IID_INCFMemoryStream, E_INVALIDARG);
	}	
	if (this->IsClosed()) {
		return Error(L"MemoryStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}
	
	BYTE* pData = new (std::nothrow) BYTE[length];
	if (pData == nullptr) {
		return Error(L"Could not allocate memory.", IID_INCFMemoryStream, E_OUTOFMEMORY);
	}

	if (!this->ReadFromStream(pData, length)) {
		delete[] pData;
		return Error(L"Error reading internal stream!", IID_INCFMemoryStream, E_FAIL);
	}
	
	HRESULT hr = pINCFStream->WriteFrom(pData, length);
	if (FAILED(hr)) {
		delete[] pData;
		return hr;
	}

	delete[] pData;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::put_CurrentReadPosition(/*[in]*/ long position)
{
	if (position < 0 || position > this->GetMemoryStreamLength()) {
		return Error(L"Argument 'position' invalid!", IID_INCFMemoryStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"MemoryStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}

	this->m_lReadPosition = position;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::get_CurrentReadPosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}

	*position = this->m_lReadPosition;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::put_CurrentWritePosition(/*[in]*/ long position)
{
	if (position < 0 || position > this->GetMemoryStreamLength() ) {
		return Error(L"Argument 'position' invalid!", IID_INCFMemoryStream, E_FAIL);
	}
	if (this->IsClosed()) {
		return Error(L"MemoryStream is closed!", IID_INCFMemoryStream, E_FAIL);
	}

	this->m_lWritePosition = position;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::get_CurrentWritePosition(/*[out, retval]*/ long* position)
{
	if (position == nullptr) {
		return Error(L"Argument 'position' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}

	*position = this->m_lWritePosition;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::Close()
{
	this->m_bClosed = true;

	return S_OK;
}

STDMETHODIMP CNCFMemoryStream::get_Length(/*[out, retval]*/ long* length)
{
	if (length == nullptr) {
		return Error(L"Argument 'length' is NULL!", IID_INCFMemoryStream, E_INVALIDARG);
	}
	
	*length = this->m_lWrittenLength;

	return S_OK;
}

bool CNCFMemoryStream::WriteToStream(BYTE* pData, long length)
{
	if (!EnsureStreamLength(this->m_lWritePosition + length)) {
		return false;
	}

	long position = 0;
	long currentLength = 0;
	long bytesWritten = 0;
	for (auto itr = m_memStream.begin(); itr < m_memStream.end(); itr++) {
		if (position + (*itr)->lBufferLength >= this->m_lWritePosition)
		{
			long index = this->m_lWritePosition - position;
			if ((*itr)->lBufferLength - index >= length) {
				currentLength = length;
			}
			else {
				currentLength = (*itr)->lBufferLength - index;
			}
			memcpy(&(*itr)->pBuffer[index], &pData[bytesWritten], currentLength);

			if (position + index + currentLength > this->m_lWrittenLength) {
				this->m_lWrittenLength = position + index + currentLength; // We are updating the length of written bytes.
			}

			bytesWritten += currentLength;
			this->m_lWritePosition += currentLength;
			if (currentLength == length) {
				return true;
			}
			else {
				length -= currentLength;
			}
		}
		position += (*itr)->lBufferLength;
	}

	return false;
}
bool CNCFMemoryStream::ReadFromStream(BYTE *pData, long length)
{
	if (this->m_lReadPosition + length > this->m_lWrittenLength)
	{
		return false;
	}

	long position = 0;
	long currentLength = 0;
	long bytesRead = 0;
	for (auto itr = m_memStream.begin(); itr < m_memStream.end(); itr++) {
		if (position + (*itr)->lBufferLength >= this->m_lReadPosition)
		{
			long index = this->m_lReadPosition - position;
			if ((*itr)->lBufferLength - index >= length) {
				currentLength = length;
			}
			else {
				currentLength = (*itr)->lBufferLength - index;
			}			

			memcpy(&pData[bytesRead], &(*itr)->pBuffer[index], currentLength);
			
			bytesRead += currentLength;
			this->m_lReadPosition += currentLength;
			if (currentLength == length) {
				return true;
			}
			else {
				length -= currentLength;
			}
		}
		position += (*itr)->lBufferLength;
	}

	return false;
}
long CNCFMemoryStream::GetMemoryStreamLength()
{
	long length(0);
	for (auto itr = m_memStream.begin(); itr < m_memStream.end(); itr++) {
		length += (*itr)->lBufferLength;
	}
	return length;
}
bool CNCFMemoryStream::EnsureStreamLength(long length)
{
	while (this->GetMemoryStreamLength() < length) {
		auto item = new MemStreamItem(this->m_memStream.size() + 1);
		if (item->lBufferLength != -1) {
			this->m_memStream.push_back(item);
		}
		else {
			return false;
		}
	}
	return true;
}
bool CNCFMemoryStream::IsClosed() {
	return this->m_bClosed;
}