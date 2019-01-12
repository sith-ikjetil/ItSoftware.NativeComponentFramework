// ItSoftware.NCF.TestApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "../ItSoftware.NCF.System/ItSoftwareNCFSystem_i.h"
#include "../ItSoftware.NCF.System/ItSoftwareNCFSystem_i.h"
#include "../ItSoftware.NCF.Audio/ItSoftwareNCFAudio_i.h"
#include "../ItSoftware.NCF.IO/ItSoftwareNCFIO_i.h"
#include "../Include/itsoftware-com.h"
#include "../Include/itsoftware.h"
#include "CDemo.h"

#include <iostream>
#include <string>

using namespace std;
using namespace ItSoftware;
using namespace ItSoftware::COM;

int TestNetwork();
int TestUrl();
int TestAudioPlayer();
int TestDirectory();
int TestMemoryStream();
int TestFile();
int TestWavEncoder();
int TestWmaEncoder();
int TestAacEncoder();
int TestMp3Encoder();
int TestString();
int TestAudioCD();
int TestGuid();
void PrintMenu();
void TestDemo();

int _tmain(int argc, _TCHAR* argv[])
{
	//OSVERSIONINFOEX os = { 0 };
	//os.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
	//os.dwMajorVersion = 5;
	//os.dwMinorVersion = 1;

	//DWORD dwlConditionMask = 0;
	//int op = VER_GREATER_EQUAL;
	//VER_SET_CONDITION(dwlConditionMask, VER_MAJORVERSION, op);	
	//VER_SET_CONDITION(dwlConditionMask, VER_MINORVERSION, op);

	//BOOL bResult = VerifyVersionInfo(&os, VER_MAJORVERSION|VER_MINORVERSION, dwlConditionMask);
	//if (!bResult) {
	//	DWORD dwError = GetLastError();
	//	wchar_t wszBuffer[1024];
	//	FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), 0, wszBuffer, 1024, NULL);
	//	wcout << wszBuffer << endl;
	//}
	//if (os.dwMajorVersion >= 5) {
	//	//m_Interfaces[CDINTERFACE_SPTI].m_bAvailable = true;
	//	//m_Interfaces[CDINTERFACE_IOCTL_CDROM].m_bAvailable = true;
	//}

	// SET LOCAL CONSOLE OUTPUT
	char* locale = setlocale(LC_ALL, "nb-NO"); // Get the CRT's current locale.
	std::locale lollocale(locale);
	std::wcout.imbue(lollocale); // Now 

								 // INITIALIZE COM
	ComRuntime runtime(ComApartment::SingleThreaded);

	TRACE(L"Com Initialized", 23, L"hello World");

	wchar_t wcsSelection[80];
	int returnValue = 0;
	do
	{
		PrintMenu();
		wcin.getline(wcsSelection, 80);

		try
		{
			if (wcscmp(wcsSelection, L"1") == 0) {
				returnValue = TestAudioCD();
			}
			else if (wcscmp(wcsSelection, L"2") == 0) {
				returnValue = TestGuid();
			}
			else if (wcscmp(wcsSelection, L"3") == 0) {
				returnValue = TestString();
			}
			else if (wcscmp(wcsSelection, L"4") == 0) {
				returnValue = TestMp3Encoder();
			}
			else if (wcscmp(wcsSelection, L"5") == 0) {
				returnValue = TestAacEncoder();
			}
			else if (wcscmp(wcsSelection, L"6") == 0) {
				returnValue = TestWmaEncoder();
			}
			else if (wcscmp(wcsSelection, L"7") == 0) {
				returnValue = TestWavEncoder();
			}
			else if (wcscmp(wcsSelection, L"8") == 0) {
				returnValue = TestFile();
			}
			else if (wcscmp(wcsSelection, L"9") == 0) {
				returnValue = TestMemoryStream();
			}
			else if (wcscmp(wcsSelection, L"10") == 0) {
				returnValue = TestDirectory();
			}
			else if (wcscmp(wcsSelection, L"11") == 0) {
				returnValue = TestAudioPlayer();
			}
			else if (wcscmp(wcsSelection, L"12") == 0)
			{
				returnValue = TestUrl();
			}
			else if (wcscmp(wcsSelection, L"13") == 0)
			{
				returnValue = TestNetwork();
			}
			else if (wcscmp(wcsSelection, L"99") == 0)
			{
				TestDemo();
			}
		}
		catch (ComException cex)
		{
			wcout << endl;
			wcout << cex.ToString().operator LPWSTR() << endl;
			wcout << endl;
		}
	} while (wcscmp(wcsSelection, L"0") != 0);


	return returnValue;
}

void PrintMenu()
{
	wcout << endl << endl << L"## M E N U ##" << endl;
	wcout << endl;
	wcout << L"0" << L"     Exit" << endl;
	wcout << L"-----------------" << endl;
	wcout << L"1" << L"     AudioCD" << endl;
	wcout << L"2" << L"     Guid" << endl;
	wcout << L"3" << L"     String" << endl;
	wcout << L"4" << L"     Mp3 Encoder" << endl;
	wcout << L"5" << L"     Aac Encoder" << endl;
	wcout << L"6" << L"     Wma Encoder" << endl;
	wcout << L"7" << L"     Wav Encoder" << endl;
	wcout << L"8" << L"     File" << endl;
	wcout << L"9" << L"     MemoryStream" << endl;
	wcout << L"10" << L"    Directory" << endl;
	wcout << L"11" << L"    Audio Player" << endl;
	wcout << L"12" << L"    URL" << endl;
	wcout << L"13" << L"    Network" << endl;
	wcout << L"-----------------" << endl;
	wcout << L"99" << L"    Demo" << endl;
	wcout << endl;
	wcout << L">: ";
}

