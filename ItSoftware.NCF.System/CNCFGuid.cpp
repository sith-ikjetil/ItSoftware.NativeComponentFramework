// CNCFGuid.cpp : Implementation of CNCFGuid

#include "stdafx.h"
#include "CNCFGuid.h"
#include "ItSoftwareNCFSystem_i.h"

extern HINSTANCE g_hInstance;
// CNCFGuid

STDMETHODIMP CNCFGuid::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFGuid
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CNCFGuid::CreateGuidType( /*[in]*/ EGUIDTYPE type, /*[out, retval]*/ BSTR *pbstrGUID)
{
	if (static_cast<long>(type) > EGUID_PREFIXED_COMPACTFORMAT || static_cast<long>(type) < 0)
		return Error(CComBSTR("Invalid Argument."), IID_INCFGuid, E_INVALIDARG);

	GUID guidtemp = GUID_NULL;

	CoCreateGuid(&guidtemp);

	if (guidtemp == GUID_NULL)
		return Error(CComBSTR("Unexpected COM failure."), IID_INCFGuid, E_UNEXPECTED);

	wchar_t wcsBuf[256];
	wchar_t wcsBuf2[256];
	//::LoadString(_Module.GetResourceInstance(), IDS_GUIDFORMAT1+type, wcsBuf, 255);
	::LoadString(g_hInstance, IDS_GUIDFORMAT1 + type, wcsBuf, 255);
	wsprintf(wcsBuf2, wcsBuf,
		// first copy...
		guidtemp.Data1, guidtemp.Data2, guidtemp.Data3,
		guidtemp.Data4[0], guidtemp.Data4[1], guidtemp.Data4[2], guidtemp.Data4[3],
		guidtemp.Data4[4], guidtemp.Data4[5], guidtemp.Data4[6], guidtemp.Data4[7],
		// second copy...
		guidtemp.Data1, guidtemp.Data2, guidtemp.Data3,
		guidtemp.Data4[0], guidtemp.Data4[1], guidtemp.Data4[2], guidtemp.Data4[3],
		guidtemp.Data4[4], guidtemp.Data4[5], guidtemp.Data4[6], guidtemp.Data4[7]);

	CComBSTR bstr(wcsBuf2);
	*pbstrGUID = bstr.Detach();

	return S_OK;
}

STDMETHODIMP CNCFGuid::CreateGuid( /*[out, retval]*/ BSTR *pbstrGUID)
{
	return CreateGuidType(EGUIDTYPE::EGUID_REGISTRYFORMAT, pbstrGUID);
}