// CAudioCD.h : Declaration of the CCAudioCD

#pragma once
#include "resource.h"       // main symbols


#include "ItSoftwareNCFAudio_i.h"
#include "aspi32.h"
#include "scsidefs.h"
#include <vector>
using namespace std;

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


//
// defines
//
/*
* struct definitions for SPTI
*/
typedef struct {
	USHORT Length;
	UCHAR  ScsiStatus;
	UCHAR  PathId;
	UCHAR  TargetId;
	UCHAR  Lun;
	UCHAR  CdbLength;
	UCHAR  SenseInfoLength;
	UCHAR  DataIn;
	ULONG  DataTransferLength;
	ULONG  TimeOutValue;
	ULONG  DataBufferOffset;
	ULONG  SenseInfoOffset;
	UCHAR  Cdb[16];
} SCSI_PASS_THROUGH, *PSCSI_PASS_THROUGH;

typedef struct {
	USHORT Length;
	UCHAR  ScsiStatus;
	UCHAR  PathId;
	UCHAR  TargetId;
	UCHAR  Lun;
	UCHAR  CdbLength;
	UCHAR  SenseInfoLength;
	UCHAR  DataIn;
	ULONG  DataTransferLength;
	ULONG  TimeOutValue;
	PVOID  DataBuffer;
	ULONG  SenseInfoOffset;
	UCHAR  Cdb[16];
} SCSI_PASS_THROUGH_DIRECT, *PSCSI_PASS_THROUGH_DIRECT;

typedef struct {
	SCSI_PASS_THROUGH_DIRECT spt;
	ULONG Filler;
	UCHAR ucSenseBuf[32];
} SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER, *PSCSI_PASS_THROUGH_DIRECT_WITH_BUFFER;


/*
* method codes
*/
#define  METHOD_BUFFERED     0
#define  METHOD_IN_DIRECT    1
#define  METHOD_OUT_DIRECT   2
#define  METHOD_NEITHER      3



//#define IOCTL_CDROM_BASE   0x00000002
#ifndef IOCTL_SCSI_BASE
#define IOCTL_SCSI_BASE    0x00000004
#endif

/*
* constants for DataIn member of SCSI_PASS_THROUGH* structures
*/
#define  SCSI_IOCTL_DATA_OUT          0
#define  SCSI_IOCTL_DATA_IN           1
#define  SCSI_IOCTL_DATA_UNSPECIFIED  2