int TestNetwork()
{
	CComPtr<INCFNetwork> pINCFNetwork;
	ComUtil::HR(pINCFNetwork.CoCreateInstance(L"ItSoftware.NCF.Network"));

	/*CComBSTR bstrRemoteName( L"\\\\NAS5B\\Files\\Movies" );
	CComBSTR bstrUsername( L"n5b" );
	CComBSTR bstrPassword( L"b78b78" );
	VARIANT_BOOL status = VARIANT_FALSE;
	wcout << L"Connecting to " << bstrRemoteName.operator LPWSTR() << L"...";
	ComUtil::HR( pINCFNetwork->ConnectUNC(bstrRemoteName,bstrUsername,bstrPassword,&status));
	if ( status == VARIANT_TRUE )
	{
	wcout << L"SUCCEEDED" << endl;

	CComPtr<INCFDirectory> pINCFDirectory;
	ComUtil::HR( pINCFDirectory.CoCreateInstance( L"ItSoftware.NCF.Directory" ) );
	CComPtr<INCFCollectionList> pINCFCollectionList;
	ComUtil::HR( pINCFDirectory->EnumerateDirectories( bstrRemoteName, &pINCFCollectionList ));

	long lSize( 0 );
	ComUtil::HR( pINCFCollectionList->get_Size( &lSize ) );
	for ( long l = 0; l < lSize; l++ )
	{
	CComVariant vt;
	ComUtil::HR(pINCFCollectionList->GetItemByIndex( l, &vt ));
	wcout << L"Found directory: " << CComBSTR( vt.bstrVal ).operator LPWSTR() << endl;
	}
	}
	else
	{
	wcout << L"FAILED" << endl;
	}
	*/
	CComPtr<INCFCollectionList> pINCFCollectionList;
	ComUtil::HR(pINCFNetwork->EnumerateAllNetworkResources(&pINCFCollectionList));

	long lSize(0);
	ComUtil::HR(pINCFCollectionList->get_Size(&lSize));

	wcout << L"## All Network Resources (" << lSize << L") ##################################" << endl;
	for (long l = 0; l < lSize; l++)
	{
		CComVariant vt;
		ComUtil::HR(pINCFCollectionList->GetItemByIndex(l, &vt));


		CComQIPtr<INCFNetworkResource> pINCFNetworkResource = vt.punkVal;
		if (pINCFNetworkResource)
		{
			CComBSTR bstrLocalName;
			ComUtil::HR(pINCFNetworkResource->get_LocalName(&bstrLocalName));

			CComBSTR bstrRemoteName;
			ComUtil::HR(pINCFNetworkResource->get_RemoteName(&bstrRemoteName));

			if (bstrLocalName)
			{
				wcout << bstrLocalName.operator LPWSTR() << L"\t";
			}
			else
			{
				wcout << L"\t";
			}
			wcout << bstrRemoteName.operator LPWSTR() << endl;
		}
	}

	wcout << endl << endl;

	pINCFCollectionList->Clear();
	pINCFCollectionList.Release();

	ComUtil::HR(pINCFNetwork->EnumerateNetworkShares(CComBSTR(L"localhost"), &pINCFCollectionList));

	lSize = 0;
	ComUtil::HR(pINCFCollectionList->get_Size(&lSize));

	wcout << L"## Network Disks (" << lSize << L") ##################################" << endl;

	wcout.setf(ios::left);
	wcout.width(20);
	wcout << L"# NetName ##";

	wcout.width(30);
	wcout << L"# Path ##";

	wcout.width(20);
	wcout << L"# Remark ##";
	wcout << endl;

	for (long l = 0; l < lSize; l++)
	{
		CComVariant vt;
		ComUtil::HR(pINCFCollectionList->GetItemByIndex(l, &vt));


		CComQIPtr<INCFNetworkShare> pINCFNetworkShare = vt.punkVal;
		if (pINCFNetworkShare)
		{
			CComBSTR bstrName;
			ComUtil::HR(pINCFNetworkShare->get_NetName(&bstrName));

			CComBSTR bstrPath;
			ComUtil::HR(pINCFNetworkShare->get_Path(&bstrPath));

			CComBSTR bstrRemark;
			ComUtil::HR(pINCFNetworkShare->get_Remark(&bstrRemark));


			wcout.width(20);
			wcout.setf(ios_base::left);
			if (bstrName)
			{
				wcout << bstrName.operator LPWSTR();
			}
			else
			{
				wcout << L"\t";
			}

			wcout.width(30);
			if (bstrPath)
			{
				wcout << bstrPath.operator LPWSTR();
			}
			else
			{
				wcout << L"\t";
			}

			wcout.width(20);
			if (bstrRemark)
			{
				wcout << bstrRemark.operator LPWSTR();
			}
			else
			{
				wcout << L"\t";
			}

			wcout << endl;
		}
	}

	return 0;
}

int TestUrl()
{
	CComPtr<INCFUrl> pINCFUrl;
	ComUtil::HR(pINCFUrl.CoCreateInstance(L"ItSoftware.NCF.Url"));

	CComBSTR bstrSource(L"æøå");

	CComBSTR bstrEncoded;
	ComUtil::HR(pINCFUrl->Encode(bstrSource, &bstrEncoded));

	CComBSTR bstrDecoded;
	ComUtil::HR(pINCFUrl->Decode(bstrEncoded, &bstrDecoded));

	wcout << L"Source:" << endl << bstrSource.operator LPWSTR() << endl;
	wcout << L"Encoded: " << endl << bstrEncoded.operator LPWSTR() << endl;
	wcout << L"Decoded: " << endl << bstrDecoded.operator LPWSTR() << endl;

	long l1(0);
	long l2(0);
	std::wstring s1(L"AZæøåA");
	//std::string s2( "æøå" );

	unsigned char* p1 = ItSoftware::Encoding::UTF8::ToBytes(s1, &l1);
	//unsigned char* p2 = ItSoftware::Encoding::UTF8::ToBytes( s2, &l2 );

	if (p1 != nullptr)
	{
		delete[] p1;
	}

	//if ( p2 != nullptr )
	//{
	//	delete[] p2;
	//}

	return 0;
}

