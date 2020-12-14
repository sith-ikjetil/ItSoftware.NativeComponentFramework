// CNCFNetworkShare.cpp : Implementation of CNCFNetworkShare

#include "stdafx.h"
#include "CNCFNetworkShare.h"


// CNCFNetworkShare

STDMETHODIMP CNCFNetworkShare::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFNetworkShare
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFNetworkShare::put_NetName( /*[in]*/ BSTR netName )
{
	this->Lock();
	this->m_bstrNetName = CComBSTR( netName ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_NetName( /*[out, retval]*/ BSTR* netName )
{
	this->Lock();
	*netName = this->m_bstrNetName.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_Type( /*[in]*/ DWORD type )
{
	this->Lock();
	this->m_dwType = type;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_Type( /*[out, retval]*/ DWORD* type )
{
	this->Lock();
	*type = this->m_dwType;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_Remark( /*[in]*/ BSTR remark )
{
	this->Lock();
	this->m_bstrRemark = CComBSTR( remark ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_Remark( /*[out, retval]*/ BSTR* remark )
{
	this->Lock();
	*remark = this->m_bstrRemark.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_Permissions( /*[in]*/ DWORD permissions )
{
	this->Lock();
	this->m_dwPermissions = permissions;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_Permissions( /*[out, retval]*/ DWORD* permissions )
{
	this->Lock();
	*permissions = this->m_dwPermissions;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_MaxUses( /*[in]*/ DWORD maxUses )
{
	this->Lock();
	this->m_dwMaxUses = maxUses;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_MaxUses( /*[out, retval]*/ DWORD* maxUses )
{
	this->Lock();
	*maxUses = this->m_dwMaxUses;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_CurrentUses( /*[in]*/ DWORD currentUses )
{
	this->Lock();
	this->m_dwCurrentUses = currentUses;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_CurrentUses( /*[out, retval]*/ DWORD* currentUses )
{
	this->Lock();
	*currentUses = this->m_dwCurrentUses;
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_Path( /*[in]*/ BSTR path )
{
	this->Lock();
	this->m_bstrPath = CComBSTR( path ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_Path( /*[out, retval]*/ BSTR* path )
{
	this->Lock();
	*path = this->m_bstrPath.Copy();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::put_Password( /*[in]*/ BSTR password )
{
	this->Lock();
	this->m_bstrPassword = CComBSTR( password ).Detach();
	this->Unlock();
	return S_OK;
}

STDMETHODIMP CNCFNetworkShare::get_Password( /*[out, retval]*/ BSTR* password )
{
	this->Lock();
	*password = this->m_bstrPassword.Copy();
	this->Unlock();
	return S_OK;
}