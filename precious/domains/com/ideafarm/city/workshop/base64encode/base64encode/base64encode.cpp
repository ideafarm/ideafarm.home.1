//
// IDEAFARM.COM
//
// base64encode.exe
// THIS PROGRAM WRITES A TEXT FILE CONTAINING THE BASE64 ENCODING OF A SPECIFIC BINARY INPUT FILE
// USAGE: base64encode encoding.txt foo.any.binary.file
//
// Acknowledgements:
// The work is done by the static library built using https://github.com/powturbo/Turbo-Base64
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "turbob64.h"

typedef unsigned countT ;
typedef unsigned long count04T ;
typedef unsigned char osTextT ;
typedef unsigned char byteT ;

count04T encodeF(osTextT* postOutP, countT costaOutP, const osTextT* pbInP, countT cbInP)
{
    count04T cbOut = 0;
    if( postOutP && pbInP && cbInP && costaOutP >= 3 + 2 * cbInP )      //U:: MORE THAN NEEDED ; "3" IS FOR TERMINATING 0 AND == WHEN cbInP is 1
    {
        cbOut = (count04T)tb64enc( pbInP , cbInP , postOutP ) ;
        postOutP[ cbOut ] = 0 ;
    }
    return cbOut ;
}

count04T cbFileF( FILE* pFileP )
{
    count04T cbFile ;
    count04T offWas = ftell( pFileP ) ; 

    if( fseek( pFileP , 0 , SEEK_END ) != 0 ) return -1 ;
    cbFile = ftell( pFileP ) ;
    fseek( pFileP , offWas , SEEK_SET ) ; 
    
    return cbFile ;
}

int main( countT cHowP , osTextT** ppostHowP )
{
    if( cHowP != 3 )
    {
        std::cout << "Command line example:  " ;
        std::cout << ppostHowP[ 0 ] ;
        std::cout << " myEncodingOutputFileName.txt myBinaryInputFileName.foo\r\n" ;
    }
    else
    {
        std::cout << "Command line parameters:  " ;
        std::cout << ppostHowP[ 0 ] ;
        std::cout << " " ;
        std::cout << ppostHowP[ 1 ] ;
        std::cout << " " ;
        std::cout << ppostHowP[ 2 ] ;
        std::cout << "\r\n" ;

        FILE* pIn = fopen( (char*)ppostHowP[ 2 ] , "rb" ) ;
        count04T cbIn  = cbFileF( pIn ) ;
        count04T cbOut = 3 + 2 * cbIn ;

        byteT* pbIn  = (byteT*)malloc( cbIn  ) ;
        byteT* pbOut = (byteT*)malloc( cbOut ) ;

        if( pbIn )
        {
            countT offo = 0 ;
            countT c ;
            while( ( c = fgetc( pIn ) ) != EOF )
                pbIn[ offo ++ ] = (byteT)c ;
        }
        fclose( pIn ) ;

        count04T costo = encodeF( pbOut , cbOut , pbIn , cbIn ) ;
        FILE* pOut = fopen( (char*)ppostHowP[ 1 ] , "wb" ) ;
        fwrite( pbOut , 1 , costo , pOut ) ;
        free( pbIn ) ;
        free( pbOut ) ;
        fclose( pOut ) ;
    }
}