/*
* Standard IOCTL define
*/
#define CTL_CODE( DevType, Function, Method, Access ) (                 \
    ((DevType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)

//#define IOCTL_CDROM_READ_TOC          CTL_CODE(IOCTL_CDROM_BASE, 0x0000, METHOD_BUFFERED, FILE_READ_ACCESS )
//#define IOCTL_CDROM_GET_LAST_SESSION  CTL_CODE(IOCTL_CDROM_BASE, 0x000E, METHOD_BUFFERED, FILE_READ_ACCESS )

#define IOCTL_SCSI_PASS_THROUGH         CTL_CODE( IOCTL_SCSI_BASE, 0x0401, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS )
#define IOCTL_SCSI_MINIPORT             CTL_CODE( IOCTL_SCSI_BASE, 0x0402, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS )
#define IOCTL_SCSI_GET_INQUIRY_DATA     CTL_CODE( IOCTL_SCSI_BASE, 0x0403, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_GET_CAPABILITIES     CTL_CODE( IOCTL_SCSI_BASE, 0x0404, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_SCSI_PASS_THROUGH_DIRECT  CTL_CODE( IOCTL_SCSI_BASE, 0x0405, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS )
#define IOCTL_SCSI_GET_ADDRESS          CTL_CODE( IOCTL_SCSI_BASE, 0x0406, METHOD_BUFFERED, FILE_ANY_ACCESS )

typedef struct {
	BYTE ha;
	BYTE tgt;
	BYTE lun;
	char desc[32];
} ASPIDRV;

typedef struct {
	char driveLetter;
	char desc[32];
} NTDRV;

typedef union {
	ASPIDRV  a;
	NTDRV    n;
} DRIVESTRUCT;

#define MAX_DRIVE_LIST  8
typedef struct {
	DRIVESTRUCT drive[MAX_DRIVE_LIST];
	int num;
} DRIVELIST;


// CD Interfaces
#define CDINTERFACE_SPTI         0
#define CDINTERFACE_IOCTL_CDROM  1
#define CDNUM_INTERFACE          (CDINTERFACE_IOCTL_CDROM+1)

struct CDINTERFACE
{
	CComBSTR	m_bstrName;
	bool		m_bAvailable;

	CDINTERFACE()
	{
		m_bAvailable = false;
	}

};

static DWORD(*GetASPI32SupportInfo)(void);
static DWORD(*SendASPI32Command)(LPSRB);

#define OS_UNKNOWN  -1
#define OS_WIN95    0
#define OS_WIN98    1
#define OS_WINNT35  2
#define OS_WINNT4   3
#define OS_WIN2K    4

typedef struct
{
	BYTE	rsvd;
	BYTE	ADR;
	BYTE	trackNumber;
	BYTE	rsvd2;
	BYTE	addr[4];
} TOCTRACK;

typedef struct
{
	WORD      tocLen;
	BYTE      firstTrack;
	BYTE      lastTrack;
	TOCTRACK tracks[100];
} TOC, *PTOC, FAR *LPTOC;


// CCAudioCD

class ATL_NO_VTABLE CAudioCD :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAudioCD, &CLSID_NCFAudioCD>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFAudioCD, &IID_INCFAudioCD, &LIBID_ItSoftwareNCFAudioLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	bool m_bAsyncExtractionFinsihed;
	bool m_bAsyncExtractionSucceeded;
	CComBSTR m_bstrAsyncExtractionErrorMessage;
	long m_lAsyncProgressValue;


	DWORD	m_dwDiskData;
	TOC		m_TOC;
	bool	m_bLoaded;			// Is There Information Loaded?
	bool	m_bCddbLoaded;
	ULONG	 m_lTrackCount;		// Number Of Tracks
	ULONG	 m_lAudioTrackCount;// Number Of Tracks
	CComBSTR m_bstrDrive;		// Drive letter

	ULONG	 m_lTotalPlaytime;

	CComBSTR m_bstrCddbId;		// CDDBID	- string format (hex) 
	unsigned long m_lCddbId;	// CDDBID	- number format

	CComBSTR m_bstrCddbQuery;	// CDDB Query String

	ULONG m_lActiveInterface;	// Active Interface.

	CDINTERFACE m_Interfaces[CDNUM_INTERFACE];	// Interfaces	

	CComBSTR m_bstrArtist;
	CComBSTR m_bstrAlbumTitle;
	CComBSTR m_bstrGenre;
	CComBSTR m_bstrYear;

	vector<CComBSTR> m_vbstrTitles;

	bool ioctlCdromReadTOC();
	bool sptiReadTOC();
	bool ReadTOC();

	void GenerateCddbId();
	void GenerateCddbQuery();
	void CalculateTotalPlaytime();
	void ClearCddbData();
	long CalculateTrackPlaytime(long track_number);
	long CalculateAudioTrackCount();
	long ConvertTrackNumberToIndex(long track_number);
	bool IsTrackIndexLastToMultisession(long lTrackIndex);

	STDMETHOD(ExtractTrackWork)( /*[in]*/ long track_number, /*[in]*/ BSTR filename, /*[in]*/ VARIANT_BOOL vAsync);
	//STDMETHOD(ExtractTrackAndEncodeWork)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL vAsync);
	STDMETHOD(ExtractTrackRangeWork)( /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
	//STDMETHOD(ExtractTrackRangeAndEncodeWork)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
    STDMETHOD(ExecuteCddbQueryWork)( /*[in]*/ BSTR freedb_server, /*[in]*/ VARIANT_BOOL bAsync);
	//STDMETHOD(ExtractTrackRangeFromListWork)( /*[in]*/ IKKSList *pIKKSList, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
	//STDMETHOD(ExtractTrackRangeAndEncodeFromListWork)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ IKKSList *pIKKSList, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);

	ULONG CDDBSum(ULONG n);
	friend DWORD WINAPI ExtractTrackThread(PVOID pvParam);
	friend DWORD WINAPI ExtractTrackAndEncodeThread(PVOID pvParam);
	friend DWORD WINAPI ExtractTrackRangeThread(PVOID pvParam);
	friend DWORD WINAPI ExtractTrackRangeAndEncodeThread(PVOID pvParam);
	friend DWORD WINAPI ExecuteCddbQueryThread(PVOID pvParam);
	friend DWORD WINAPI ExtractTrackRangeFromListThread(PVOID pvParam);
	friend DWORD WINAPI ExtractTrackRangeAndEncodeFromListThread(PVOID pvParam);
public:
	CAudioCD()
	{
		m_lTotalPlaytime = 0;
		m_lTrackCount = 0;
		m_lAudioTrackCount = 0;
		m_bLoaded = false;

		m_Interfaces[CDINTERFACE_SPTI].m_bstrName.Append(L"SPTI");
		m_Interfaces[CDINTERFACE_IOCTL_CDROM].m_bstrName.Append(L"IOCTL_CDROM");

		// Check for spti and ioctl_cdrom
		
		//OSVERSIONINFOEX os = { 0 };					
		//os.dwOSVersionInfoSize = sizeof(os);		
		//VerifyVersionInfo(&os, VER_MINORVERSION | VER_MAJORVERSION, VER_NUM_BITS_PER_CONDITION_MASK);		
		//if (os.dwMajorVersion >= 5) {
			m_Interfaces[CDINTERFACE_SPTI].m_bAvailable = true;
			m_Interfaces[CDINTERFACE_IOCTL_CDROM].m_bAvailable = true;
		//}
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CAUDIOCD)

DECLARE_NOT_AGGREGATABLE(CAudioCD)

BEGIN_COM_MAP(CAudioCD)
	COM_INTERFACE_ENTRY(INCFAudioCD)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(Load)( /*[in]*/ BSTR drive);
	STDMETHOD(get_CddbId)( /*[out, retval]*/ BSTR *cddb_id);
	STDMETHOD(get_CddbQuery)( /*[out, retval]*/ BSTR *query_string);
	STDMETHOD(get_TrackCount)( /*[out, retval]*/ long *track_count);
	STDMETHOD(get_Loaded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_Drive)( /*[out, retval]*/ BSTR *drive);
	STDMETHOD(get_TotalPlaytime)( /*[out, retval]*/ long *seconds);
	STDMETHOD(GetPlaytime)( /*[in]*/ long track_number, /*[out, retval]*/ long *ms);
	STDMETHOD(ExtractTrack)( /*[in]*/ long track_number, /*[in]*/ BSTR filename, /*[in]*/ VARIANT_BOOL bAsync);
	STDMETHOD(ExecuteCddbQuery)( /*[in]*/ BSTR freedb_server, /*[in]*/ VARIANT_BOOL bAsync);
	STDMETHOD(get_Artist)( /*[out, retval]*/ BSTR *artist);
	STDMETHOD(get_AlbumTitle)( /*[out, retval]*/ BSTR *album_title);
	STDMETHOD(get_Genre)( /*[out, retval]*/ BSTR *genre);
	STDMETHOD(get_Year)( /*[out, retval]*/ BSTR *year);
	STDMETHOD(GetTitle)( /*[in]*/ long track_number, /*[out, retval]*/ BSTR *track_name);
	STDMETHOD(get_CddbLoaded)( /*[out, retval]*/ VARIANT_BOOL *status);
	//STDMETHOD(ExtractTrackAndEncode)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
	STDMETHOD(ExtractTrackRange)( /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
	//STDMETHOD(ExtractTrackRangeAndEncode)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);

	STDMETHOD(get_ExtractionFinished)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionSucceeded)( /*[out, retval]*/ VARIANT_BOOL *status);
	STDMETHOD(get_ExtractionErrorMessage)( /*[out, retval]*/ BSTR *error_message);
	STDMETHOD(GetExtractionProgressPercent)( /*[out, retval]*/ long *progress_value);

	//STDMETHOD(ExtractTrackRangeFromList)( /*[in]*/ IKKSList *pIKKSList, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);
	//STDMETHOD(ExtractTrackRangeAndEncodeFromList)( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ IKKSList *pIKKSList, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync);


};

OBJECT_ENTRY_AUTO(__uuidof(NCFAudioCD), CAudioCD)







