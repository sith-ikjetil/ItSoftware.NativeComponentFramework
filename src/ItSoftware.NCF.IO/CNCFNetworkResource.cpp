// CNCFNetworkResource.cpp : Implementation of CNCFNetworkResource

#include "stdafx.h"
#include "CNCFNetworkResource.h"


// CNCFNetworkResource

STDMETHODIMP CNCFNetworkResource::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFNetworkResource
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CNCFNetworkResource::put_Scope( /*[in]*/ long scope )
{
	this->Lock();
	this->m_dwScope = scope;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_Scope( /*[out, retval]*/ long* scope )
{
	this->Lock();
	*scope = this->m_dwScope;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_Type( /*[in]*/ long type )
{
	this->Lock();
	this->m_dwType = type;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_Type( /*[out, retval]*/ long* type )
{
	this->Lock();
	*type = this->m_dwType;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_DisplayType( /*[in]*/ long displayType )
{
	this->Lock();
	this->m_dwDisplayType = displayType;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_DisplayType( /*[out, retval]*/ long* displayType )
{
	this->Lock();
	*displayType = this->m_dwDisplayType;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_Usage( /*[in]*/ long usage )
{
	this->Lock();
	this->m_dwUsage = usage;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_Usage( /*[out, retval]*/ long* usage )
{
	this->Lock();
	*usage = this->m_dwUsage;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_LocalName( /*[in]*/ BSTR localName )
{
	this->Lock();
	this->m_bstrLocalName = CComBSTR( localName ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_LocalName( /*[out, retval]*/ BSTR* localName )
{
	this->Lock();
	*localName = this->m_bstrLocalName.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_RemoteName( /*[in]*/ BSTR remoteName )
{
	this->Lock();
	this->m_bstrRemoteName = CComBSTR( remoteName ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_RemoteName( /*[out, retval]*/ BSTR* remoteName )
{
	this->Lock();
	*remoteName = this->m_bstrRemoteName.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_Comment( /*[in]*/ BSTR comment )
{
	this->Lock();
	this->m_bstrComment = CComBSTR( comment ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_Comment( /*[out, retval]*/ BSTR* comment )
{
	this->Lock();
	*comment = this->m_bstrComment.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::put_Provider( /*[in]*/ BSTR provider )
{
	this->Lock();
	this->m_bstrProvider = CComBSTR( provider ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkResource::get_Provider( /*[out, retval]*/ BSTR* provider )
{
	this->Lock();
	*provider = this->m_bstrProvider.Copy();
	this->Unlock();
	return S_OK;
}