
#include <windows.h>

extern "C" unsigned __syscall encodeF( unsigned char* postOutP , unsigned costaOutP , const unsigned char* pbInP , unsigned cbInP ) ;

int main( void )
{
    unsigned char postOut[ 0x100 ] ;
    unsigned cbOut = encodeF( postOut , sizeof postOut , (unsigned char*)"ABC" , 3 ) ;
    return 0 ;
}
