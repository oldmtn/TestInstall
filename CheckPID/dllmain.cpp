// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

//#include <msi.h>
//#include <msiquery.h>
//
//#pragma comment(lib, "MSI.lib")
//
//#pragma comment(linker, "/EXPORT:CheckPID=_CheckPID@4")
//
//extern "C" UINT __stdcall CheckPID (MSIHANDLE hInstall) {
//    char Pid[MAX_PATH];
//    DWORD PidLen = MAX_PATH;
//
//    ::MessageBox(::GetDesktopWindow(), TEXT("ddddddddddddfdafa"), TEXT("111111"), MB_OK);
//
//    MsiGetProperty (hInstall, TEXT("PIDKEY"), Pid, &PidLen);
//    //MsiSetProperty (hInstall, TEXT("PIDACCEPTED"), Pid[0] == '1' ? "1" : "0");
//    MsiSetProperty (hInstall, TEXT("PIDACCEPTED"), "0");
//    return ERROR_SUCCESS;
//} // CheckPID

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