int TestAudioPlayer()
{
	AudioPlayerStatus status1(AudioPlayerStatus::Uninitialized);
	AudioPlayerStatus status2(AudioPlayerStatus::Uninitialized);

	CComPtr<INCFAudioPlayer> pINCFAudioPlayer1;
	ComUtil::HR(pINCFAudioPlayer1.CoCreateInstance(L"ItSoftware.NCF.AudioPlayer"));
	ComUtil::HR(pINCFAudioPlayer1->Initialize());

	CComPtr<INCFAudioPlayer> pINCFAudioPlayer2;
	ComUtil::HR(pINCFAudioPlayer2.CoCreateInstance(L"ItSoftware.NCF.AudioPlayer"));
	ComUtil::HR(pINCFAudioPlayer2->Initialize());

	CComPtr<INCFString> pINCFString;
	ComUtil::HR(pINCFString.CoCreateInstance(L"ItSoftware.NCF.String"));


	ComUtil::HR(pINCFAudioPlayer1->Load(CComBSTR(L"C:\\Temp\\1-01 Song Of The Century.mp3")));
	do { Sleep(100); pINCFAudioPlayer1->get_Status(&status1); } while (status1 != AudioPlayerStatus::Loaded);
	ComUtil::HR(pINCFAudioPlayer1->Play());


	long lDuration1(0);
	ComUtil::HR(pINCFAudioPlayer1->GetDuration(&lDuration1));

	for (int i = 0; i < 40; i++)
	{
		long lTime1(0);
		ComUtil::HR(pINCFAudioPlayer1->GetPlayedDuration(&lTime1));

		CComBSTR bstrTime;
		ComUtil::HR(pINCFString->TimeToString(CComBSTR(L"[mm:ss.rr]"), lDuration1 - lTime1, &bstrTime));

		wcout << L"Playing #1 " << bstrTime.operator LPWSTR() << L"" << endl;
		Sleep(250);
	}

	ComUtil::HR(pINCFAudioPlayer1->Stop());




	//Sleep( 1000 );
	ComUtil::HR(pINCFAudioPlayer1->Load(CComBSTR(L"C:\\Temp\\Monster.m4a")));
	ComUtil::HR(pINCFAudioPlayer2->Load(CComBSTR(L"C:\\Temp\\GBenson.mp3")));
	//ComUtil::HR( pINCFAudioPlayer->Play( CComBSTR( L"C:\\Temp\\Inferno.m4a" ) ) );
	wcout << L"Loading Track #1 and Track #2";
	do { wcout << L"."; Sleep(100); pINCFAudioPlayer1->get_Status(&status1); pINCFAudioPlayer2->get_Status(&status2); } while (status1 != AudioPlayerStatus::Loaded && status2 != AudioPlayerStatus::Loaded);
	wcout << L" done." << endl;


	ComUtil::HR(pINCFAudioPlayer1->Play());
	wcout << L"Playing Track #1" << endl;
	ComUtil::HR(pINCFAudioPlayer2->Play());
	wcout << L"Playing Track #2" << endl;

	ComUtil::HR(pINCFAudioPlayer1->put_VolumeLevel(100));
	ComUtil::HR(pINCFAudioPlayer2->put_VolumeLevel(100));

	Sleep(3000);
	ComUtil::HR(pINCFAudioPlayer1->put_VolumeLevel(10));
	Sleep(3000);
	ComUtil::HR(pINCFAudioPlayer1->put_VolumeLevel(100));
	Sleep(3000);
	ComUtil::HR(pINCFAudioPlayer2->put_VolumeLevel(10));
	Sleep(3000);
	ComUtil::HR(pINCFAudioPlayer2->put_VolumeLevel(100));
	Sleep(3000);


	CComPtr<INCFAudioTag> pINCFAudioTag;
	ComUtil::HR(pINCFAudioPlayer1->get_Metadata(&pINCFAudioTag));

	CComBSTR bstrAuthor;
	ComUtil::HR(pINCFAudioTag->GetAuthor(&bstrAuthor));
	if (!bstrAuthor)
	{
		bstrAuthor = L"?";
	}

	CComBSTR bstrTitle;
	ComUtil::HR(pINCFAudioTag->GetTitle(&bstrTitle));
	if (!bstrTitle)
	{
		bstrTitle = L"?";
	}

	CComBSTR bstrYear;
	ComUtil::HR(pINCFAudioTag->GetYear(&bstrYear));
	if (!bstrYear)
	{
		bstrYear = L"?";
	}


	CComBSTR bstrOldTime;
	long lDuration(0);
	pINCFAudioPlayer1->GetDuration(&lDuration);
	AudioPlayerStatus status(AudioPlayerStatus::Uninitialized);
	do
	{
		long lTime(0);
		ComUtil::HR(pINCFAudioPlayer1->GetPlayedDuration(&lTime));

		if (lTime > 60000)
		{
			break;
		}

		CComBSTR bstrTime;
		ComUtil::HR(pINCFString->TimeToString(CComBSTR(L"[mm:ss.rr]"), lDuration - lTime, &bstrTime));
		//if ( i > 0 && bstrOldTime == bstrTime )
		//{
		//	VARIANT_BOOL vtMute( VARIANT_FALSE );
		//	ComUtil::HR( pINCFAudioPlayer->get_Mute( &vtMute ) );
		//}
		bstrOldTime = bstrTime;
		wcout << L"Playing " << bstrAuthor.operator LPWSTR() << L" - " << bstrTitle.operator LPWSTR() << L" - " << bstrYear.operator LPWSTR() << L" @ " << bstrTime.operator LPWSTR() << endl;
		Sleep(50);

		ComUtil::HR(pINCFAudioPlayer1->get_Status(&status));
	} while (status != AudioPlayerStatus::Stopped);



	ComUtil::HR(pINCFAudioPlayer1->Stop());
	ComUtil::HR(pINCFAudioPlayer2->Stop());

	wcout << L"Track #1 stopped." << endl << L"Track #2 stopped." << endl;

	ComUtil::HR(pINCFAudioPlayer1->Close());
	ComUtil::HR(pINCFAudioPlayer2->Close());

	wcout << L"NCFAudioPlayer 1 and 2 closed" << endl;

	return 0;
}
int TestDirectory()
{
	CComPtr<INCFDirectory> pINCFDirectory;
	ComUtil::HR(pINCFDirectory.CoCreateInstance(L"ItSoftware.NCF.Directory"));

	CComBSTR bstrTempDirectory;
	ComUtil::HR(pINCFDirectory->GetTempDirectory(&bstrTempDirectory));
	wcout << L"Temp Directory = " << bstrTempDirectory.operator LPWSTR() << endl;

	CComBSTR bstrProgramDataDirectory;
	ComUtil::HR(pINCFDirectory->GetProgramDataDirectory(&bstrProgramDataDirectory));
	wcout << L"ProgramData Directory = " << bstrProgramDataDirectory.operator LPWSTR() << endl;

	CComBSTR bstrValidDirectory(L"C:\\Temp");
	CComBSTR bstrInvalidDirectory(L"C:\\Temp\\YALLA");
	VARIANT_BOOL status(VARIANT_FALSE);
	ComUtil::HR(pINCFDirectory->Exists(bstrValidDirectory, &status));
	wcout << L"Valid Directory - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXIST") << endl;

	ComUtil::HR(pINCFDirectory->Exists(bstrInvalidDirectory, &status));
	wcout << L"Invalid Directory - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXIST") << endl;

	CComBSTR bstrFolderX(L"C:\\Temp\\YADDA");
	ComUtil::HR(pINCFDirectory->Create(bstrFolderX));

	ComUtil::HR(pINCFDirectory->Exists(bstrFolderX, &status));
	wcout << L"Folder X is Created and - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXIST") << endl;

	ComUtil::HR(pINCFDirectory->Delete(bstrFolderX));
	ComUtil::HR(pINCFDirectory->Exists(bstrFolderX, &status));
	wcout << L"Folder X is Deleted and - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXIST") << endl;


	CComPtr<INCFCollectionList> pINCFCollectionList;
	ComUtil::HR(pINCFDirectory->EnumerateDirectories(bstrValidDirectory, &pINCFCollectionList));
	//ComUtil::HR( pINCFDirectory->EnumerateDirectories( CComBSTR(L"\\\\NAS4\\Files"), &pINCFCollectionList ) );
	long lSize(0);
	ComUtil::HR(pINCFCollectionList->get_Size(&lSize));
	for (long l = 0; l < lSize; l++) {
		CComVariant vtItem;
		ComUtil::HR(pINCFCollectionList->GetItemByIndex(l, &vtItem));
		wcout << "Directory " << bstrValidDirectory.operator LPWSTR() << " contains Directory #" << l + 1 << L" " << CComBSTR(vtItem.bstrVal).operator LPWSTR() << endl;
	}
	return 0;
}

