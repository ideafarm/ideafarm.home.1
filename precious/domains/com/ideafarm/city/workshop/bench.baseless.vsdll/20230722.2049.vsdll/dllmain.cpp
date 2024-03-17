#include "pch.h"

#include <stdio.h>
#include <openssl\ssl.h>
#include <openssl\err.h>
#include "D:\openssl\ms\applink.c"

extern "C" __declspec( dllexport ) void __cdecl c_vsDllTestIF( void )
{
    EVP_PKEY* pKeyPair = EVP_PKEY_Q_keygen(NULL, NULL, "RSA", 0x200);
    {
        FILE* osh = 0;
        unsigned rc = fopen_s(&osh, "d:\\tmp\\dut.vs.public.pem", "wb");
        rc = PEM_write_PUBKEY(osh, pKeyPair);
        fclose(osh);
    }

    {
        FILE* osh = 0;
        unsigned rc = fopen_s(&osh, "d:\\tmp\\dut.vs.private.pem", "wb");
        rc = PEM_write_PrivateKey(osh, pKeyPair, 0, 0, 0, 0, 0);
        fclose(osh);
    }

}

BOOL APIENTRY DllMain( HMODULE hModule , DWORD ul_reason_for_call , LPVOID lpReserved )
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
