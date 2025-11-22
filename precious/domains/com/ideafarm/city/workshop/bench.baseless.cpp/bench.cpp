
#include <openssl\ssl.h>

int main( void )
{
    OPENSSL_init_ssl( OPENSSL_INIT_LOAD_SSL_STRINGS , 0 ) ;

    return 0 ;
}