int TestMemoryStream()
{
	CComPtr<INCFMemoryStream> pINCFMemoryStream;
	ComUtil::HR(pINCFMemoryStream.CoCreateInstance(L"ItSoftware.NCF.MemoryStream"));

	char szArrayTest[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	long length = sizeof(szArrayTest);
	ComUtil::HR(pINCFMemoryStream->WriteFrom((BYTE*)szArrayTest, length));

	char* szArrayResult = new char[length + 1];
	szArrayResult[length] = '\0';

	ComUtil::HR(pINCFMemoryStream->ReadTo((BYTE*)szArrayResult, length));

	cout << "Resulting Array: " << szArrayResult << endl;

	CComPtr<INCFFile> pINCFFile;
	ComUtil::HR(pINCFFile.CoCreateInstance(L"ItSoftware.NCF.File"));

	CComPtr<INCFFileStream> pINCFFileStream;
	ComUtil::HR(pINCFFile->CreateOrOpen(CComBSTR(L"C:\\Temp\\MSTEST.txt"), &pINCFFileStream));

	ComUtil::HR(pINCFFileStream->WriteFrom((BYTE*)szArrayResult, length));

	ComUtil::HR(pINCFFileStream->Close());

	return 0;
}
int TestFile()
{
	CComPtr<INCFFile> pINCFFile;
	ComUtil::HR(pINCFFile.CoCreateInstance(L"ItSoftware.NCF.File"));
	VARIANT_BOOL status(VARIANT_FALSE);
	CComBSTR bstrFakeFileName(L"C:\\Temp");
	CComBSTR bstrValidFileName(L"C:\\Temp\\Track01.mp3");
	ComUtil::HR(pINCFFile->Exists(bstrFakeFileName, &status));
	wcout << L" FILENAME (" << bstrFakeFileName.operator LPWSTR() << ") - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXISTS") << endl;
	ComUtil::HR(pINCFFile->Exists(bstrValidFileName, &status));
	wcout << L" FILENAME (" << bstrValidFileName.operator LPWSTR() << ") - " << ((status == VARIANT_TRUE) ? L"EXISTS" : L"NOT EXISTS") << endl;

	CComPtr<INCFFileStream> pINCFFileStream;
	ComUtil::HR(pINCFFile->CreateOrOpen(CComBSTR(L"C:\\Temp\\Kjetil.txt"), &pINCFFileStream));
	wcout << L"FS FILE CREATED" << endl;

	CComBSTR bstrData1(L"KJETIL SOLBERG ÆØÅ #1");
	ComUtil::HR(pINCFFileStream->WriteFrom(reinterpret_cast<unsigned char*>(&bstrData1), bstrData1.ByteLength()));
	ComUtil::HR(pINCFFileStream->Close());

	wcout << L"FS FILE WRITTEN" << endl;

	CComPtr<INCFStringStream> pINCFStringStream;
	ComUtil::HR(pINCFFile->CreateOrOpenText(CComBSTR(L"C:\\Temp\\KjetilSS.txt"), &pINCFStringStream));
	wcout << L"SS FILE CREATED" << endl;

	CComBSTR bstrData2(L"KJETIL SOLBERG ÆØÅ #2");
	ComUtil::HR(pINCFStringStream->WriteLine(bstrData1));
	ComUtil::HR(pINCFStringStream->WriteLine(bstrData2));

	CComBSTR bstrData3(L"JUST TEXT");
	ComUtil::HR(pINCFStringStream->WriteString(bstrData3));

	//wcout << L"SS FILE WRITTEN ÆØÅ" << endl;

	CComBSTR bstrLineX;
	ComUtil::HR(pINCFStringStream->put_CurrentReadPosition(0));
	do {
		HRESULT hr = pINCFStringStream->ReadLine(&bstrLineX);
		if (hr != S_FALSE) {
			wcout << L"SS FILE LINE 1 = " << bstrLineX.operator LPWSTR() << endl;
			break;
		}
	} while (true);

	CComPtr<INCFCollectionList> pINCFCollectionList;
	ComUtil::HR(pINCFStringStream->ReadAllLines(&pINCFCollectionList));

	long lSize(0);
	ComUtil::HR(pINCFCollectionList->get_Size(&lSize));
	for (long l = 0; l < lSize; l++)
	{
		CComVariant vtItem;
		ComUtil::HR(pINCFCollectionList->GetItemByIndex(l, &vtItem));
		wcout << L"SS FILE COLLECTION LINE 1 = " << CComBSTR(vtItem.bstrVal).operator LPWSTR() << endl;
	}

	ComUtil::HR(pINCFStringStream->Close());

	CComPtr<INCFCollectionList> pINCFCollectionList2;
	ComUtil::HR(pINCFFile->EnumerateFiles(CComBSTR(L"C:\\Temp"), CComBSTR(L"*.*"), &pINCFCollectionList2));

	long lSize2 = 0;
	ComUtil::HR(pINCFCollectionList2->get_Size(&lSize2));
	for (long l = 0; l < lSize2; l++)
	{
		CComVariant vtItem;
		ComUtil::HR(pINCFCollectionList2->GetItemByIndex(l, &vtItem));
		wcout << L"FILE " << l + 1 << " " << CComBSTR(vtItem.bstrVal).operator LPWSTR() << endl;
	}

	CComBSTR bstrFileName;
	ComUtil::HR(pINCFFile->GetTempFilename(CComBSTR(L".abba"), &bstrFileName));
	wcout << L"Temp FileName = " << bstrFileName.operator LPWSTR() << endl;
	return 0;
}

