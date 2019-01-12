// dllmain.h : Declaration of module class.

class CItSoftwareNCFSystemModule : public ATL::CAtlDllModuleT< CItSoftwareNCFSystemModule >
{
public :
	DECLARE_LIBID(LIBID_ItSoftwareNCFSystemLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ITSOFTWARENCFSYSTEM, "{6618248B-8CA5-4671-95FF-6AA702E98917}")
};

extern class CItSoftwareNCFSystemModule _AtlModule;
