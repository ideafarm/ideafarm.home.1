
#if defined( NEVERdEFINED )





int OPENSSL_init_ssl(uint64_t opts, const OPENSSL_INIT_SETTINGS *settings);
//typedef UINT64 uint64_t;





#endif

#pragma aux (cdecl) OPENSSL_init_ssl ;

#include <windows.h>
#include <openssl\ssl.h>


int main( void )
{
    OPENSSL_init_ssl( OPENSSL_INIT_LOAD_SSL_STRINGS , 0 ) ;
    return 0 ;
}