int TestWavEncoder()
{
	CComPtr<INCFWavEncoder> pINCFWavEncoder;
	ComUtil::HR(pINCFWavEncoder.CoCreateInstance(L"ItSoftware.NCF.WavEncoder"));

	CComPtr<INCFEncoderParams> pINCFEncoderParams;
	ComUtil::HR(pINCFEncoderParams.CoCreateInstance(L"ItSoftware.NCF.EncoderParams"));
	//ComUtil::HR(pINCFEncoderParams->put_BitsPerSample(8));
	//ComUtil::HR(pINCFEncoderParams->put_NumberOfChannels(1));

	ComUtil::HR(pINCFWavEncoder->Encode(pINCFEncoderParams, CComBSTR(L"C:\\Temp\\Track01.mp3"), CComBSTR(L"C:\\Temp\\Track01WAV.wav"), VARIANT_TRUE));
	wcout << "Encoding Track 01 to WAV - Progress [";

	long lProgressValue(0);
	long lPrevValue(0);
	do {
		HRESULT hr = pINCFWavEncoder->GetExtractionProgressPercent(&lProgressValue);
		if (lProgressValue - lPrevValue >= 10) {
			wcout << L"#";
			lPrevValue += 10;
		}
		::Sleep(100);
	} while (lProgressValue < 100);
	wcout << L"]" << endl;
	wcout << L"Encoding Track - OK" << endl;

	CComPtr<INCFFile> pINCFFile;
	ComUtil::HR(pINCFFile.CoCreateInstance(L"ItSoftware.NCF.File"));

	CComPtr<INCFFileStream> pINCFFileStream;
	ComUtil::HR(pINCFFile->CreateNew(CComBSTR(L"C:\\Temp\\BBTEST.wav"), &pINCFFileStream));

	CComPtr<INCFMemoryStream> pINCFMemoryStream;
	ComUtil::HR(pINCFMemoryStream.CoCreateInstance(L"ItSoftware.NCF.MemoryStream"));

	ComUtil::HR(pINCFWavEncoder->WriteWaveHeaderToStream(pINCFEncoderParams, 0, pINCFMemoryStream));

	ComUtil::HR(pINCFWavEncoder->EncodeToStream(pINCFEncoderParams, CComBSTR(L"C:\\Temp\\Track01.mp3"), pINCFMemoryStream));

	long lFileSize(0);
	ComUtil::HR(pINCFMemoryStream->get_Length(&lFileSize));

	ComUtil::HR(pINCFMemoryStream->put_CurrentWritePosition(0));
	ComUtil::HR(pINCFWavEncoder->WriteWaveHeaderToStream(pINCFEncoderParams, lFileSize, pINCFMemoryStream));

	ComUtil::HR(pINCFFileStream->WriteFromStream(pINCFMemoryStream, lFileSize));

	ComUtil::HR(pINCFFileStream->Close());

	return 0;
}

