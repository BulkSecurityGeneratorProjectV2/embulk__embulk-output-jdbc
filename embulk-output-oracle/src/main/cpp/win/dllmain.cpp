#pragma once

// SDKDDKVer.h ���C���N���[�h����ƁA���p�ł���ł���ʂ� Windows �v���b�g�t�H�[������`����܂��B

// �ȑO�� Windows �v���b�g�t�H�[���p�ɃA�v���P�[�V�������r���h����ꍇ�́AWinSDKVer.h ���C���N���[�h���A
// SDKDDKVer.h ���C���N���[�h����O�ɁA�T�|�[�g�ΏۂƂ���v���b�g�t�H�[���������悤�� _WIN32_WINNT �}�N����ݒ肵�܂��B

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // Windows �w�b�_�[����g�p����Ă��Ȃ����������O���܂��B
// Windows �w�b�_�[ �t�@�C��:
#include <windows.h>


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

