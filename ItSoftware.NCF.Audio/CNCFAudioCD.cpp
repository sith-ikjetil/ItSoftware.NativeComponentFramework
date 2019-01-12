// CAudioCD.cpp : Implementation of CCAudioCD

#include "stdafx.h"
#include "CNCFAudioCD.h"
#include "../ItSoftware.NCF.System/ItSoftwareNCFSystem_i.h"
#include "../ItSoftware.NCF.Collection/ItSoftwareNCFCollection_i.h"
#include "ntddcdrm.h"
#include "msxml2.h"
#include <sstream>
#include "asferr.h"
#include "wmsdkidl.h"
#include "nserror.h"
#include "wmsysprf.h"
#include <dmo.h>
#include <uuids.h>


#define RAW_SECTOR_COUNT 10 //400
#define RAW_SECTOR_SIZE  2352
#define RAW_SECTOR_DATA_SIZE 2048
#define MULTISESSION_TIMEOUT 150

#pragma warning( disable : 4018 4244 4311 4312 )

struct ExtractTrack_Param
{
	VARIANT_BOOL bAsync;
	CAudioCD *pAudioCD;
	long track_number;
	BSTR filename;
};

//struct ExtractTrackAndEncode_Param
//{
//	CAudioCD *pAudioCD;
//	EWM_ENCODING_RATE encoding_rate;
//	long track_number;
//	IKKSWMHeaderInfo *pIKKSWMHeaderInfo;
//	BSTR out_filename;
//	VARIANT_BOOL bAsync;
//};

struct ExtractTrackRange_Param
{
	CAudioCD *pAudioCD;
	long track_number_start;
	long track_number_stop;
	BSTR out_filename;
	VARIANT_BOOL bAsync;
};


//struct ExtractTrackRangeAndEncode_Param
//{
//	CAudioCD *pAudioCD;
//	EWM_ENCODING_RATE encoding_rate;
//	long track_number_start;
//	long track_number_stop;
//	IKKSWMHeaderInfo *pIKKSWMHeaderInfo;
//	BSTR out_filename;
//	VARIANT_BOOL bAsync;
//};

struct ExecuteCddbQuery_Param
{
	CAudioCD *pAudioCD;
	BSTR freedb_server;
	VARIANT_BOOL bAsync;
};

//struct ExtractTrackRangeAndEncodeFromList_Param
//{
//	CAudioCD *pAudioCD;
//	EWM_ENCODING_RATE encoding_rate;
//	IKKSList *pIKKSList;
//	IKKSWMHeaderInfo *pIKKSWMHeaderInfo;
//	BSTR out_filename;
//	VARIANT_BOOL bAsync;
//};

//struct ExtractTrackRangeFromList_Param
//{
//	CAudioCD *pAudioCD;
//	IKKSList *pIKKSList;
//	BSTR out_filename;
//	VARIANT_BOOL bAsync;
//};

//
// CAudioCD
//
struct wave_header {
	char	File_ID[4];     /* 'RIFF' */
	DWORD	FileSize;       /* Filesize - 8. 8=("RIFF"+"fmt ") */
	char	WAVEfmt[8];		/* 'WAVEfmt ' */
	DWORD	fmt_Len;        /* 0x10 */
	WORD	WaveType;       /* type wave format. PCM-header eller 0x01 */
	WORD	Kanaler;        /* channels. 1-mono, 2-stereo */
	DWORD	SampleRate;     /* samples pr second */
	DWORD	ByteRate;       /* bytes pr. second */
	WORD	BytesPrSample;  /* bytes pr. sample */
	WORD	BitsPrKanal;    /* bits pr. channel */
	char	data_TXT[4];    /* text: 'data' */
	DWORD	dataSize;		/* sound data size */
};

void InitWaveHeader(wave_header *pWH);
void InitWaveHeader(wave_header *pWH, DWORD data_size)
{
	pWH->File_ID[0] = 'R';     /* 'RIFF' */
	pWH->File_ID[1] = 'I';     /* 'RIFF' */
	pWH->File_ID[2] = 'F';     /* 'RIFF' */
	pWH->File_ID[3] = 'F';     /* 'RIFF' */

	pWH->FileSize = data_size + sizeof(wave_header) - 8;       /* Filesize - 8. 8=("RIFF"+"fmt ") */

	pWH->WAVEfmt[0] = 'W';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[1] = 'A';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[2] = 'V';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[3] = 'E';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[4] = 'f';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[5] = 'm';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[6] = 't';		/* 'WAVEfmt ' */
	pWH->WAVEfmt[7] = ' ';		/* 'WAVEfmt ' */

	pWH->fmt_Len = 0x10;        /* 0x10 */

	pWH->WaveType = 0x01;       /* type wave format. PCM-header eller 0x01 */
	pWH->Kanaler = 2;        /* channels. 1-mono, 2-stereo */
	pWH->SampleRate = 44100;     /* samples pr second */
	pWH->ByteRate = 176400;       /* bytes pr. second */
	pWH->BytesPrSample = 4;  /* bytes pr. sample */
	pWH->BitsPrKanal = 16;    /* bits pr. channel */
	pWH->data_TXT[0] = 'd';    /* text: 'data' */
	pWH->data_TXT[1] = 'a';    /* text: 'data' */
	pWH->data_TXT[2] = 't';    /* text: 'data' */
	pWH->data_TXT[3] = 'a';    /* text: 'data' */
	pWH->dataSize = data_size;		/* sound data size */
}

//
// Thread Functions
//
DWORD WINAPI ExtractTrackThread(PVOID pvParam);
//DWORD WINAPI ExtractTrackAndEncodeThread(PVOID pvParam);
DWORD WINAPI ExtractTrackRangeThread(PVOID pvParam);
//DWORD WINAPI ExtractTrackRangeAndEncodeThread(PVOID pvParam);
//DWORD WINAPI ExecuteCddbQueryThread(PVOID pvParam);
//DWORD WINAPI ExtractTrackRangeFromListThread(PVOID pvParam);
//DWORD WINAPI ExtractTrackRangeAndEncodeFromListThread(PVOID pvParam);


// CCAudioCD

STDMETHODIMP CAudioCD::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_INCFAudioCD
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

//
// IKKSAudioCD
//
STDMETHODIMP CAudioCD::Load( /*[in]*/ BSTR drive)
{
	if (drive == nullptr || SysStringLen(drive) == 0 || SysStringLen(drive) > 3) {
		return Error(CComBSTR(L"Argument drive invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	m_bstrDrive.Empty();
	m_bstrDrive.Append((wchar_t)drive[0]);
	m_bLoaded = false;
	ClearCddbData();

	UINT uiDriveType = GetDriveType(drive);
	if (uiDriveType != DRIVE_CDROM) {
		return Error(CComBSTR(L"Load Failed. Drive Is Not A CD-ROM"), IID_INCFAudioCD, E_INVALIDARG);
	}

	CComBSTR bstrDrive(L"\\\\.\\");
	bstrDrive.Append(m_bstrDrive);
	bstrDrive.Append(L":");
	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hCD == INVALID_HANDLE_VALUE) {
		return Error(CComBSTR(L"Load Failed. Invalid Arguments."), IID_INCFAudioCD, E_INVALIDARG);
	}

	// Find out if we have a multisession disk
	CDROM_DISK_DATA cdd = { 0 };
	DWORD dwOutBufferSize(0);
	BOOL bResult = DeviceIoControl(hCD, IOCTL_CDROM_DISK_TYPE, NULL, 0, &cdd, sizeof(CDROM_DISK_DATA), &dwOutBufferSize, NULL);
	if (bResult == TRUE) {
		if (cdd.DiskData == CDROM_DISK_AUDIO_TRACK || (cdd.DiskData == (CDROM_DISK_AUDIO_TRACK | CDROM_DISK_DATA_TRACK))) {
			m_dwDiskData = cdd.DiskData;
		}
		else{
			return Error(CComBSTR(L"Load Failed. Unknown CD Format."), IID_INCFAudioCD, E_FAIL);
			CloseHandle(hCD);
		}
	}
	else {
		return Error(CComBSTR(L"Load Failed. No CD In Drive."), IID_INCFAudioCD, E_FAIL);
		CloseHandle(hCD);
	}
	CloseHandle(hCD);

	for (int i = 0; i < CDNUM_INTERFACE; i++)
	{
		m_lActiveInterface = i;
		if (m_Interfaces[i].m_bAvailable == false) {
			continue;
		}

		if (ReadTOC()) {
			if (!m_TOC.firstTrack && !m_TOC.lastTrack) {
				return Error(CComBSTR(L"Load Failed. No CD In Drive."), IID_INCFAudioCD, E_FAIL);
			}
			else {
				m_lTrackCount = (int)(m_TOC.lastTrack - m_TOC.firstTrack + 1);
				m_lAudioTrackCount = CalculateAudioTrackCount();
				if (m_lTrackCount > 0)	{
					GenerateCddbId();	// Must be done before CddbQuery
					GenerateCddbQuery();
					CalculateTotalPlaytime();
					m_bLoaded = true;
				}
				break;
			}
		}// if 
	}// for	  

	return S_OK;
}

long CAudioCD::CalculateAudioTrackCount()
{
	long lCount(0);
	for (ULONG l = 0; l < m_lTrackCount; l++) {
		if (m_TOC.tracks[l].ADR == 16 || m_TOC.tracks[l].ADR == 17 || m_TOC.tracks[l].ADR == 18) {//if ( m_TOC.tracks[l].ADR == 16 || m_TOC.tracks[l].ADR == 17 || m_TOC.tracks[l].ADR == 18 ) {
			lCount++;
		}
	}
	return lCount;
}

void CAudioCD::CalculateTotalPlaytime()
{
	m_lTotalPlaytime = 0;
	//for ( long l = 1; l <= m_lTrackCount; l++ ) {
	//	//m_lTotalPlaytime += CalculateTrackPlaytime(l);
	long ms = ((m_TOC.tracks[m_lTrackCount].addr[1] * 60) + m_TOC.tracks[m_lTrackCount].addr[2])
		- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);

	if (m_TOC.tracks[m_lTrackCount].ADR == 20) {
		ms -= MULTISESSION_TIMEOUT;
	}

	ms *= 1000;		// Convert To ms

	// ms difference
	double dFrameTime = m_TOC.tracks[m_lTrackCount].addr[3] - m_TOC.tracks[0].addr[3];
	dFrameTime *= 1000;
	dFrameTime /= 75;//(1000/75);	

	ms += dFrameTime;
	//	if ( dFrameTime < 0 ) {
	//		sec--;
	//	}

	m_lTotalPlaytime = ms;
	//}	
}
long CAudioCD::CalculateTrackPlaytime(long track_number)
{
	long lTrackIndex = ConvertTrackNumberToIndex(track_number);
	if (lTrackIndex != -1) {
		long ms = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
			- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);

		if (m_TOC.tracks[lTrackIndex + 1].ADR == 20) {
			ms -= MULTISESSION_TIMEOUT;
		}

		ms *= 1000;

		// ms difference
		double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];
		dFrameTime *= 1000;
		dFrameTime /= 75;

		// Total ms
		ms += dFrameTime;

		//		if ( dFrameTime < 0 ) {
		//			sec--;
		//		}

		return ms;
	}

	return 0;
}