int TestWmaEncoder()
{
	CComPtr<INCFWmaEncoder> pINCFWmaEncoder;
	ComUtil::HR(pINCFWmaEncoder.CoCreateInstance(L"ItSoftware.NCF.WmaEncoder"));

	CComPtr<INCFEncoderParams> pINCFEncoderParams;
	ComUtil::HR(pINCFEncoderParams.CoCreateInstance(L"ItSoftware.NCF.EncoderParams"));

	CComPtr<INCFWmaTag> pINCFWmaTag;
	ComUtil::HR(pINCFWmaTag.CoCreateInstance(L"ItSoftware.NCF.WmaTag"));

	pINCFWmaTag->SetAuthor(CComBSTR(L"Artist"));
	pINCFWmaTag->SetAlbumAuthor(CComBSTR(L"Album Artist"));
	pINCFWmaTag->SetAlbumTitle(CComBSTR(L"Album Title"));
	pINCFWmaTag->SetTitle(CComBSTR(L"Title"));
	pINCFWmaTag->SetGenre(CComBSTR(L"Rock"));
	pINCFWmaTag->SetYear(CComBSTR(L"1915"));
	pINCFWmaTag->SetTrack(CComBSTR(L"5"));
	pINCFWmaTag->SetComposer(CComBSTR(L"Kjetil Kristoffer Solberg"));
	pINCFWmaTag->SetAlbumCoverURL(CComBSTR(L"http://upload.wikimedia.org/wikipedia/commons/2/2b/Eastern_Rosella_at_Hobart_Domain_upright.jpg"));

	ComUtil::HR(pINCFWmaEncoder->Encode(pINCFEncoderParams, pINCFWmaTag, CComBSTR(L"C:\\Temp\\Track01.wav"), CComBSTR(L"C:\\Temp\\Track01.wma"), VARIANT_TRUE));
	wcout << "Encoding Track 01 to WMA - Progress [";

	long lProgressValue(0);
	long lPrevValue(0);
	do {
		HRESULT hr = pINCFWmaEncoder->GetExtractionProgressPercent(&lProgressValue);
		if (lProgressValue - lPrevValue >= 10) {
			wcout << L"#";
			lPrevValue += 10;
		}
		::Sleep(100);
	} while (lProgressValue < 100);
	wcout << L"]" << endl;
	wcout << L"Encoding Track - OK" << endl;

	return 0;
}

int TestAacEncoder()
{
	CComPtr<INCFAacEncoder> pINCFAacEncoder;
	ComUtil::HR(pINCFAacEncoder.CoCreateInstance(L"ItSoftware.NCF.AacEncoder"));

	CComPtr<INCFEncoderParams> pINCFEncoderParams;
	ComUtil::HR(pINCFEncoderParams.CoCreateInstance(L"ItSoftware.NCF.EncoderParams"));

	CComPtr<INCFAacTag> pINCFAacTag;
	ComUtil::HR(pINCFAacTag.CoCreateInstance(L"ItSoftware.NCF.AacTag"));

	pINCFAacTag->SetAuthor(CComBSTR(L"Artist"));
	pINCFAacTag->SetAlbumAuthor(CComBSTR(L"Album Artist"));
	pINCFAacTag->SetAlbumTitle(CComBSTR(L"Album Title"));
	pINCFAacTag->SetTitle(CComBSTR(L"Title"));
	pINCFAacTag->SetGenre(CComBSTR(L"Rock"));
	pINCFAacTag->SetYear(CComBSTR(L"1915"));
	pINCFAacTag->SetTrack(CComBSTR(L"5"));
	pINCFAacTag->SetComposer(CComBSTR(L"Kjetil Kristoffer Solberg"));
	pINCFAacTag->SetAlbumCoverURL(CComBSTR(L"http://upload.wikimedia.org/wikipedia/commons/2/2b/Eastern_Rosella_at_Hobart_Domain_upright.jpg"));

	ComUtil::HR(pINCFAacEncoder->Encode(pINCFEncoderParams, pINCFAacTag, CComBSTR(L"C:\\Temp\\Track01.wav"), CComBSTR(L"C:\\Temp\\Track01.m4a"), VARIANT_TRUE));
	wcout << "Encoding Track 01 to AAC - Progress [";

	long lProgressValue(0);
	long lPrevValue(0);
	do {
		HRESULT hr = pINCFAacEncoder->GetExtractionProgressPercent(&lProgressValue);
		if (lProgressValue - lPrevValue >= 10) {
			wcout << L"#";
			lPrevValue += 10;
		}
		::Sleep(100);
	} while (lProgressValue < 100);
	wcout << L"]" << endl;
	wcout << L"Encoding Track - OK" << endl;

	return 0;
}

