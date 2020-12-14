// dllmain.h : Declaration of module class.

class CItSoftwareNCFCollectionModule : public ATL::CAtlDllModuleT< CItSoftwareNCFCollectionModule >
{
public :
	DECLARE_LIBID(LIBID_ItSoftwareNCFCollectionLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ITSOFTWARENCFCOLLECTION, "{85295224-4E1D-464A-8842-D152D8319BAC}")
};

extern class CItSoftwareNCFCollectionModule _AtlModule;
