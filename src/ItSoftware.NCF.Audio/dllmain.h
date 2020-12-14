// dllmain.h : Declaration of module class.

class CItSoftwareNCFAudioModule : public ATL::CAtlDllModuleT< CItSoftwareNCFAudioModule >
{
public :
	DECLARE_LIBID(LIBID_ItSoftwareNCFAudioLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ITSOFTWARENCFAUDIO, "{ACD698BA-C321-48C4-AF61-25DC9D4E7619}")
};

extern class CItSoftwareNCFAudioModule _AtlModule;