int TestMp3Encoder()
{
	CComPtr<INCFMp3Encoder> pINCFMp3Encoder;
	ComUtil::HR(pINCFMp3Encoder.CoCreateInstance(L"ItSoftware.NCF.Mp3Encoder"));

	CComPtr<INCFEncoderParams> pINCFEncoderParams;
	ComUtil::HR(pINCFEncoderParams.CoCreateInstance(L"ItSoftware.NCF.EncoderParams"));

	CComPtr<INCFMp3Tag> pINCFMp3Tag;
	ComUtil::HR(pINCFMp3Tag.CoCreateInstance(L"ItSoftware.NCF.Mp3Tag"));

	pINCFMp3Tag->SetAuthor(CComBSTR(L"Artist"));
	pINCFMp3Tag->SetAlbumAuthor(CComBSTR(L"Album Artist"));
	pINCFMp3Tag->SetAlbumTitle(CComBSTR(L"Album Title"));
	pINCFMp3Tag->SetTitle(CComBSTR(L"Title"));
	pINCFMp3Tag->SetGenre(CComBSTR(L"Rock"));
	pINCFMp3Tag->SetYear(CComBSTR(L"1915"));
	pINCFMp3Tag->SetTrack(CComBSTR(L"5"));
	pINCFMp3Tag->SetComposer(CComBSTR(L"Kjetil Kristoffer Solberg"));
	pINCFMp3Tag->SetAlbumCoverURL(CComBSTR(L"http://upload.wikimedia.org/wikipedia/commons/2/2b/Eastern_Rosella_at_Hobart_Domain_upright.jpg"));

	ComUtil::HR(pINCFMp3Encoder->Encode(pINCFEncoderParams, pINCFMp3Tag, CComBSTR(L"C:\\Temp\\Track01.wav"), CComBSTR(L"C:\\Temp\\Track01.mp3"), VARIANT_TRUE));
	wcout << "Encoding Track 01 to MP3 - Progress [";

	long lProgressValue(0);
	long lPrevValue(0);
	do {
		HRESULT hr = pINCFMp3Encoder->GetExtractionProgressPercent(&lProgressValue);
		if (lProgressValue - lPrevValue >= 10) {
			wcout << L"#";
			lPrevValue += 10;
		}
		::Sleep(100);
	} while (lProgressValue < 100);
	wcout << L"]" << endl;
	wcout << L"Encoding Track - OK" << endl;

	return 0;
}

int TestString()
{
	CComPtr<INCFString> pINCFString;
	ComUtil::HR(pINCFString.CoCreateInstance(L"ItSoftware.NCF.String"), CComBSTR(L"CoCreateInstance - Error"));

	wcout << endl << endl << L"## String.TimeToString ##" << endl;

	CComBSTR format1(L"hh:mm:ss.rr");
	CComBSTR result1;
	ComUtil::HR(pINCFString->TimeToString(format1, 12345678, &result1));

	wcout << endl << L"12345678 milliseconds to format string1: " << result1.operator LPWSTR() << endl;

	CComBSTR format2(L"--- h -- m -- s -- r ---");
	CComBSTR result2;
	ComUtil::HR(pINCFString->TimeToString(format2, 12345678, &result2));
	wcout << endl << L"12345678 milliseconds to format string2: " << result2.operator LPWSTR() << endl;

	CComBSTR format3(L"--- h -- m -- s -- r ---");
	CComBSTR result3;
	ComUtil::HR(pINCFString->TimeToString(format3, 0, &result3));
	wcout << endl << L"12345678 milliseconds to format string2: " << result3.operator LPWSTR() << endl;

	long lHou(0);
	long lMin(0);
	long lSec(0);
	long lMs(0);	
	ItsTime::SplitMsToHourMinuteSeconds(12345678, &lHou, &lMin, &lSec, &lMs);

	return 0;
}

int TestGuid()
{
	CComPtr<INCFGuid> pINCFGuid;
	ComUtil::HR(pINCFGuid.CoCreateInstance(L"ItSoftware.NCF.Guid"), CComBSTR(L"CoCreateInstance - ERROR"));

	//INCFGuid *pXXX(nullptr);
	//pINCFGuid.CopyTo(&pXXX);

	wcout << endl << endl << L"## Guid.CreateGuidType ## " << endl;

	CComBSTR bstrRF;
	ComUtil::HR(pINCFGuid->CreateGuidType(EGUIDTYPE::EGUID_REGISTRYFORMAT, &bstrRF), CComBSTR(L"EGUID_REGISTRYFORMAT - API ERROR"));
	wcout << endl << L"EGUID_REGISTRYFORMAT" << endl << bstrRF.operator LPWSTR() << endl;

	CComBSTR bstrRFS;
	ComUtil::HR(pINCFGuid->CreateGuidType(EGUIDTYPE::EGUID_REGISTRYFORMAT_STRIPPED, &bstrRFS), CComBSTR(L"EGUID_REGISTRYFORMAT_STRIPPED - API ERROR"));
	wcout << endl << L"EGUID_REGISTRYFORMAT_STRIPPED - " << endl << bstrRFS.operator LPWSTR() << endl;

	CComBSTR bstrCF;
	ComUtil::HR(pINCFGuid->CreateGuidType(EGUIDTYPE::EGUID_CONSTFORMAT, &bstrCF), CComBSTR(L"EGUID_CONSTFORMAT - API ERROR"));
	wcout << endl << L"EGUID_CONSTFORMAT - " << endl << bstrCF.operator LPWSTR() << endl;

	CComBSTR bstrCompF;
	ComUtil::HR(pINCFGuid->CreateGuidType(EGUIDTYPE::EGUID_COMPACTFORMAT, &bstrCompF), CComBSTR(L"EGUID_COMPACTFORMAT - API ERROR"));
	wcout << endl << L"EGUID_COMPACTFORMAT - " << endl << bstrCompF.operator LPWSTR() << endl;

	CComBSTR bstrPCF;
	ComUtil::HR(pINCFGuid->CreateGuidType(EGUIDTYPE::EGUID_PREFIXED_COMPACTFORMAT, &bstrPCF), CComBSTR(L"EGUID_PREFIXED_COMPACTFORMAT - API ERROR"));
	wcout << endl << L"EGUID_PREFIXED_COMPACTFORMAT - " << endl << bstrPCF.operator LPWSTR() << endl;

	wcout << endl << endl << L"## Guid.CreateGuid ## " << endl;

	CComBSTR bstrGUID;
	ComUtil::HR(pINCFGuid->CreateGuid(&bstrGUID), CComBSTR(L"CreateGuid - API ERROR"));
	wcout << bstrGUID.operator LPWSTR() << endl << endl;

	return 0;
}

