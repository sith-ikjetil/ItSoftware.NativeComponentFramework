// dllmain.h : Declaration of module class.

class CItSoftwareNCFIOModule : public ATL::CAtlDllModuleT< CItSoftwareNCFIOModule >
{
public :
	DECLARE_LIBID(LIBID_ItSoftwareNCFIOLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ITSOFTWARENCFIO, "{5B312BF1-41D6-4DCE-8C7A-F05616228781}")
};

extern class CItSoftwareNCFIOModule _AtlModule;
