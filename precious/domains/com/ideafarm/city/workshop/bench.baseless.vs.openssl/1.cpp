
#include <stdio.h>
#include <openssl\ssl.h>
#include <openssl\err.h>
#include "D:\openssl\ms\applink.c"

int main()
{
    EVP_PKEY* pKeyPair = EVP_PKEY_Q_keygen( NULL , NULL , "RSA" , 0x2000 ) ;
    {
        FILE* osh = 0 ;
        unsigned rc = fopen_s( &osh , "d:\\tmp\\dut.public.pem" , "wb" ) ;
        rc = PEM_write_PUBKEY( osh , pKeyPair ) ;
        fclose( osh ) ;
    }

    {
        FILE* osh = 0 ;
        unsigned rc = fopen_s( &osh , "d:\\tmp\\dut.private.pem" , "wb" ) ;
        rc = PEM_write_PrivateKey( osh , pKeyPair , 0 , 0 , 0 , 0 , 0 ) ;
        fclose( osh ) ;
    }

}
