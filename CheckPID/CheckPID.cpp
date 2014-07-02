// CheckPID.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"



extern "C" {
    __declspec(dllexport) UINT CheckPID (MSIHANDLE hInstall) {
        TCHAR Pid[MAX_PATH];
        DWORD PidLen = MAX_PATH;

        ::MessageBox(::GetDesktopWindow(), TEXT("fdafa"), TEXT("111111"), MB_OK);

        MsiGetProperty (hInstall, TEXT("PIDKEY"), Pid, &PidLen);
        MsiSetProperty (hInstall, TEXT("PIDACCEPTED"), Pid[0] == TEXT('1') ? TEXT("1") : TEXT("0"));
        return ERROR_SUCCESS;
    } // CheckPID
}