void CAudioCD::GenerateCddbId()
{
	long lTrackCount = (long)(m_TOC.lastTrack - m_TOC.firstTrack + 1);

	ULONG n(0);
	for (long i = 0; i < lTrackCount; i++) {
		n += CDDBSum((((ULONG)m_TOC.tracks[i].addr[1]) * 60) + ((ULONG)m_TOC.tracks[i].addr[2]));
	}

	ULONG t(0);
	t = ((m_TOC.tracks[lTrackCount].addr[1] * 60) + m_TOC.tracks[lTrackCount].addr[2]) -
		((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);

	m_lCddbId = ((n % 0xFF) << 24 | t << 8 | lTrackCount);

	wchar_t wcsBuffer[20];
	_ultow_s(m_lCddbId, wcsBuffer, 20, 16);
	m_bstrCddbId.Empty();
	ULONG l = (ULONG)wcslen(wcsBuffer);
	while (l++ < 8) {
		m_bstrCddbId.Append(L"0");
	}
	m_bstrCddbId.Append(wcsBuffer);
	m_bstrCddbId.ToLower();
}

ULONG CAudioCD::CDDBSum(ULONG n)
{
	unsigned long retVal = 0;

	while (n > 0)
	{
		retVal += (n % 10);
		n /= 10;
	}

	return retVal;
}


void CAudioCD::GenerateCddbQuery()
{
	long lTrackCount = (long)(m_TOC.lastTrack - m_TOC.firstTrack + 1);

	wchar_t wcsBuffer[20];
	m_bstrCddbQuery.Empty();
	m_bstrCddbQuery.Append(m_bstrCddbId);
	m_bstrCddbQuery.Append(L" ");

	_ultow_s(lTrackCount, wcsBuffer, 20, 10);
	m_bstrCddbQuery.Append(wcsBuffer);

	TOCTRACK *t1;
	DWORD ofs;

	// track offsets (not including lead-out)
	for (long i = 0; i < lTrackCount; i++)
	{
		t1 = &(m_TOC.tracks[i]);
		ofs = (((t1->addr[1] * 60) + t1->addr[2]) * 75) + t1->addr[3];

		m_bstrCddbQuery.Append(L" ");
		_ultow_s((ULONG)ofs, wcsBuffer, 20, 10);
		m_bstrCddbQuery.Append(wcsBuffer);
	}

	// disc length
	t1 = &m_TOC.tracks[lTrackCount];//i];
	ofs = t1->addr[1] * 60 + t1->addr[2];

	m_bstrCddbQuery.Append(L" ");
	_ultow_s((ULONG)ofs, wcsBuffer, 20, 10);
	m_bstrCddbQuery.Append(wcsBuffer);

}// GenerateCddbQuery( )


bool CAudioCD::ReadTOC()
{
	ZeroMemory(&m_TOC, sizeof(TOC));

	switch (m_lActiveInterface)
	{
	case CDINTERFACE_SPTI:
		return sptiReadTOC();
	case CDINTERFACE_IOCTL_CDROM:
		return ioctlCdromReadTOC();
	}// switch  

	return false;
}


bool CAudioCD::sptiReadTOC()
{
	CComBSTR bstr(L"\\\\.\\");
	bstr.AppendBSTR(m_bstrDrive);
	bstr.Append(L":");

	HANDLE hDrive = CreateFile(bstr, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (hDrive == INVALID_HANDLE_VALUE) {
		return false;
	}

	SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER swb;
	ZeroMemory(&swb, sizeof(swb));

	ZeroMemory(&m_TOC, sizeof(TOC));

	swb.spt.Length = sizeof(SCSI_PASS_THROUGH);
	swb.spt.CdbLength = 10;
	swb.spt.DataIn = SCSI_IOCTL_DATA_IN;
	swb.spt.DataTransferLength = sizeof(TOC);
	swb.spt.TimeOutValue = 5;
	swb.spt.DataBuffer = &m_TOC;
	swb.spt.SenseInfoOffset = offsetof(SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER, ucSenseBuf);
	swb.spt.Cdb[0] = 0x43; // read TOC
	swb.spt.Cdb[1] = 0x02; // MSF mode
	swb.spt.Cdb[7] = 0x03;
	swb.spt.Cdb[8] = 0x24;
	DWORD dwReturned(0);
	if (!DeviceIoControl(hDrive, IOCTL_SCSI_PASS_THROUGH_DIRECT, &swb, sizeof(SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER), &swb, sizeof(SCSI_PASS_THROUGH_DIRECT_WITH_BUFFER), &dwReturned, NULL)) {
		CloseHandle(hDrive);
		return false;
	}

	CloseHandle(hDrive);
	return true;
}


bool CAudioCD::ioctlCdromReadTOC()
{
	CComBSTR bstr(L"\\\\.\\");
	bstr.Append(m_bstrDrive);
	bstr.Append(L":");

	HANDLE hDrive = CreateFile(bstr, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (hDrive == INVALID_HANDLE_VALUE) {
		return false;
	}

	ZeroMemory(&m_TOC, sizeof(TOC));
	DWORD dwReturned(0);
	if (!DeviceIoControl(hDrive, IOCTL_CDROM_READ_TOC, NULL, 0, &m_TOC, sizeof(m_TOC), &dwReturned, NULL)) {
		CloseHandle(hDrive);
		return false;
	}

	CloseHandle(hDrive);
	return true;
}//


STDMETHODIMP CAudioCD::get_CddbId( /*[out, retval]*/ BSTR *cddb_id)
{
	if (cddb_id == NULL) {
		return Error(CComBSTR(L"Argument cddb_Id invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	CComBSTR bstr(m_bstrCddbId);
	*cddb_id = bstr.Detach();
	return S_OK;
}

STDMETHODIMP CAudioCD::get_CddbQuery( /*[out, retval]*/ BSTR *query_string)
{
	if (query_string == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	CComBSTR bstr(m_bstrCddbQuery);
	*query_string = bstr.Detach();

	return S_OK;
}

STDMETHODIMP CAudioCD::get_TrackCount( /*[out, retval]*/ long *track_count)
{
	if (track_count == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	*track_count = m_lAudioTrackCount;
	return S_OK;
}

STDMETHODIMP CAudioCD::get_Loaded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	(m_bLoaded == true) ? *status = VARIANT_TRUE : *status = VARIANT_FALSE;

	return S_OK;
}

STDMETHODIMP CAudioCD::get_Drive( /*[out, retval]*/ BSTR *drive)
{
	if (drive == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	CComBSTR bstr(m_bstrDrive);
	bstr.ToUpper();
	*drive = bstr.Detach();

	return S_OK;
}


STDMETHODIMP CAudioCD::get_TotalPlaytime( /*[out, retval]*/ long *seconds)
{
	if (seconds == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	*seconds = m_lTotalPlaytime;
	return S_OK;
}

STDMETHODIMP CAudioCD::GetPlaytime( /*[in]*/ long track_number, /*[out, retval]*/ long *ms)
{
	if (track_number <= 0 || track_number > (long)m_lAudioTrackCount || ms == NULL) {
		return Error(CComBSTR(L""), IID_INCFAudioCD, E_INVALIDARG);
	}

	long lTrackIndex = ConvertTrackNumberToIndex(track_number);
	long msec = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
		- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);

	if (IsTrackIndexLastToMultisession(lTrackIndex)) {
		msec -= MULTISESSION_TIMEOUT;
	}

	msec *= 1000;

	double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];
	dFrameTime *= (1000 / 75);	// ms difference

	msec += dFrameTime;

	*ms = msec;//CalculateTrackPlaytime( track_number );

	return S_OK;
}

bool CAudioCD::IsTrackIndexLastToMultisession(long lTrackIndex)
{
	if (m_dwDiskData == (CDROM_DISK_AUDIO_TRACK | CDROM_DISK_DATA_TRACK)) {
		if (m_lTrackCount > (lTrackIndex + 1)) {
			if (m_TOC.tracks[lTrackIndex + 1].ADR == 20) {
				return true;
			}
		}
	}
	return false;
}

long CAudioCD::ConvertTrackNumberToIndex(long track_number)
{
	long lTrack(0);
	for (long l = 0; l < m_lTrackCount; l++) {
		if (m_TOC.tracks[l].ADR == 16 || m_TOC.tracks[l].ADR == 17 || m_TOC.tracks[l].ADR == 18) {
			lTrack++;
		}
		if (lTrack == track_number) {
			return l;
		}
	}

	return -1;
}


STDMETHODIMP CAudioCD::ExtractTrack( /*[in]*/ long track_number, /*[in]*/ BSTR filename, /*[in]*/ VARIANT_BOOL bAsync)
{
	if (!this->m_bLoaded) {	
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	this->m_bAsyncExtractionFinsihed = false;
	this->m_bAsyncExtractionSucceeded = false;
	this->m_bstrAsyncExtractionErrorMessage.Empty();
	this->m_lAsyncProgressValue = 0;

	if (bAsync == VARIANT_FALSE) {
		return ExtractTrackWork(track_number, filename, bAsync);
	}

	DWORD dwExtractTrackThreadID(0);
	ExtractTrack_Param *pparam = new ExtractTrack_Param();
	pparam->pAudioCD = this;
	pparam->filename = CComBSTR(filename).Detach();
	pparam->track_number = track_number;
	pparam->bAsync = bAsync;

	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

DWORD WINAPI ExtractTrackThread(PVOID pvParam)
{
	ExtractTrack_Param *pparam = reinterpret_cast<ExtractTrack_Param*>(pvParam);

	HRESULT hr = pparam->pAudioCD->ExtractTrackWork(pparam->track_number, pparam->filename, pparam->bAsync);

	SysFreeString(pparam->filename);
	delete pparam;

	return 0;
}

STDMETHODIMP CAudioCD::ExtractTrackWork( /*[in]*/ long track_number, /*[in]*/ BSTR filename, /*[in]*/ VARIANT_BOOL bAsync)
{
	if (filename == nullptr || SysStringLen(filename) == 0) {
		return Error(L"Argument filename invalid. Cannot be NULL.", IID_INCFAudioCD, E_INVALIDARG);
	}

	if (m_bLoaded == false) {
		CComBSTR bstrError(L"A CD Must Be Loaded First.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
	}
	else if (track_number <= 0 || track_number > (long)m_lAudioTrackCount || SysStringLen(filename) == 0) {
		CComBSTR bstrError(L"Invalid Arguments.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(CComBSTR(L"Invalid Arguments."), IID_INCFAudioCD, E_INVALIDARG);
	}

	HANDLE hFile = CreateFile(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE) {
		CComBSTR bstrError(L"CreateFile Failed.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
	}

	CComBSTR bstrDrive(L"\\\\.\\");
	bstrDrive.Append(m_bstrDrive);
	bstrDrive.Append(L":");
	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hCD == INVALID_HANDLE_VALUE) {
		CloseHandle(hFile);
		DeleteFile(filename);
		CComBSTR bstrError(L"CreateFile Failed.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
	}

	DWORD dwNotUsed;

	// Lock the compact disc in the CD-ROM drive to prevent accidental
	// removal while reading from it.
	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
	//pmrLockCDROM.PreventMediaRemoval = TRUE;
	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	

	// Get sector size of compact disc
	DISK_GEOMETRY  dgCDROM;
	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
		long lTrackIndex = ConvertTrackNumberToIndex(track_number);

		DWORD dwSec = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
			- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
		double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];// - m_TOC.tracks[0].addr[3];
		dFrameTime *= (1000 / 75);	// ms difference				

		if (IsTrackIndexLastToMultisession(lTrackIndex)) {
			dwSec -= MULTISESSION_TIMEOUT;
		}

		double dDataSize = dFrameTime + (dwSec * 1000);
		dDataSize *= 176400;
		dDataSize /= 1000;

		DWORD dwDataSize = dDataSize;

		//
		// Write out wave header
		//
		wave_header wh = { 0 };
		InitWaveHeader(&wh, dwDataSize);
		DWORD dwWritten(0);
		BOOL bResult = WriteFile(hFile, &wh, sizeof(wave_header), &dwWritten, NULL);
		if (bResult == FALSE) {
			CloseHandle(hFile);
			DeleteFile(filename);
			CComBSTR bstrError(L"WriteFile Failed.");
			m_bstrAsyncExtractionErrorMessage = bstrError;
			this->m_bAsyncExtractionSucceeded = false;
			this->m_bAsyncExtractionFinsihed = true;
			return Error(bstrError, IID_INCFAudioCD, E_FAIL);
		}


		// Allocate buffer to hold sectors from compact disc. Note that
		// the buffer will be allocated on a sector boundary because the
		// allocation granularity is larger than the size of a sector on a
		// compact disk.
		LPBYTE lpSector;

		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
		dRelation /= RAW_SECTOR_DATA_SIZE;
		dRelation++;

		DWORD  dwSize = dRelation; // 2-KB boundary 
		dwSize *= 2048;

		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

		double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2] - 2);
		//- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);		

		double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
		dTemp *= (1000 / 75);

		dOffset = (dOffset * 1000) + dTemp;

		dOffset /= 1000;
		dOffset *= 176400;
		dOffset /= 2352;
		dOffset *= 2048;

		DWORD dwOffset = dOffset;

		dwWritten = 0;
		bool bFinito(false);

		DWORD dwSteps = dwDataSize / 100;
		do {
			RAW_READ_INFO rri = { 0 };
			rri.TrackMode = CDDA;
			rri.SectorCount = RAW_SECTOR_COUNT;
			rri.DiskOffset.LowPart = dwOffset;

			if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
			}
			else {
				DWORD dwRestSize = dwDataSize - dwWritten;
				double dSectorCount = dwRestSize;
				dSectorCount /= 2352;
				DWORD dwSectorCount = dSectorCount;
				if (dSectorCount > dwSectorCount && track_number < (long)m_lAudioTrackCount) {
					dwSectorCount++;
				}
				rri.SectorCount = dwSectorCount;
				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
				bFinito = true;
			}
			if (bResult == FALSE && dwWritten == 0) {
				VirtualFree(lpSector, 0, MEM_RELEASE);
				CloseHandle(hCD);
				CloseHandle(hFile);
				//DeleteFile(filename);
				CComBSTR bstr(L"Drive [");
				bstr.AppendBSTR(m_bstrDrive);
				bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
				m_bstrAsyncExtractionErrorMessage = bstr;
				this->m_bAsyncExtractionSucceeded = false;
				this->m_bAsyncExtractionFinsihed = true;
				return Error(bstr, IID_INCFAudioCD, E_FAIL);
			}
			else if (dwWritten + dwNotUsed > dwDataSize) {
				WriteFile(hFile, lpSector, dwDataSize - dwWritten, &dwNotUsed, NULL);
				dwWritten = dwDataSize;	// finished
			}
			else {
				WriteFile(hFile, lpSector, dwNotUsed, &dwNotUsed, NULL);
				dwWritten += dwNotUsed;
				double d = dwWritten;
				d /= 2352;
				d *= 2048;
				d += dOffset;
				dwOffset = d;

				if (bFinito == true) {
					DWORD dwRestSize = dwDataSize - dwWritten;
					memset(lpSector, 0, dwRestSize);
					WriteFile(hFile, lpSector, dwRestSize, &dwRestSize, NULL);
					dwWritten = dwDataSize;
				}
			}
			m_lAsyncProgressValue = (dwWritten / dwSteps);
		} while (dwWritten < dwDataSize);

		VirtualFree(lpSector, 0, MEM_RELEASE);

		// Unlock the disc in the CD-ROM drive.
		//pmrLockCDROM.PreventMediaRemoval = FALSE;		
		//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
	}

	CloseHandle(hCD);

	CloseHandle(hFile);

	this->m_bAsyncExtractionSucceeded = true;
	this->m_bAsyncExtractionFinsihed = true;
	m_lAsyncProgressValue = 100;

	return S_OK;
}

STDMETHODIMP CAudioCD::ExecuteCddbQuery( /*[in]*/ BSTR freedb_server, /*[in]*/ VARIANT_BOOL bAsync)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (freedb_server == nullptr || SysStringLen(freedb_server) == 0) {
		return Error("Argument freedb_server invalid. Cannot be NULL.", IID_INCFAudioCD, E_INVALIDARG);
	}

	this->m_bAsyncExtractionFinsihed = false;
	this->m_bAsyncExtractionSucceeded = false;
	this->m_bstrAsyncExtractionErrorMessage.Empty();
	this->m_lAsyncProgressValue = 0;

	if (bAsync == VARIANT_FALSE) {
		return ExecuteCddbQueryWork(freedb_server, bAsync);
	}

	DWORD dwExecuteCddbQueryThreadID(0);
	ExecuteCddbQuery_Param *pparam = new ExecuteCddbQuery_Param();
	pparam->pAudioCD = this;
	pparam->freedb_server = CComBSTR(freedb_server).Copy();
	pparam->bAsync = bAsync;

	HANDLE hThread = CreateThread(NULL, 0, ExecuteCddbQueryThread, pparam, 0, &dwExecuteCddbQueryThreadID);

	return S_OK;
}

DWORD WINAPI ExecuteCddbQueryThread(PVOID pvParam)
{
	ExecuteCddbQuery_Param *pparam = reinterpret_cast<ExecuteCddbQuery_Param*>(pvParam);

	HRESULT hr = pparam->pAudioCD->ExecuteCddbQueryWork(pparam->freedb_server, pparam->bAsync);

	SysFreeString(pparam->freedb_server);
	delete pparam;

	return 0;
}

STDMETHODIMP CAudioCD::ExecuteCddbQueryWork( /*[in]*/ BSTR freedb_server, /*[in]*/ VARIANT_BOOL bAsync)
{
	HRESULT hr(S_OK);

	CComPtr<INCFString> pINCFString;
	hr = pINCFString.CoCreateInstance(CComBSTR(L"ItSoftware.NCF.String"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"ExecuteCddbQuery Failed. Could Not Create ItSoftware.NCF.String Component."), IID_INCFAudioCD, E_FAIL);
	}

	CComPtr<IXMLHttpRequest> pIXMLHttpRequest;
	hr = pIXMLHttpRequest.CoCreateInstance(CComBSTR(L"Msxml2.XMLHTTP"));
	if (FAILED(hr)) {
		return Error(CComBSTR(L"ExecuteCddbQuery Failed. Could Not Create Msxml2.XMLHTTP Component."), IID_INCFAudioCD, E_FAIL);
	}

	CComBSTR bstrUser(L"");
	CComBSTR bstrPassword(L"");
	CComVariant vtUser(bstrUser);
	CComVariant vtPassword(bstrPassword);
	CComVariant vtAsync;
	vtAsync.boolVal = VARIANT_FALSE;
	vtAsync.vt = VT_BOOL;

	vector<CComBSTR> m_vServers;
	/*
	if ( SysStringLen(freedb_server) == 0 ) {
	hr = pIXMLHttpRequest->open(CComBSTR(L"POST"), CComBSTR(L"http://www.freedb.org/~cddb/cddb.cgi"), vtAsync, vtUser, vtPassword);
	if ( FAILED(hr) ) {
	return Error(CComBSTR(L"ExecuteCddbQuery Failed."), IID_INCFAudioCD, E_FAIL );
	}

	CComBSTR bstrBody(L"cmd=sites&hello=kks.audiocd+localhost+aj+1.1&proto=5");		// Ask for sites.
	CComVariant vtBody(bstrBody);
	hr = pIXMLHttpRequest->send( vtBody );
	if ( FAILED(hr) ) {
	return Error(CComBSTR(L"ExecuteCddbQuery Failed."), IID_INCFAudioCD, E_FAIL );
	}

	CComBSTR bstrResponse;
	hr = pIXMLHttpRequest->get_responseText(&bstrResponse);
	if ( FAILED(hr) ) {
	return Error(CComBSTR(L"ExecuteCddbQuery Failed."), IID_INCFAudioCD, E_FAIL );
	}

	if ( bstrResponse.Length() == 0 ) {
	m_vServers.push_back( CComBSTR(L"http://www.freedb.org/~cddb/cddb.cgi") );	// Use default
	}
	else {
	CComBSTR bstrResultCode;
	hr = pINCFString->Left(bstrResponse, 3, &bstrResultCode );

	if ( bstrResultCode != CComBSTR(L"210") ) {
	// Failure lets try to use the default.
	m_vServers.push_back( CComBSTR(L"http://www.freedb.org/~cddb/cddb.cgi") );	// Use default
	}
	else {
	// Ok now parse the servers and add them to the vector.
	CComBSTR bstrLine;
	CComBSTR bstrRest;

	hr = pINCFString->Split( bstrResponse, CComBSTR(L"\r\n"), &bstrRest, &bstrLine );
	CComBSTR bstr(bstrRest);
	long lCount(100);	// don't add more than 100 servers
	while ( bstr.Length() > 0 && lCount-- > 0 ) {
	hr = pINCFString->Split( bstrRest, CComBSTR(L"\r\n"), &bstr, &bstrLine );
	bstrRest = bstr;

	// Do we have a http address?
	long lIndex(0);
	bstrLine.ToLower();
	hr = pINCFString->Find( bstrLine, CComBSTR(L"http"), &lIndex );
	if ( lIndex != -1 ) {
	// Extract address
	CComPtr<IKKSList> pIKKSList;
	hr = pINCFString->SplitToCollection(bstrLine, CComBSTR(L" "), &pIKKSList );
	long lSize(0);
	hr = pIKKSList->get_Size(&lSize);
	CComVariant vtAddress;
	CComVariant vtPath;
	pIKKSList->GetItemByIndex(0,&vtAddress);
	pIKKSList->GetItemByIndex(3,&vtPath);

	CComBSTR bstrServer( L"http://" );
	bstrServer.AppendBSTR(vtAddress.bstrVal);
	bstrServer.AppendBSTR(vtPath.bstrVal);

	m_vServers.push_back(bstrServer);
	}// if
	}// while
	}// else
	}// else
	}
	else {
	//m_vServers.push_back( freedb_server );
	m_vServers.push_back( CComBSTR(L"http://www.freedb.org/~cddb/cddb.cgi") );
	}
	*/
	if (freedb_server != nullptr && SysStringLen(freedb_server) > 0) {
		m_vServers.push_back(freedb_server);
	}
	m_vServers.push_back(CComBSTR(L"http://freedb.freedb.org/~cddb/cddb.cgi"));

	m_lAsyncProgressValue = 5;

	CComBSTR bstrCddbQuery;
	hr = pINCFString->Replace(m_bstrCddbQuery, CComBSTR(L" "), CComBSTR(L"+"), &bstrCddbQuery);
	wstringstream wss;
	wss << L"cmd=cddb+query+" << bstrCddbQuery.m_str << L"&hello=NCF.AudioCD+localhost+aj+1.1&proto=6";

	ClearCddbData();

	bstrCddbQuery.Empty();
	bstrCddbQuery.Append(wss.str().c_str());
	for (long l = 0; l < m_vServers.size(); l++) {
		hr = pIXMLHttpRequest->open(CComBSTR(L"POST"), m_vServers[l], vtAsync, vtUser, vtPassword);

		CComVariant vtBody(bstrCddbQuery);
		hr = pIXMLHttpRequest->send(vtBody);
		if (FAILED(hr)) {
			continue; // Try next one. This one is offline.			
		}

		CComBSTR bstrResponse;
		hr = pIXMLHttpRequest->get_responseText(&bstrResponse);
		if (FAILED(hr)) {
			//MsgBox(GetLastErrorInfoDesc(), CComBSTR(L"ErrorInfo"));
			return Error(CComBSTR(L"sdf"), IID_INCFAudioCD, E_FAIL);
		}

		m_lAsyncProgressValue = 40;

		CComBSTR bstrResultCode;
		hr = pINCFString->Left(bstrResponse, 3, &bstrResultCode);

		if (bstrResultCode == CComBSTR(L"200") || bstrResultCode == CComBSTR(L"210") || bstrResultCode == CComBSTR(L"211")) {
			CComPtr<INCFCollectionList> pINCFCollectionList;
			hr = pINCFString->SplitToCollection(bstrResponse, CComBSTR(L" "), &pINCFCollectionList);
			CComVariant vtDirectory;
			pINCFCollectionList->GetItemByIndex(1, &vtDirectory);

			CComBSTR bstrNewCddbId;
			CComBSTR bstrX1(vtDirectory.bstrVal);
			CComBSTR bstrX2(L"Found");
			if (bstrX1 == bstrX2) {
				// More entries found move to next line for first item
				CComBSTR bstrRestString;
				pINCFString->StringAfterString(bstrResponse, CComBSTR(L"\r\n"), &bstrRestString);
				if (bstrRestString.Length() > 0) {
					pINCFCollectionList.Release();
					hr = pINCFString->SplitToCollection(bstrRestString, CComBSTR(L" "), &pINCFCollectionList);
					pINCFCollectionList->GetItemByIndex(0, &vtDirectory);
					CComVariant vtCddbId;
					pINCFCollectionList->GetItemByIndex(1, &vtCddbId);
					vtCddbId.ChangeType(VT_BSTR);
					bstrNewCddbId.AppendBSTR(vtCddbId.bstrVal);
				}
				else {
					// clean up
					return E_FAIL;
				}
			}

			wstringstream wss;
			wss << L"cmd=cddb+read+" << vtDirectory.bstrVal << L"+";
			if (bstrNewCddbId.Length() == 0) {
				wss << m_bstrCddbId.m_str;
			}
			else {
				wss << bstrNewCddbId.m_str;
			}
			wss << L"&hello=NCF.AudioCD+localhost+aj+1.1&proto=6";

			CComBSTR bstrRequest(wss.str().c_str());
			hr = pIXMLHttpRequest->open(L"POST", m_vServers[l], vtAsync, vtUser, vtPassword);
			if (FAILED(hr)) {
				//MsgBox(GetLastErrorInfoDesc(), CComBSTR(L"ErrorInfo"));
				return Error(CComBSTR(L"sdfsdf"), IID_INCFAudioCD, E_FAIL);
			}

			CComVariant vtBody(bstrRequest);
			hr = pIXMLHttpRequest->send(vtBody);
			if (FAILED(hr)) {
				//MsgBox(GetLastErrorInfoDesc(), CComBSTR(L"ErrorInfo"));
				return Error(CComBSTR(L"xxxxxsfd"), IID_INCFAudioCD, E_FAIL);
			}

			CComBSTR bstrResponseText;
			hr = pIXMLHttpRequest->get_responseText(&bstrResponseText);
			if (FAILED(hr)) {
				//MsgBox(GetLastErrorInfoDesc(), CComBSTR(L"ErrorInfo"));
				return Error(CComBSTR(L"sdf2"), IID_INCFAudioCD, E_FAIL);
			}

			m_lAsyncProgressValue = 75;

			if (bstrResponseText.Length() > 0) {
				CComPtr<INCFCollectionList> pINCFCollectionList;
				hr = pINCFString->LineSplitToCollection(bstrResponseText, &pINCFCollectionList);

				long lSize(-1);
				hr = pINCFCollectionList->get_Size(&lSize);
				if (lSize > 0) {
					for (long l = 0; l < lSize; l++) {
						CComVariant vtItem;
						pINCFCollectionList->GetItemByIndex(l, &vtItem);

						long lIndex(-1);
						// Find Artist/Album
						hr = pINCFString->Find(vtItem.bstrVal, CComBSTR(L"DTITLE="), &lIndex);
						if (lIndex != -1) {
							CComBSTR bstr;
							hr = pINCFString->CutLeft(vtItem.bstrVal, 7, &bstr);
							CComBSTR bstrAlbum;
							CComBSTR bstrArtist;
							hr = pINCFString->Split(bstr, CComBSTR(L"/"), &bstrAlbum, &bstrArtist);
							m_bstrAlbumTitle.Empty();
							m_bstrArtist.Empty();
							hr = pINCFString->Trim(bstrAlbum, &m_bstrAlbumTitle);
							hr = pINCFString->Trim(bstrArtist, &m_bstrArtist);
						}
						else {
							// Find Year
							hr = pINCFString->Find(vtItem.bstrVal, CComBSTR(L"DYEAR="), &lIndex);
							if (lIndex != -1) {
								CComBSTR bstr;
								hr = pINCFString->CutLeft(vtItem.bstrVal, 6, &bstr);
								m_bstrYear.Empty();
								hr = pINCFString->Trim(bstr, &m_bstrYear);
							}
							else {
								// Find Genre
								hr = pINCFString->Find(vtItem.bstrVal, CComBSTR(L"DGENRE="), &lIndex);
								if (lIndex != -1) {
									CComBSTR bstr;
									hr = pINCFString->CutLeft(vtItem.bstrVal, 7, &bstr);
									m_bstrGenre.Empty();
									hr = pINCFString->Trim(bstr, &m_bstrGenre);
								}
								else {
									// Find Titles
									hr = pINCFString->Find(vtItem.bstrVal, CComBSTR(L"TTITLE"), &lIndex);
									if (lIndex != -1) {
										hr = pINCFString->Find(vtItem.bstrVal, CComBSTR(L"="), &lIndex);
										if (lIndex != -1) {
											CComBSTR bstr;
											hr = pINCFString->CutLeft(vtItem.bstrVal, lIndex + 1, &bstr);
											CComBSTR bstrTitle;
											hr = pINCFString->Trim(bstr, &bstrTitle);
											m_vbstrTitles.push_back(bstrTitle);
										}
									}
								}
							}
						}// else						
					}// for					
					m_bCddbLoaded = true;
					break;	//exit loop
				}// 				
			}// if
		}// else
	}// for

	m_lAsyncProgressValue = 100;

	return S_OK;
}

STDMETHODIMP CAudioCD::get_Artist( /*[out, retval]*/ BSTR *artist)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (artist == NULL) {
		return Error(CComBSTR(L"Argument artist invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	*artist = m_bstrArtist.Copy();
	return S_OK;
}

STDMETHODIMP CAudioCD::get_AlbumTitle( /*[out, retval]*/ BSTR *album_title)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (album_title == NULL) {
		return Error(CComBSTR(L"Argument album_title invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	*album_title = m_bstrAlbumTitle.Copy();
	return S_OK;
}

STDMETHODIMP CAudioCD::get_Genre( /*[out, retval]*/ BSTR *genre)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (genre == NULL) {
		return Error(CComBSTR(L"Argument genre invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	*genre = m_bstrGenre.Copy();
	return S_OK;
}

STDMETHODIMP CAudioCD::get_Year( /*[out, retval]*/ BSTR *year)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (year == NULL) {
		return Error(CComBSTR(L"Argument year invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	*year = m_bstrYear.Copy();
	return S_OK;
}

STDMETHODIMP CAudioCD::GetTitle( /*[in]*/ long track_number, /*[out, retval]*/ BSTR *track_name)
{
	if (!this->m_bLoaded) {
		return Error(L"CD not loaded.", IID_INCFAudioCD, E_FAIL);
	}

	if (track_number <= 0  || track_number > this->m_lTrackCount ) {
		return Error(CComBSTR(L"Argument track_number invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	if (track_name == NULL ) {
		return Error(CComBSTR(L"Argument track_name invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	if (track_number > m_vbstrTitles.size()) {
		*track_name = CComBSTR(L"").Detach();
	}
	else {
		*track_name = m_vbstrTitles[track_number - 1].Copy();
	}
	return S_OK;
}

STDMETHODIMP CAudioCD::get_CddbLoaded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == NULL) {
		return Error(CComBSTR(L"Argument status invalid."), IID_INCFAudioCD, E_INVALIDARG);
	}

	(m_bCddbLoaded == true) ? *status = VARIANT_TRUE : *status = VARIANT_FALSE;
	return S_OK;
}


//STDMETHODIMP CAudioCD::ExtractTrackAndEncode( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	this->m_bAsyncExtractionFinsihed = false;
//	this->m_bAsyncExtractionSucceeded = false;
//	this->m_bstrAsyncExtractionErrorMessage.Empty();
//	this->m_lAsyncProgressValue = 0;
//
//	if (bAsync == VARIANT_FALSE) {
//		return ExtractTrackAndEncodeWork(encoding_rate, track_number, pIKKSWMHeaderInfo, out_filename, bAsync);
//	}
//
//	ExtractTrackAndEncode_Param *pparam = new ExtractTrackAndEncode_Param();
//	pparam->encoding_rate = encoding_rate;
//	pparam->out_filename = CComBSTR(out_filename).Copy();
//	pparam->pAudioCD = this;
//	pparam->pIKKSWMHeaderInfo = pIKKSWMHeaderInfo;
//	pparam->track_number = track_number;
//	pparam->bAsync = bAsync;
//
//	DWORD dwExtractTrackThreadID(0);
//	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackAndEncodeThread, pparam, 0, &dwExtractTrackThreadID);
//
//	return S_OK;
//}
//
//DWORD WINAPI ExtractTrackAndEncodeThread(PVOID pvParam)
//{
//	ExtractTrackAndEncode_Param *pparam = reinterpret_cast<ExtractTrackAndEncode_Param*>(pvParam);
//
//	HRESULT hr = pparam->pAudioCD->ExtractTrackAndEncodeWork(pparam->encoding_rate, pparam->track_number, pparam->pIKKSWMHeaderInfo, pparam->out_filename, pparam->bAsync);
//
//	SysFreeString(pparam->out_filename);
//	delete pparam;
//
//	return 0;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackAndEncodeWork( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	if (m_bLoaded == false) {
//		CComBSTR bstrError(L"A CD Must Be Loaded First.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//	if (track_number <= 0 || track_number > (long)m_lAudioTrackCount || SysStringLen(out_filename) == 0 ||
//		encoding_rate < EWMProfile_V70_6VoiceAudio || encoding_rate > EWMProfile_V70_128Audio)
//	{
//		CComBSTR bstrError(L"Invalid Arguments.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
//	}
//
//	CComBSTR bstrDrive(L"\\\\.\\");
//	bstrDrive.Append(m_bstrDrive);
//	bstrDrive.Append(L":");
//	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hCD == INVALID_HANDLE_VALUE) {
//		CComBSTR bstrError(L"CreateFile Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	// Start WMA Setup
//	CComPtr<IWMWriter>			pIWMWriter;
//	HRESULT hr = WMCreateWriter(NULL, &pIWMWriter);
//	if (FAILED(hr)) {
//		CComBSTR bstrError(L"WMCreateWriter Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	switch (encoding_rate)
//	{
//	case EWMProfile_V70_6VoiceAudio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_6VoiceAudio);
//		break;
//	case EWMProfile_V70_288FMRadioMono:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioMono);
//		break;
//	case EWMProfile_V70_288FMRadioStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioStereo);
//		break;
//	case EWMProfile_V70_56DialUpStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_56DialUpStereo);
//		break;
//	case EWMProfile_V70_64AudioISDN:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64AudioISDN);
//		break;
//	case EWMProfile_V70_64Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64Audio);
//		break;
//	case EWMProfile_V70_96Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);
//		break;
//	case EWMProfile_V70_128Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_128Audio);
//		break;
//	default:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);		// default to 96 kbit/s
//		break;
//	};
//
//	CComPtr<IWMWriterFileSink>	pIWMFileSink;
//	hr = WMCreateWriterFileSink(&pIWMFileSink);
//	hr = pIWMFileSink->Open(out_filename);
//
//	CComPtr<IWMWriterAdvanced>	pIWMWriterAdvanced;
//	hr = pIWMWriter->QueryInterface(IID_IWMWriterAdvanced, (void**)&pIWMWriterAdvanced);
//	hr = pIWMWriterAdvanced->AddSink(pIWMFileSink);
//
//	DWORD dwInputCount(0);
//	hr = pIWMWriter->GetInputCount(&dwInputCount);
//	for (DWORD dw = 0; dw < dwInputCount; dw++) {
//		CComPtr<IWMInputMediaProps> pIWMInputMediaProps;
//		hr = pIWMWriter->GetInputProps(dw, &pIWMInputMediaProps);
//
//		WAVEFORMATEX wfex;
//		wfex.cbSize = 0;
//		wfex.nAvgBytesPerSec = 176400;//wh.nAvgBytesPerSec;
//		wfex.nBlockAlign = 4;//wh.wBlockAlign;
//		wfex.nChannels = 2;//wh.wChannels;
//		wfex.nSamplesPerSec = 44100;//wh.nSamplesPrSec ;
//		wfex.wBitsPerSample = 16;//wh.wBitsPerSample;
//		wfex.wFormatTag = WAVE_FORMAT_PCM;
//
//		WM_MEDIA_TYPE wm_media_type;
//		wm_media_type.bFixedSizeSamples = TRUE;
//		wm_media_type.bTemporalCompression = FALSE;
//		wm_media_type.cbFormat = sizeof(WAVEFORMATEX);
//		wm_media_type.formattype = WMFORMAT_WaveFormatEx;
//		wm_media_type.lSampleSize = 4;//wh.wBlockAlign;
//		wm_media_type.majortype = WMMEDIATYPE_Audio;
//		wm_media_type.pbFormat = (BYTE *)&wfex;
//		wm_media_type.pUnk = NULL;
//		wm_media_type.subtype = WMMEDIASUBTYPE_PCM;
//
//		hr = pIWMInputMediaProps->SetMediaType(&wm_media_type);
//
//		hr = pIWMWriter->SetInputProps(dw, pIWMInputMediaProps);
//	}
//
//	// Add header info if given.
//	if (pIKKSWMHeaderInfo != NULL) {
//		CComPtr<IWMHeaderInfo> pIWMHeaderInfo;
//		hr = pIWMWriter->QueryInterface(IID_IWMHeaderInfo, (VOID **)&pIWMHeaderInfo);
//		hr = pIKKSWMHeaderInfo->SaveToInterface(pIWMHeaderInfo);
//	}
//
//	// Begin Writing
//	hr = pIWMWriter->BeginWriting();
//
//	// End WMA Setup
//
//
//
//	DWORD dwNotUsed;
//
//	// Lock the compact disc in the CD-ROM drive to prevent accidental
//	// removal while reading from it.
//	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
//	//pmrLockCDROM.PreventMediaRemoval = TRUE;
//	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	
//
//	// Get sector size of compact disc
//	DISK_GEOMETRY  dgCDROM;
//	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
//		long lTrackIndex = ConvertTrackNumberToIndex(track_number);
//
//		DWORD dwSec = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
//			- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
//		double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];// - m_TOC.tracks[0].addr[3];
//		dFrameTime *= (1000 / 75);	// ms difference				
//
//		if (IsTrackIndexLastToMultisession(lTrackIndex)) {
//			dwSec -= MULTISESSION_TIMEOUT;
//		}
//
//		double dDataSize = dFrameTime + (dwSec * 1000);
//		dDataSize *= 176400;
//		dDataSize /= 1000;
//
//		DWORD dwDataSize = dDataSize;
//
//
//
//		// Allocate buffer to hold sectors from compact disc. Note that
//		// the buffer will be allocated on a sector boundary because the
//		// allocation granularity is larger than the size of a sector on a
//		// compact disk.
//		LPBYTE lpSector;
//
//		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
//		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
//		dRelation /= RAW_SECTOR_DATA_SIZE;
//		dRelation++;
//
//		DWORD  dwSize = dRelation; // 2-KB boundary 
//		dwSize *= 2048;
//
//		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
//
//		double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2] - 2);
//		//- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);		
//
//		double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
//		dTemp *= (1000 / 75);
//
//		dOffset = (dOffset * 1000) + dTemp;
//
//		dOffset /= 1000;
//		dOffset *= 176400;
//		dOffset /= 2352;
//		dOffset *= 2048;
//
//		DWORD dwOffset = dOffset;
//
//		DWORD dwWritten = 0;
//		QWORD qwSample(0);
//		bool bFinito(false);
//		DWORD dwSteps = dwDataSize / 100;
//		do {
//			RAW_READ_INFO rri = { 0 };
//			rri.TrackMode = CDDA;
//			rri.SectorCount = RAW_SECTOR_COUNT;
//			rri.DiskOffset.LowPart = dwOffset;
//
//			BOOL bResult(FALSE);
//			if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
//				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//			}
//			else {
//				DWORD dwRestSize = dwDataSize - dwWritten;
//				double dSectorCount = dwRestSize;
//				dSectorCount /= 2352;
//				DWORD dwSectorCount = dSectorCount;
//				if (dSectorCount > dwSectorCount && track_number < (long)m_lAudioTrackCount) {
//					dwSectorCount++;
//				}
//				rri.SectorCount = dwSectorCount;
//				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//				bFinito = true;
//			}
//			if (bResult == FALSE && dwWritten == 0) {
//				VirtualFree(lpSector, 0, MEM_RELEASE);
//				CloseHandle(hCD);
//				CComBSTR bstr(L"Drive [");
//				bstr.AppendBSTR(m_bstrDrive);
//				bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
//				m_bstrAsyncExtractionErrorMessage = bstr;
//				this->m_bAsyncExtractionSucceeded = false;
//				this->m_bAsyncExtractionFinsihed = true;
//				return Error(bstr, IID_INCFAudioCD, E_FAIL);
//			}
//			else if (dwWritten + dwNotUsed >= dwDataSize) {
//				CComPtr<INSSBuffer> pINSSBuffer;
//				BYTE *pBuffer = NULL;
//				hr = pIWMWriter->AllocateSample(dwDataSize - dwWritten, &pINSSBuffer);
//				hr = pINSSBuffer->GetBuffer(&pBuffer);
//				memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwDataSize - dwWritten);
//				hr = pINSSBuffer->SetLength(dwDataSize - dwWritten);
//
//				hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//				double dData = dwDataSize - dwWritten;
//				dData /= 176400;
//				dData *= 10000000;
//				qwSample += dData;
//
//				//				hr = pIWMWriter->Flush( );
//				//				hr = pIWMWriter->EndWriting( );
//
//				dwWritten = dwDataSize;	// finished
//			}
//			else {
//				CComPtr<INSSBuffer> pINSSBuffer;
//				BYTE *pBuffer = NULL;
//				hr = pIWMWriter->AllocateSample(dwNotUsed, &pINSSBuffer);
//				hr = pINSSBuffer->GetBuffer(&pBuffer);
//				memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwNotUsed);
//				hr = pINSSBuffer->SetLength(dwNotUsed);
//
//				hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//				double dData = dwNotUsed;
//				dData /= 176400;
//				dData *= 10000000;
//				qwSample += dData;
//
//				dwWritten += dwNotUsed;
//				double d = dwWritten / 2352;
//				d *= 2048;
//				dwOffset = d + dOffset;//dwWritten;
//
//				if (bFinito == true) {
//					dwWritten = dwDataSize;
//				}
//			}
//			m_lAsyncProgressValue = (dwWritten / dwSteps);
//		} while (dwWritten < dwDataSize);
//
//		hr = pIWMWriter->Flush();
//		hr = pIWMWriter->EndWriting();
//
//		VirtualFree(lpSector, 0, MEM_RELEASE);
//
//		// Unlock the disc in the CD-ROM drive.
//		//pmrLockCDROM.PreventMediaRemoval = FALSE;		
//		//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
//	}
//
//	this->m_bAsyncExtractionSucceeded = true;
//	this->m_bAsyncExtractionFinsihed = true;
//	m_lAsyncProgressValue = 100;
//
//	CloseHandle(hCD);
//
//	return S_OK;
//}

void CAudioCD::ClearCddbData()
{
	m_bCddbLoaded = false;
	m_bstrCddbQuery.Empty();
	m_bstrArtist.Empty();
	m_bstrAlbumTitle.Empty();
	m_bstrGenre.Empty();
	m_bstrYear.Empty();
	m_vbstrTitles.clear();
}

STDMETHODIMP CAudioCD::ExtractTrackRange( /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
{
	if (!this->m_bLoaded) {
		return Error(CComBSTR(L"CD not loaded."), IID_INCFAudioCD, E_FAIL);
	}

	this->m_bAsyncExtractionFinsihed = false;
	this->m_bAsyncExtractionSucceeded = false;
	this->m_bstrAsyncExtractionErrorMessage.Empty();
	this->m_lAsyncProgressValue = 0;

	if (bAsync == VARIANT_FALSE) {
		return ExtractTrackRangeWork(track_number_start, track_number_stop, out_filename, bAsync);
	}

	ExtractTrackRange_Param *pparam = new ExtractTrackRange_Param();
	pparam->out_filename = CComBSTR(out_filename).Copy();
	pparam->pAudioCD = this;
	pparam->track_number_start = track_number_start;
	pparam->track_number_stop = track_number_stop;
	pparam->bAsync = bAsync;

	DWORD dwExtractTrackThreadID(0);
	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackRangeThread, pparam, 0, &dwExtractTrackThreadID);

	return S_OK;
}

DWORD WINAPI ExtractTrackRangeThread(PVOID pvParam)
{
	ExtractTrackRange_Param *pparam = reinterpret_cast<ExtractTrackRange_Param*>(pvParam);

	HRESULT hr = pparam->pAudioCD->ExtractTrackRangeWork(pparam->track_number_start, pparam->track_number_stop, pparam->out_filename, pparam->bAsync);

	SysFreeString(pparam->out_filename);
	delete pparam;

	return 0;
}


STDMETHODIMP CAudioCD::ExtractTrackRangeWork( /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
{
	if (m_bLoaded == false) {
		CComBSTR bstrError(L"A CD Must Be Loaded First.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
	}
	else if (track_number_start <= 0 || track_number_stop <= 0 || track_number_start > (long)m_lAudioTrackCount || track_number_start > track_number_stop || track_number_stop > (long)m_lAudioTrackCount || SysStringLen(out_filename) == 0) {
		CComBSTR bstrError(L"Invalid Arguments.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
	}

	HANDLE hFile = CreateFile(out_filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE) {
		CComBSTR bstrError(L"CreateFile Failed.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
	}

	CComBSTR bstrDrive(L"\\\\.\\");
	bstrDrive.Append(m_bstrDrive);
	bstrDrive.Append(L":");
	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hCD == INVALID_HANDLE_VALUE) {
		CloseHandle(hFile);
		DeleteFile(out_filename);
		CComBSTR bstrError(L"CreateFile Failed.");
		m_bstrAsyncExtractionErrorMessage = bstrError;
		this->m_bAsyncExtractionSucceeded = false;
		this->m_bAsyncExtractionFinsihed = true;
		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
	}

	DWORD dwNotUsed;

	// Lock the compact disc in the CD-ROM drive to prevent accidental
	// removal while reading from it.
	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
	//pmrLockCDROM.PreventMediaRemoval = TRUE;
	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	

	// Get sector size of compact disc
	DISK_GEOMETRY  dgCDROM;
	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
		long lTrackIndex = ConvertTrackNumberToIndex(track_number_start);
		long lTrackIndex2 = ConvertTrackNumberToIndex(track_number_stop);

		DWORD dwSec = ((m_TOC.tracks[lTrackIndex2 + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex2 + 1].addr[2])
			- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
		double dFrameTime = m_TOC.tracks[lTrackIndex2 + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];// - m_TOC.tracks[0].addr[3];
		dFrameTime *= (1000 / 75);	// ms difference				

		if (IsTrackIndexLastToMultisession(lTrackIndex2)) {
			dwSec -= MULTISESSION_TIMEOUT;
		}

		double dDataSize = dFrameTime + (dwSec * 1000);
		dDataSize *= 176400;
		dDataSize /= 1000;

		DWORD dwDataSize = dDataSize;

		//
		// Write out wave header
		//
		wave_header wh = { 0 };
		InitWaveHeader(&wh, dwDataSize);
		DWORD dwWritten(0);
		BOOL bResult = WriteFile(hFile, &wh, sizeof(wave_header), &dwWritten, NULL);
		if (bResult == FALSE) {
			CloseHandle(hFile);
			DeleteFile(out_filename);
			return Error(CComBSTR(L""), IID_INCFAudioCD, E_FAIL);
		}


		// Allocate buffer to hold sectors from compact disc. Note that
		// the buffer will be allocated on a sector boundary because the
		// allocation granularity is larger than the size of a sector on a
		// compact disk.
		LPBYTE lpSector;

		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
		dRelation /= RAW_SECTOR_DATA_SIZE;
		dRelation++;

		DWORD  dwSize = dRelation; // 2-KB boundary 
		dwSize *= 2048;

		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

		double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2])
			- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);

		double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
		dTemp *= (1000 / 75);

		dOffset = (dOffset * 1000) + dTemp;

		dOffset /= 1000;
		dOffset *= 176400;
		dOffset /= 2352;
		dOffset *= 2048;

		DWORD dwOffset = dOffset;

		dwWritten = 0;
		bool bFinito(false);
		DWORD dwSteps = dwDataSize / 100;
		do {
			RAW_READ_INFO rri = { 0 };
			rri.TrackMode = CDDA;
			rri.SectorCount = RAW_SECTOR_COUNT;
			rri.DiskOffset.LowPart = dwOffset;

			if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
			}
			else {
				DWORD dwRestSize = dwDataSize - dwWritten;
				double dSectorCount = dwRestSize;
				dSectorCount /= 2352;
				DWORD dwSectorCount = dSectorCount;
				if (dSectorCount > dwSectorCount && track_number_stop < (long)m_lAudioTrackCount) {
					dwSectorCount++;
				}
				rri.SectorCount = dwSectorCount;
				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
				bFinito = true;
			}
			if (bResult == FALSE && dwWritten == 0) {
				VirtualFree(lpSector, 0, MEM_RELEASE);
				CloseHandle(hCD);
				CloseHandle(hFile);
				//DeleteFile(out_filename);
				CComBSTR bstr(L"Drive [");
				bstr.AppendBSTR(m_bstrDrive);
				bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
				m_bstrAsyncExtractionErrorMessage = bstr;
				this->m_bAsyncExtractionSucceeded = false;
				this->m_bAsyncExtractionFinsihed = true;
				return Error(bstr, IID_INCFAudioCD, E_FAIL);
			}
			else if (dwWritten + dwNotUsed > dwDataSize) {
				WriteFile(hFile, lpSector, dwDataSize - dwWritten, &dwNotUsed, NULL);
				dwWritten = dwDataSize;	// finished
			}
			else {
				WriteFile(hFile, lpSector, dwNotUsed, &dwNotUsed, NULL);
				dwWritten += dwNotUsed;
				double d = dwWritten;
				d /= 2352;
				d *= 2048;
				d += dOffset;
				dwOffset = d;

				if (bFinito == true) {
					DWORD dwRestSize = dwDataSize - dwWritten;
					memset(lpSector, 0, dwRestSize);
					WriteFile(hFile, lpSector, dwRestSize, &dwRestSize, NULL);
					dwWritten = dwDataSize;
				}
			}
			m_lAsyncProgressValue = (dwWritten / dwSteps);
		} while (dwWritten < dwDataSize);

		VirtualFree(lpSector, 0, MEM_RELEASE);

		// Unlock the disc in the CD-ROM drive.
		//pmrLockCDROM.PreventMediaRemoval = FALSE;		
		//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
	}

	CloseHandle(hCD);

	CloseHandle(hFile);

	this->m_bAsyncExtractionSucceeded = true;
	this->m_bAsyncExtractionFinsihed = true;
	m_lAsyncProgressValue = 100;

	return S_OK;
}

//STDMETHODIMP CAudioCD::ExtractTrackRangeAndEncode( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	this->m_bAsyncExtractionFinsihed = false;
//	this->m_bAsyncExtractionSucceeded = false;
//	this->m_bstrAsyncExtractionErrorMessage.Empty();
//	this->m_lAsyncProgressValue = 0;
//
//	if (bAsync == VARIANT_FALSE) {
//		return ExtractTrackRangeAndEncodeWork(encoding_rate, track_number_start, track_number_stop, pIKKSWMHeaderInfo, out_filename, bAsync);
//	}
//
//	ExtractTrackRangeAndEncode_Param *pparam = new ExtractTrackRangeAndEncode_Param();
//	pparam->out_filename = CComBSTR(out_filename).Copy();
//	pparam->pAudioCD = this;
//	pparam->track_number_start = track_number_start;
//	pparam->track_number_stop = track_number_stop;
//	pparam->bAsync = bAsync;
//	pparam->encoding_rate = encoding_rate;
//	pparam->pIKKSWMHeaderInfo = pIKKSWMHeaderInfo;
//
//	DWORD dwExtractTrackThreadID(0);
//	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackRangeAndEncodeThread, pparam, 0, &dwExtractTrackThreadID);
//
//	return S_OK;
//}
//
//DWORD WINAPI ExtractTrackRangeAndEncodeThread(PVOID pvParam)
//{
//	ExtractTrackRangeAndEncode_Param *pparam = reinterpret_cast<ExtractTrackRangeAndEncode_Param*>(pvParam);
//
//	HRESULT hr = pparam->pAudioCD->ExtractTrackRangeAndEncodeWork(pparam->encoding_rate, pparam->track_number_start, pparam->track_number_stop, pparam->pIKKSWMHeaderInfo, pparam->out_filename, pparam->bAsync);
//
//	SysFreeString(pparam->out_filename);
//	delete pparam;
//
//	return 0;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackRangeAndEncodeWork( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ long track_number_start, /*[in]*/ long track_number_stop, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	if (m_bLoaded == false) {
//		CComBSTR bstrError(L"A CD Must Be Loaded First.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//	else if (track_number_start <= 0 || track_number_stop <= 0 || track_number_start > (long)m_lAudioTrackCount || track_number_stop > (long)m_lAudioTrackCount || SysStringLen(out_filename) == 0 ||
//		encoding_rate < EWMProfile_V70_6VoiceAudio || encoding_rate > EWMProfile_V70_128Audio || track_number_start > track_number_stop)
//	{
//		CComBSTR bstrError(L"Invalid Arguments.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
//	}
//
//	CComBSTR bstrDrive(L"\\\\.\\");
//	bstrDrive.Append(m_bstrDrive);
//	bstrDrive.Append(L":");
//	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hCD == INVALID_HANDLE_VALUE) {
//		CComBSTR bstrError(L"CreateFile Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	// Start WMA Setup
//	CComPtr<IWMWriter>	pIWMWriter;
//	HRESULT hr = WMCreateWriter(NULL, &pIWMWriter);
//	if (FAILED(hr)) {
//		CComBSTR bstrError(L"WMCreateWriter Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	switch (encoding_rate)
//	{
//	case EWMProfile_V70_6VoiceAudio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_6VoiceAudio);
//		break;
//	case EWMProfile_V70_288FMRadioMono:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioMono);
//		break;
//	case EWMProfile_V70_288FMRadioStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioStereo);
//		break;
//	case EWMProfile_V70_56DialUpStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_56DialUpStereo);
//		break;
//	case EWMProfile_V70_64AudioISDN:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64AudioISDN);
//		break;
//	case EWMProfile_V70_64Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64Audio);
//		break;
//	case EWMProfile_V70_96Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);
//		break;
//	case EWMProfile_V70_128Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_128Audio);
//		break;
//	default:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);		// default to 96 kbit/s
//		break;
//	};
//
//	CComPtr<IWMWriterFileSink>	pIWMFileSink;
//	hr = WMCreateWriterFileSink(&pIWMFileSink);
//	hr = pIWMFileSink->Open(out_filename);
//
//	CComPtr<IWMWriterAdvanced>	pIWMWriterAdvanced;
//	hr = pIWMWriter->QueryInterface(IID_IWMWriterAdvanced, (void**)&pIWMWriterAdvanced);
//	hr = pIWMWriterAdvanced->AddSink(pIWMFileSink);
//
//	DWORD dwInputCount(0);
//	hr = pIWMWriter->GetInputCount(&dwInputCount);
//	for (DWORD dw = 0; dw < dwInputCount; dw++) {
//		CComPtr<IWMInputMediaProps> pIWMInputMediaProps;
//		hr = pIWMWriter->GetInputProps(dw, &pIWMInputMediaProps);
//
//		WAVEFORMATEX wfex;
//		wfex.cbSize = 0;
//		wfex.nAvgBytesPerSec = 176400;//wh.nAvgBytesPerSec;
//		wfex.nBlockAlign = 4;//wh.wBlockAlign;
//		wfex.nChannels = 2;//wh.wChannels;
//		wfex.nSamplesPerSec = 44100;//wh.nSamplesPrSec ;
//		wfex.wBitsPerSample = 16;//wh.wBitsPerSample;
//		wfex.wFormatTag = WAVE_FORMAT_PCM;
//
//		WM_MEDIA_TYPE wm_media_type;
//		wm_media_type.bFixedSizeSamples = TRUE;
//		wm_media_type.bTemporalCompression = FALSE;
//		wm_media_type.cbFormat = sizeof(WAVEFORMATEX);
//		wm_media_type.formattype = WMFORMAT_WaveFormatEx;
//		wm_media_type.lSampleSize = 4;//wh.wBlockAlign;
//		wm_media_type.majortype = WMMEDIATYPE_Audio;
//		wm_media_type.pbFormat = (BYTE *)&wfex;
//		wm_media_type.pUnk = NULL;
//		wm_media_type.subtype = WMMEDIASUBTYPE_PCM;
//
//		hr = pIWMInputMediaProps->SetMediaType(&wm_media_type);
//
//		hr = pIWMWriter->SetInputProps(dw, pIWMInputMediaProps);
//	}
//
//	// Add header info if given.
//	if (pIKKSWMHeaderInfo != NULL) {
//		CComPtr<IWMHeaderInfo> pIWMHeaderInfo;
//		hr = pIWMWriter->QueryInterface(IID_IWMHeaderInfo, (VOID **)&pIWMHeaderInfo);
//		hr = pIKKSWMHeaderInfo->SaveToInterface(pIWMHeaderInfo);
//	}
//
//	// Begin Writing
//	hr = pIWMWriter->BeginWriting();
//
//	// End WMA Setup
//
//	DWORD dwNotUsed;
//
//	// Lock the compact disc in the CD-ROM drive to prevent accidental
//	// removal while reading from it.
//	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
//	//pmrLockCDROM.PreventMediaRemoval = TRUE;
//	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	
//
//	// Get sector size of compact disc
//	DISK_GEOMETRY  dgCDROM;
//	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
//		long lTrackIndex = ConvertTrackNumberToIndex(track_number_start);
//		long lTrackIndex2 = ConvertTrackNumberToIndex(track_number_stop);
//
//		DWORD dwSec = ((m_TOC.tracks[lTrackIndex2 + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex2 + 1].addr[2])
//			- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
//		double dFrameTime = m_TOC.tracks[lTrackIndex2 + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];// - m_TOC.tracks[0].addr[3];
//		dFrameTime *= (1000 / 75);	// ms difference				
//
//		if (IsTrackIndexLastToMultisession(lTrackIndex2)) {
//			dwSec -= MULTISESSION_TIMEOUT;
//		}
//
//		double dDataSize = dFrameTime + (dwSec * 1000);
//		dDataSize *= 176400;
//		dDataSize /= 1000;
//
//		DWORD dwDataSize = dDataSize;
//
//		// Allocate buffer to hold sectors from compact disc. Note that
//		// the buffer will be allocated on a sector boundary because the
//		// allocation granularity is larger than the size of a sector on a
//		// compact disk.
//		LPBYTE lpSector;
//
//		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
//		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
//		dRelation /= RAW_SECTOR_DATA_SIZE;
//		dRelation++;
//
//		DWORD  dwSize = dRelation; // 2-KB boundary 
//		dwSize *= 2048;
//
//		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
//
//		double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2] - 2);
//		//- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);		
//
//		double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
//		dTemp *= (1000 / 75);
//
//		dOffset = (dOffset * 1000) + dTemp;
//
//		dOffset /= 1000;
//		dOffset *= 176400;
//		dOffset /= 2352;
//		dOffset *= 2048;
//
//		DWORD dwOffset = dOffset;
//
//		DWORD dwWritten = 0;
//		QWORD qwSample(0);
//		bool bFinito(false);
//		DWORD dwSteps = dwDataSize / 100;
//		do {
//			RAW_READ_INFO rri = { 0 };
//			rri.TrackMode = CDDA;
//			rri.SectorCount = RAW_SECTOR_COUNT;
//			rri.DiskOffset.LowPart = dwOffset;
//
//			BOOL bResult(FALSE);
//			if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
//				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//			}
//			else {
//				DWORD dwRestSize = dwDataSize - dwWritten;
//				double dSectorCount = dwRestSize;
//				dSectorCount /= 2352;
//				DWORD dwSectorCount = dSectorCount;
//				if (dSectorCount > dwSectorCount && track_number_stop < (long)m_lAudioTrackCount) {
//					dwSectorCount++;
//				}
//				rri.SectorCount = dwSectorCount;
//				bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//				bFinito = true;
//			}
//			if (bResult == FALSE && dwWritten != 0) {
//				VirtualFree(lpSector, 0, MEM_RELEASE);
//				CloseHandle(hCD);
//				CComBSTR bstr(L"Drive [");
//				bstr.AppendBSTR(m_bstrDrive);
//				bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
//				m_bstrAsyncExtractionErrorMessage = bstr;
//				this->m_bAsyncExtractionSucceeded = false;
//				this->m_bAsyncExtractionFinsihed = true;
//				return Error(bstr, IID_INCFAudioCD, E_FAIL);
//			}
//			else if (dwWritten + dwNotUsed >= dwDataSize) {
//				CComPtr<INSSBuffer> pINSSBuffer;
//				BYTE *pBuffer = NULL;
//				hr = pIWMWriter->AllocateSample(dwDataSize - dwWritten, &pINSSBuffer);
//				hr = pINSSBuffer->GetBuffer(&pBuffer);
//				memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwDataSize - dwWritten);
//				hr = pINSSBuffer->SetLength(dwDataSize - dwWritten);
//
//				hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//				double dData = dwDataSize - dwWritten;
//				dData /= 176400;
//				dData *= 10000000;
//				qwSample += dData;
//
//				//				hr = pIWMWriter->Flush( );
//				//				hr = pIWMWriter->EndWriting( );
//
//				dwWritten = dwDataSize;	// finished
//			}
//			else {
//				CComPtr<INSSBuffer> pINSSBuffer;
//				BYTE *pBuffer = NULL;
//				hr = pIWMWriter->AllocateSample(dwNotUsed, &pINSSBuffer);
//				hr = pINSSBuffer->GetBuffer(&pBuffer);
//				memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwNotUsed);
//				hr = pINSSBuffer->SetLength(dwNotUsed);
//
//				hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//				double dData = dwNotUsed;
//				dData /= 176400;
//				dData *= 10000000;
//				qwSample += dData;
//
//				dwWritten += dwNotUsed;
//				double d = dwWritten / 2352;
//				d *= 2048;
//				dwOffset = d + dOffset;//dwWritten;
//
//				if (bFinito == true) {
//					dwWritten = dwDataSize;
//				}
//			}
//			m_lAsyncProgressValue = (dwWritten / dwSteps);
//		} while (dwWritten < dwDataSize);
//
//		hr = pIWMWriter->Flush();
//		hr = pIWMWriter->EndWriting();
//
//		VirtualFree(lpSector, 0, MEM_RELEASE);
//
//		// Unlock the disc in the CD-ROM drive.
//		//pmrLockCDROM.PreventMediaRemoval = FALSE;		
//		//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
//	}
//
//	CloseHandle(hCD);
//
//	this->m_bAsyncExtractionSucceeded = true;
//	this->m_bAsyncExtractionFinsihed = true;
//	m_lAsyncProgressValue = 100;
//
//	return S_OK;
//}

STDMETHODIMP CAudioCD::get_ExtractionFinished( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr) 
	{
		return Error(L"Argument status invalid.", IID_INCFAudioCD, E_FAIL);
	}

	*status = (m_bAsyncExtractionFinsihed == true) ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CAudioCD::get_ExtractionSucceeded( /*[out, retval]*/ VARIANT_BOOL *status)
{
	if (status == nullptr)
	{
		return Error(L"Argument status invalid.", IID_INCFAudioCD, E_FAIL);
	}

	*status = (m_bAsyncExtractionSucceeded == true) ? VARIANT_TRUE : VARIANT_FALSE;
	return S_OK;
}

STDMETHODIMP CAudioCD::get_ExtractionErrorMessage( /*[out, retval]*/ BSTR *error_message)
{
	if (error_message == nullptr)
	{
		return Error(L"Argument error_message invalid.", IID_INCFAudioCD, E_FAIL);
	}

	*error_message = m_bstrAsyncExtractionErrorMessage.Copy();
	return S_OK;
}

STDMETHODIMP CAudioCD::GetExtractionProgressPercent( /*[out, retval]*/ long *progress_value)
{
	if (progress_value == nullptr)
	{
		return Error(L"Argument progress_value invalid.", IID_INCFAudioCD, E_FAIL);
	}

	*progress_value = m_lAsyncProgressValue;
	return S_OK;
}



//DWORD WINAPI ExtractTrackRangeFromListThread(PVOID pvParam)
//{
//	ExtractTrackRangeFromList_Param *pparam = reinterpret_cast<ExtractTrackRangeFromList_Param*>(pvParam);
//
//	HRESULT hr = pparam->pAudioCD->ExtractTrackRangeFromListWork(pparam->pIKKSList, pparam->out_filename, pparam->bAsync);
//
//	SysFreeString(pparam->out_filename);
//	delete pparam;
//
//	return 0;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackRangeFromList( /*[in]*/ IKKSList *pIKKSList, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	this->m_bAsyncExtractionFinsihed = false;
//	this->m_bAsyncExtractionSucceeded = false;
//	this->m_bstrAsyncExtractionErrorMessage.Empty();
//	this->m_lAsyncProgressValue = 0;
//
//	if (bAsync == VARIANT_FALSE) {
//		return ExtractTrackRangeFromListWork(pIKKSList, out_filename, bAsync);
//	}
//
//	ExtractTrackRangeFromList_Param *pparam = new ExtractTrackRangeFromList_Param();
//	pparam->out_filename = CComBSTR(out_filename).Copy();
//	pparam->pAudioCD = this;
//	pparam->pIKKSList = pIKKSList;
//	pparam->bAsync = bAsync;
//
//	DWORD dwExtractTrackThreadID(0);
//	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackRangeFromListThread, pparam, 0, &dwExtractTrackThreadID);
//
//	return S_OK;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackRangeFromListWork( /*[in]*/ IKKSList *pIKKSList, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	if (m_bLoaded == false) {
//		CComBSTR bstrError(L"A CD Must Be Loaded First.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//	else if (SysStringLen(out_filename) == 0) {
//		CComBSTR bstrError(L"Invalid Arguments.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
//	}
//
//	long lSize(0);
//	pIKKSList->get_Size(&lSize);
//	if (lSize == 0) {
//		m_bAsyncExtractionSucceeded = true;
//		m_bAsyncExtractionFinsihed = true;
//		return S_OK;
//	}
//
//	HANDLE hFile = CreateFile(out_filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hFile == INVALID_HANDLE_VALUE) {
//		CComBSTR bstrError(L"CreateFile Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	CComBSTR bstrDrive(L"\\\\.\\");
//	bstrDrive.Append(m_bstrDrive);
//	bstrDrive.Append(L":");
//	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hCD == INVALID_HANDLE_VALUE) {
//		CloseHandle(hFile);
//		DeleteFile(out_filename);
//		CComBSTR bstrError(L"CreateFile Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	DWORD dwNotUsed;
//
//
//
//	// Lock the compact disc in the CD-ROM drive to prevent accidental
//	// removal while reading from it.
//	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
//	//pmrLockCDROM.PreventMediaRemoval = TRUE;
//	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	
//
//	// Get sector size of compact disc
//	DISK_GEOMETRY  dgCDROM;
//	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
//		// Allocate buffer to hold sectors from compact disc. Note that
//		// the buffer will be allocated on a sector boundary because the
//		// allocation granularity is larger than the size of a sector on a
//		// compact disk.
//		LPBYTE lpSector;
//
//		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
//		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
//		dRelation /= RAW_SECTOR_DATA_SIZE;
//		dRelation++;
//
//		DWORD  dwSize = dRelation; // 2-KB boundary 
//		dwSize *= 2048;
//
//		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
//
//		double dPartValue = 100;
//		dPartValue /= lSize;
//		double dNewValue = 0;
//		QWORD qwSample(0);
//
//		wave_header wh = { 0 };
//		DWORD dwX;
//		BOOL bResult = WriteFile(hFile, &wh, sizeof(wave_header), &dwX, NULL);
//		DWORD dwTotalDataSize(0);
//
//		for (long l = 0; l < lSize; l++) {
//			CComVariant vtItem;
//			pIKKSList->GetItemByIndex(l, &vtItem);
//			vtItem.ChangeType(VT_UI4);
//			long lTrackIndex = ConvertTrackNumberToIndex(vtItem.ulVal);
//
//			DWORD dwSec = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
//				- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
//
//			double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];
//			dFrameTime *= (1000 / 75);	// ms difference				
//
//			if (IsTrackIndexLastToMultisession(lTrackIndex)) {
//				dwSec -= MULTISESSION_TIMEOUT;
//			}
//
//			double dDataSize = dFrameTime + (dwSec * 1000);
//			dDataSize *= 176400;
//			dDataSize /= 1000;
//
//			DWORD dwDataSize = dDataSize;
//			dwTotalDataSize += dwDataSize;
//
//			double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2] - 2);
//			//- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);
//			double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
//			dTemp *= (1000 / 75);
//
//			dOffset = (dOffset * 1000) + dTemp;
//
//			dOffset /= 1000;
//			dOffset *= 176400;
//			dOffset /= 2352;
//			dOffset *= 2048;
//
//			DWORD dwOffset = dOffset;
//
//			DWORD dwWritten = 0;
//			bool bFinito(false);
//			double dSteps = dwDataSize;
//			dSteps /= dPartValue;
//			do {
//				RAW_READ_INFO rri = { 0 };
//				rri.TrackMode = CDDA;
//				rri.SectorCount = RAW_SECTOR_COUNT;
//				rri.DiskOffset.LowPart = dwOffset;
//
//				if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
//					bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//				}
//				else {
//					DWORD dwRestSize = dwDataSize - dwWritten;
//					double dSectorCount = dwRestSize;
//					dSectorCount /= 2352;
//					DWORD dwSectorCount = dSectorCount;
//					if (dSectorCount > dwSectorCount && lTrackIndex + 1 < (long)m_lAudioTrackCount) {
//						dwSectorCount++;
//					}
//					rri.SectorCount = dwSectorCount;
//					bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//					bFinito = true;
//				}
//				if (bResult == FALSE && dwWritten == 0) {
//					VirtualFree(lpSector, 0, MEM_RELEASE);
//					CloseHandle(hCD);
//					CloseHandle(hFile);
//					//DeleteFile(out_filename);
//					CComBSTR bstr(L"Drive [");
//					bstr.AppendBSTR(m_bstrDrive);
//					bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
//					m_bstrAsyncExtractionErrorMessage = bstr;
//					this->m_bAsyncExtractionSucceeded = false;
//					this->m_bAsyncExtractionFinsihed = true;
//					return Error(bstr, IID_INCFAudioCD, E_FAIL);
//				}
//				else if (dwWritten + dwNotUsed > dwDataSize) {
//					WriteFile(hFile, lpSector, dwDataSize - dwWritten, &dwNotUsed, NULL);
//					dwWritten = dwDataSize;	// finished
//				}
//				else {
//					WriteFile(hFile, lpSector, dwNotUsed, &dwNotUsed, NULL);
//					dwWritten += dwNotUsed;
//					double d = dwWritten;
//					d /= 2352;
//					d *= 2048;
//					d += dOffset;
//					dwOffset = d;
//
//					if (bFinito == true) {
//						DWORD dwRestSize = dwDataSize - dwWritten;
//						memset(lpSector, 0, dwRestSize);
//						WriteFile(hFile, lpSector, dwRestSize, &dwRestSize, NULL);
//						dwWritten = dwDataSize;
//					}
//				}
//				double dVal = dNewValue;
//				dVal += (dwWritten / dSteps);
//				m_lAsyncProgressValue = dVal;
//			} while (dwWritten < dwDataSize);
//			m_lAsyncProgressValue = dPartValue*(l + 1);
//			dNewValue = dPartValue*(l + 1);
//			bFinito = false;
//		}//for
//
//		//
//		// Write out wave header
//		//		
//		InitWaveHeader(&wh, dwTotalDataSize);
//		SetFilePointer(hFile, 0, 0, FILE_BEGIN);
//		bResult = WriteFile(hFile, &wh, sizeof(wave_header), &dwX, NULL);
//
//		VirtualFree(lpSector, 0, MEM_RELEASE);
//
//		// Unlock the disc in the CD-ROM drive.
//		//pmrLockCDROM.PreventMediaRemoval = FALSE;		
//		//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
//	}
//
//	CloseHandle(hCD);
//
//	CloseHandle(hFile);
//
//	this->m_bAsyncExtractionSucceeded = true;
//	this->m_bAsyncExtractionFinsihed = true;
//	m_lAsyncProgressValue = 100;
//
//	return S_OK;
//}
//
//DWORD WINAPI ExtractTrackRangeAndEncodeFromListThread(PVOID pvParam)
//{
//	ExtractTrackRangeAndEncodeFromList_Param *pparam = reinterpret_cast<ExtractTrackRangeAndEncodeFromList_Param*>(pvParam);
//
//	HRESULT hr = pparam->pAudioCD->ExtractTrackRangeAndEncodeFromListWork(pparam->encoding_rate, pparam->pIKKSList, pparam->pIKKSWMHeaderInfo, pparam->out_filename, pparam->bAsync);
//
//	SysFreeString(pparam->out_filename);
//	delete pparam;
//
//	return 0;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackRangeAndEncodeFromList( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ IKKSList *pIKKSList, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	this->m_bAsyncExtractionFinsihed = false;
//	this->m_bAsyncExtractionSucceeded = false;
//	this->m_bstrAsyncExtractionErrorMessage.Empty();
//	this->m_lAsyncProgressValue = 0;
//
//	if (bAsync == VARIANT_FALSE) {
//		return ExtractTrackRangeAndEncodeFromListWork(encoding_rate, pIKKSList, pIKKSWMHeaderInfo, out_filename, bAsync);
//	}
//
//	ExtractTrackRangeAndEncodeFromList_Param *pparam = new ExtractTrackRangeAndEncodeFromList_Param();
//	pparam->encoding_rate = encoding_rate;
//	pparam->out_filename = CComBSTR(out_filename).Copy();
//	pparam->pAudioCD = this;
//	pparam->pIKKSWMHeaderInfo = pIKKSWMHeaderInfo;
//	pparam->pIKKSList = pIKKSList;
//	pparam->bAsync = bAsync;
//
//	DWORD dwExtractTrackThreadID(0);
//	HANDLE hThread = CreateThread(NULL, 0, ExtractTrackRangeAndEncodeFromListThread, pparam, 0, &dwExtractTrackThreadID);
//
//	return S_OK;
//}
//
//STDMETHODIMP CAudioCD::ExtractTrackRangeAndEncodeFromListWork( /*[in]*/ EWM_ENCODING_RATE encoding_rate, /*[in]*/ IKKSList *pIKKSList, /*[in]*/ IKKSWMHeaderInfo *pIKKSWMHeaderInfo, /*[in]*/ BSTR out_filename, /*[in]*/ VARIANT_BOOL bAsync)
//{
//	if (m_bLoaded == false) {
//		CComBSTR bstrError(L"A CD Must Be Loaded First.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//	else if (SysStringLen(out_filename) == 0 || encoding_rate < EWMProfile_V70_6VoiceAudio || encoding_rate > EWMProfile_V70_128Audio || pIKKSList == NULL)
//	{
//		CComBSTR bstrError(L"Invalid Arguments.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_INVALIDARG);
//	}
//
//	long lSize(0);
//	pIKKSList->get_Size(&lSize);
//	if (lSize == 0) {
//		m_bAsyncExtractionSucceeded = true;
//		m_bAsyncExtractionFinsihed = true;
//		return S_OK;
//	}
//
//	CComBSTR bstrDrive(L"\\\\.\\");
//	bstrDrive.Append(m_bstrDrive);
//	bstrDrive.Append(L":");
//	HANDLE hCD = CreateFile(bstrDrive, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hCD == INVALID_HANDLE_VALUE) {
//		CComBSTR bstrError(L"CreateFile Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	// Start WMA Setup
//	CComPtr<IWMWriter>	pIWMWriter;
//	HRESULT hr = WMCreateWriter(NULL, &pIWMWriter);
//	if (FAILED(hr)) {
//		CComBSTR bstrError(L"WMCreateWriter Failed.");
//		m_bstrAsyncExtractionErrorMessage = bstrError;
//		this->m_bAsyncExtractionSucceeded = false;
//		this->m_bAsyncExtractionFinsihed = true;
//		return Error(bstrError, IID_INCFAudioCD, E_FAIL);
//	}
//
//	switch (encoding_rate)
//	{
//	case EWMProfile_V70_6VoiceAudio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_6VoiceAudio);
//		break;
//	case EWMProfile_V70_288FMRadioMono:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioMono);
//		break;
//	case EWMProfile_V70_288FMRadioStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_288FMRadioStereo);
//		break;
//	case EWMProfile_V70_56DialUpStereo:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_56DialUpStereo);
//		break;
//	case EWMProfile_V70_64AudioISDN:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64AudioISDN);
//		break;
//	case EWMProfile_V70_64Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_64Audio);
//		break;
//	case EWMProfile_V70_96Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);
//		break;
//	case EWMProfile_V70_128Audio:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_128Audio);
//		break;
//	default:
//		hr = pIWMWriter->SetProfileByID(WMProfile_V70_96Audio);		// default to 96 kbit/s
//		break;
//	};
//
//	CComPtr<IWMWriterFileSink>	pIWMFileSink;
//	hr = WMCreateWriterFileSink(&pIWMFileSink);
//	hr = pIWMFileSink->Open(out_filename);
//
//	CComPtr<IWMWriterAdvanced>	pIWMWriterAdvanced;
//	hr = pIWMWriter->QueryInterface(IID_IWMWriterAdvanced, (void**)&pIWMWriterAdvanced);
//	hr = pIWMWriterAdvanced->AddSink(pIWMFileSink);
//
//	DWORD dwInputCount(0);
//	hr = pIWMWriter->GetInputCount(&dwInputCount);
//	for (DWORD dw = 0; dw < dwInputCount; dw++) {
//		CComPtr<IWMInputMediaProps> pIWMInputMediaProps;
//		hr = pIWMWriter->GetInputProps(dw, &pIWMInputMediaProps);
//
//		WAVEFORMATEX wfex;
//		wfex.cbSize = 0;
//		wfex.nAvgBytesPerSec = 176400;//wh.nAvgBytesPerSec;
//		wfex.nBlockAlign = 4;//wh.wBlockAlign;
//		wfex.nChannels = 2;//wh.wChannels;
//		wfex.nSamplesPerSec = 44100;//wh.nSamplesPrSec ;
//		wfex.wBitsPerSample = 16;//wh.wBitsPerSample;
//		wfex.wFormatTag = WAVE_FORMAT_PCM;
//
//		WM_MEDIA_TYPE wm_media_type;
//		wm_media_type.bFixedSizeSamples = TRUE;
//		wm_media_type.bTemporalCompression = FALSE;
//		wm_media_type.cbFormat = sizeof(WAVEFORMATEX);
//		wm_media_type.formattype = WMFORMAT_WaveFormatEx;
//		wm_media_type.lSampleSize = 4;//wh.wBlockAlign;
//		wm_media_type.majortype = WMMEDIATYPE_Audio;
//		wm_media_type.pbFormat = (BYTE *)&wfex;
//		wm_media_type.pUnk = NULL;
//		wm_media_type.subtype = WMMEDIASUBTYPE_PCM;
//
//		hr = pIWMInputMediaProps->SetMediaType(&wm_media_type);
//
//		hr = pIWMWriter->SetInputProps(dw, pIWMInputMediaProps);
//	}
//
//	// Add header info if given.
//	if (pIKKSWMHeaderInfo != NULL) {
//		CComPtr<IWMHeaderInfo> pIWMHeaderInfo;
//		hr = pIWMWriter->QueryInterface(IID_IWMHeaderInfo, (VOID **)&pIWMHeaderInfo);
//		hr = pIKKSWMHeaderInfo->SaveToInterface(pIWMHeaderInfo);
//	}
//
//	// Begin Writing
//	hr = pIWMWriter->BeginWriting();
//
//	// End WMA Setup
//
//	DWORD dwNotUsed;
//
//	// Lock the compact disc in the CD-ROM drive to prevent accidental
//	// removal while reading from it.
//	//PREVENT_MEDIA_REMOVAL pmrLockCDROM;      
//	//pmrLockCDROM.PreventMediaRemoval = TRUE;
//	//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      	
//
//	// Get sector size of compact disc
//	DISK_GEOMETRY  dgCDROM;
//	if (DeviceIoControl(hCD, IOCTL_CDROM_GET_DRIVE_GEOMETRY, NULL, 0, &dgCDROM, sizeof(dgCDROM), &dwNotUsed, NULL)) {
//		// Allocate buffer to hold sectors from compact disc. Note that
//		// the buffer will be allocated on a sector boundary because the
//		// allocation granularity is larger than the size of a sector on a
//		// compact disk.
//		LPBYTE lpSector;
//
//		double dRelation = RAW_SECTOR_SIZE / RAW_SECTOR_DATA_SIZE;
//		dRelation *= RAW_SECTOR_SIZE * RAW_SECTOR_COUNT;
//		dRelation /= RAW_SECTOR_DATA_SIZE;
//		dRelation++;
//
//		DWORD  dwSize = dRelation; // 2-KB boundary 
//		dwSize *= 2048;
//
//		lpSector = (LPBYTE)VirtualAlloc(NULL, dwSize, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
//
//		double dPartValue = 100;
//		dPartValue /= lSize;
//		double dNewValue = 0;
//		QWORD qwSample(0);
//		for (long l = 0; l < lSize; l++) {
//			CComVariant vtItem;
//			pIKKSList->GetItemByIndex(l, &vtItem);
//			vtItem.ChangeType(VT_UI4);
//			long lTrackIndex = ConvertTrackNumberToIndex(vtItem.ulVal);
//
//			DWORD dwSec = ((m_TOC.tracks[lTrackIndex + 1].addr[1] * 60) + m_TOC.tracks[lTrackIndex + 1].addr[2])
//				- ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2]);
//			double dFrameTime = m_TOC.tracks[lTrackIndex + 1].addr[3] - m_TOC.tracks[lTrackIndex].addr[3];// - m_TOC.tracks[0].addr[3];;
//			dFrameTime *= (1000 / 75);	// ms difference				
//
//			if (IsTrackIndexLastToMultisession(lTrackIndex)) {
//				dwSec -= MULTISESSION_TIMEOUT;
//			}
//
//			double dDataSize = dFrameTime + (dwSec * 1000);
//			dDataSize *= 176400;
//			dDataSize /= 1000;
//
//			DWORD dwDataSize = dDataSize;
//
//			double dOffset = ((m_TOC.tracks[lTrackIndex].addr[1] * 60) + m_TOC.tracks[lTrackIndex].addr[2] - 2);
//			//- ((m_TOC.tracks[0].addr[1] * 60) + m_TOC.tracks[0].addr[2]);		
//
//			double dTemp = m_TOC.tracks[lTrackIndex].addr[3] - m_TOC.tracks[0].addr[3];
//			dTemp *= (1000 / 75);
//
//			dOffset = (dOffset * 1000) + dTemp;
//
//			dOffset /= 1000;
//			dOffset *= 176400;
//			dOffset /= 2352;
//			dOffset *= 2048;
//
//			DWORD dwOffset = dOffset;
//
//			DWORD dwWritten = 0;
//			bool bFinito(false);
//			double dSteps = dPartValue;
//			dSteps /= dwDataSize;
//			do {
//				RAW_READ_INFO rri = { 0 };
//				rri.TrackMode = CDDA;
//				rri.SectorCount = RAW_SECTOR_COUNT;
//				rri.DiskOffset.LowPart = dwOffset;
//
//				BOOL bResult(FALSE);
//				if ((RAW_SECTOR_SIZE * RAW_SECTOR_COUNT) <= (dwDataSize - dwWritten)) {
//					bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//				}
//				else {
//					DWORD dwRestSize = dwDataSize - dwWritten;
//					double dSectorCount = dwRestSize;
//					dSectorCount /= 2352;
//					DWORD dwSectorCount = dSectorCount;
//					if (dSectorCount > dwSectorCount && lTrackIndex + 1 < (long)m_lAudioTrackCount) {
//						dwSectorCount++;
//					}
//					rri.SectorCount = dwSectorCount;
//					bResult = DeviceIoControl(hCD, IOCTL_CDROM_RAW_READ, &rri, sizeof(rri), lpSector, dwSize, &dwNotUsed, NULL);
//					bFinito = true;
//				}
//				if (bResult == FALSE && dwWritten != 0) {
//					VirtualFree(lpSector, 0, MEM_RELEASE);
//					CloseHandle(hCD);
//					CComBSTR bstr(L"Drive [");
//					bstr.AppendBSTR(m_bstrDrive);
//					bstr.Append(L":] Does Not Support CDDA. Extraction Failed.");
//					m_bstrAsyncExtractionErrorMessage = bstr;
//					this->m_bAsyncExtractionSucceeded = false;
//					this->m_bAsyncExtractionFinsihed = true;
//					return Error(bstr, IID_INCFAudioCD, E_FAIL);
//				}
//				else if (dwWritten + dwNotUsed >= dwDataSize) {
//					CComPtr<INSSBuffer> pINSSBuffer;
//					BYTE *pBuffer = NULL;
//					hr = pIWMWriter->AllocateSample(dwDataSize - dwWritten, &pINSSBuffer);
//					hr = pINSSBuffer->GetBuffer(&pBuffer);
//					memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwDataSize - dwWritten);
//					hr = pINSSBuffer->SetLength(dwDataSize - dwWritten);
//
//					hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//					double dData = dwDataSize - dwWritten;
//					dData /= 176400;
//					dData *= 10000000;
//					qwSample += dData;
//
//					//				hr = pIWMWriter->Flush( );
//					//				hr = pIWMWriter->EndWriting( );
//
//					dwWritten = dwDataSize;	// finished
//				}
//				else {
//					CComPtr<INSSBuffer> pINSSBuffer;
//					BYTE *pBuffer = NULL;
//					hr = pIWMWriter->AllocateSample(dwNotUsed, &pINSSBuffer);
//					hr = pINSSBuffer->GetBuffer(&pBuffer);
//					memcpy(pBuffer, (LPVOID)((DWORD)lpSector), dwNotUsed);
//					hr = pINSSBuffer->SetLength(dwNotUsed);
//
//					hr = pIWMWriter->WriteSample(0, qwSample, 0, pINSSBuffer);
//
//					double dData = dwNotUsed;
//					dData /= 176400;
//					dData *= 10000000;
//					qwSample += dData;
//
//					dwWritten += dwNotUsed;
//					double d = dwWritten / 2352;
//					d *= 2048;
//					dwOffset = d + dOffset;//dwWritten;
//
//					if (bFinito == true) {
//						dwWritten = dwDataSize;
//					}
//				}
//				double dValue = dNewValue;
//				dValue += (dwWritten*dSteps);
//				m_lAsyncProgressValue = dValue;
//			} while (dwWritten < dwDataSize);
//
//			m_lAsyncProgressValue = (dPartValue*(l + 1));
//			dNewValue = (dPartValue*(l + 1));
//			bFinito = false;
//			// Unlock the disc in the CD-ROM drive.
//			//pmrLockCDROM.PreventMediaRemoval = FALSE;
//			//DeviceIoControl( hCD, IOCTL_CDROM_MEDIA_REMOVAL, &pmrLockCDROM, sizeof(pmrLockCDROM), NULL, 0, &dwNotUsed, NULL);      		
//		}// for
//
//		hr = pIWMWriter->Flush();
//		hr = pIWMWriter->EndWriting();
//
//		VirtualFree(lpSector, 0, MEM_RELEASE);
//	}// if
//
//	CloseHandle(hCD);
//
//	m_bAsyncExtractionSucceeded = true;
//	m_bAsyncExtractionFinsihed = true;
//	m_lAsyncProgressValue = 100;
//
//	return S_OK;
//}