int TestAudioCD()
{
	wcout << endl << endl << L"## TEST AUDIO CD ##" << endl << endl;

	HRESULT hr = S_OK;
	CComPtr<INCFAudioCD> pIAudioCD;
	ComUtil::HR(pIAudioCD.CoCreateInstance(L"ItSoftware.NCF.AudioCD", NULL, CLSCTX_INPROC_SERVER), CComBSTR(L"Creating ItSoftware.NCF.AudioCD - ERROR"));
	wcout << L"Creating ItSoftware.NCF.AudioCD - OK" << endl;

	ComUtil::HR(pIAudioCD->Load(nullptr), CComBSTR(L"LOADING CD - ERROR"));
	wcout << L"LOADING CD - OK" << endl;

	VARIANT_BOOL vtStatus;
	ComUtil::HR(pIAudioCD->get_Loaded(&vtStatus), CComBSTR(L"get_Loaded - API ERROR"));

	if (vtStatus == VARIANT_FALSE) {
		wcout << L"CD IS - NOT LOADED" << endl;
		return 1;
	}
	else
	{
		wcout << L"CD IS - LOADED" << endl;
	}


	long lTrackCount(0);
	ComUtil::HR(pIAudioCD->get_TrackCount(&lTrackCount), CComBSTR(L"get_TrackCount - API ERROR"));
	wcout << L"TRACK COUNT - " << lTrackCount << endl;

	long timeMs(0);
	ComUtil::HR(pIAudioCD->get_TotalPlaytime(&timeMs), CComBSTR(L"get_TotalPlaytime - API ERROR"));
	long min = timeMs / (1000 * 60);
	long sek = (timeMs - (min * 1000 * 60)) / 1000;
	wchar_t wcsPlaytime[20];
	swprintf_s(wcsPlaytime, L"%02d:%02d", min, sek);
	wcout << L"Total Playtime - " << wcsPlaytime << endl;

	CComBSTR freedbServer("http://freedb.freedb.org/~cddb/cddb.cgi");
	ComUtil::HR(pIAudioCD->ExecuteCddbQuery(freedbServer, VARIANT_FALSE), CComBSTR(L"ExecuteCddbQuery - API ERROR"));

	CComBSTR bstrArtist;
	ComUtil::HR(pIAudioCD->get_Artist(&bstrArtist), CComBSTR(L"get_Artist - API ERROR"));
	wcout << L"Artist: " << bstrArtist.operator LPWSTR() << endl;

	CComBSTR bstrAlbum;
	ComUtil::HR(pIAudioCD->get_AlbumTitle(&bstrAlbum), CComBSTR(L"get_AlbumTitle - API ERROR"));
	wcout << L"Album Title: " << bstrAlbum.operator LPWSTR() << endl;

	CComBSTR bstrGenre;
	ComUtil::HR(pIAudioCD->get_Genre(&bstrGenre), CComBSTR(L"get_Genre - API ERROR"));
	wcout << L"Genre: " << bstrGenre.operator LPWSTR() << endl;

	wcout << L"Tracks:" << endl;
	for (long l = 1; l <= lTrackCount; l++)
	{
		CComBSTR bstrTitle;
		ComUtil::HR(pIAudioCD->GetTitle(l, &bstrTitle), CComBSTR(L"GetTitle - API ERROR"));

		long lTrackPlayTime(0);
		ComUtil::HR(pIAudioCD->GetPlaytime(l, &lTrackPlayTime), CComBSTR(L"GetPlaytime - API ERROR"));

		min = lTrackPlayTime / (1000 * 60);
		sek = (lTrackPlayTime - (min * 1000 * 60)) / 1000;

		wchar_t wszBuffer[20];
		swprintf_s(wszBuffer, L"%02d:%02d", min, sek);

		wcout << L"\t" << bstrTitle.operator LPWSTR() << L"\t" << wszBuffer << endl;
	}
	wcout << endl;

	CComBSTR cddb_id;
	ComUtil::HR(pIAudioCD->get_CddbId(&cddb_id), CComBSTR(L"get_CddbId - API ERROR"));
	wcout << L"CDDB ID - " << cddb_id << endl;


	if (lTrackCount > 0) {
		ComUtil::HR(pIAudioCD->ExtractTrack(1, CComBSTR("C:\\Temp\\Track01.wav"), VARIANT_TRUE), CComBSTR(L"ExtractTrack - API ERROR"));
		wcout << "Extracting Track 01 - Progress [";

		long lProgressValue(0);
		long lPrevValue(0);
		do {
			hr = pIAudioCD->GetExtractionProgressPercent(&lProgressValue);
			if (lProgressValue - lPrevValue >= 10) {
				wcout << L"#";
				lPrevValue += 10;
			}
			::Sleep(100);
		} while (lProgressValue < 100);
		wcout << L"]" << endl;
		wcout << L"Extracting Track - OK" << endl;
	}

	return 0;
}

void TestDemo()
{
	CDemo demo;
	// WEnumNetResource -> NetShareEnun
	wchar_t wszBuffer[255];
	wcout << L"Enter server name: ";
	wcin.getline(wszBuffer, _countof(wszBuffer));
	demo.main(wszBuffer);
}