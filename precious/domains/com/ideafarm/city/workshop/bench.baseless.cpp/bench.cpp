
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

int main( void )
{
    int bFail = 0 ;

    {
        WSADATA info1 ;
        bFail = WSAStartup( 0x0202 , &info1 ) ;
    }

    unsigned osh = socket( PF_INET6 , SOCK_DGRAM , 0 ) ;

    static sockaddr_in6 info2 ;
    info2.sin6_family = AF_INET6 ;
    info2.sin6_port   = (short)htons( 0x00000035 ) ;

    bFail = bind( osh , (sockaddr*)&info2 , sizeof info2 ) ;

    bFail = WSACleanup() ;

    return 0 ;
}
