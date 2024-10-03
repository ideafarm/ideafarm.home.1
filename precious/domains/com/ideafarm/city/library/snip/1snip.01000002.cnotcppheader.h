
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
// Respecting the rights of other people is an important part of empowering one another.
//

/*
*/
/**/
/*1*//*CnOTcPPhEADER*//*1*/

//CS:CODEsYNC:PSEUDOdUPLICATE CODE: 112005a8 01000002
#define ifcIDeXCEPTIONoPENsSL_setupIF                       0x80000001
#define ifcIDeXCEPTIONoPENsSL_waveByeIF                     0x80000002
#define ifcIDeXCEPTIONoPENsSL_getContextIF                  0x80000003
#define ifcIDeXCEPTIONoPENsSL_getWrapperIF                  0x80000004
#define ifcIDeXCEPTIONoPENsSL_wrapSocketIF                  0x80000005
#define ifcIDeXCEPTIONoPENsSL_shakeHandsAsClientIF          0x80000006
#define ifcIDeXCEPTIONoPENsSL_writeIF                       0x80000007
#define ifcIDeXCEPTIONoPENsSL_readIF                        0x80000008
#define ifcIDeXCEPTIONoPENsSL_shakeHandsAsServerIF          0x80000009
#define ifcIDeXCEPTIONoPENsSL_peekIF                        0x8000000a
#define ifcIDeXCEPTIONoPENsSL_wrapperFreeIF                 0x8000000b
#define ifcIDeXCEPTIONoPENsSL_errorCodeIF                   0x8000000c
#define ifcIDeXCEPTIONoPENsSL_keyPairIF                     0x8000000d
#define ifcIDeXCEPTIONoPENsSL_writePrivateKeyToFileIF       0x8000000e
#define ifcIDeXCEPTIONoPENsSL_writePublicKeyToFileIF        0x8000000f
#define ifcIDeXCEPTIONoPENsSL_readPrivateKeyFromFileIF      0x80000010
#define ifcIDeXCEPTIONoPENsSL_readPublicKeyFromFileIF       0x80000011
#define ifcIDeXCEPTIONoPENsSL_encryptIF                     0x80000012
#define ifcIDeXCEPTIONoPENsSL_decryptIF                     0x80000013
#define ifcIDeXCEPTIONoPENsSL_getPublicKeyBase64IF          0x80000014
#define ifcIDeXCEPTIONoPENsSL_getPrivateKeyBase64IF         0x80000015

#if defined( __cplusplus )

    #define MYpREFIX extern "C"

    //OPENSSL SYMBOLS CALLED WITHIN C++ CODE (NOT NEEDED FOR C CODE DUE TO THE -ecc COMPILER SWITCH FOR C CODE)
    #pragma aux (cdecl) ERR_get_error                              ;
    #pragma aux (cdecl) EVP_aes_128_cbc                            ;
    #pragma aux (cdecl) EVP_PKEY_free                              ;
    #pragma aux (cdecl) EVP_PKEY_Q_keygen                          ;
    #pragma aux (cdecl) EVP_SealInit                               ;
    #pragma aux (cdecl) OPENSSL_init_ssl                           ;
    #pragma aux (cdecl) SSL_accept                                 ;
    #pragma aux (cdecl) SSL_connect                                ;
    #pragma aux (cdecl) SSL_CTX_free                               ;
    #pragma aux (cdecl) SSL_CTX_new                                ;
    #pragma aux (cdecl) SSL_CTX_use_certificate_chain_file         ;
    #pragma aux (cdecl) SSL_CTX_use_PrivateKey_file                ;
    #pragma aux (cdecl) SSL_free                                   ;
    #pragma aux (cdecl) SSL_new                                    ;
    #pragma aux (cdecl) SSL_peek                                   ;
    #pragma aux (cdecl) SSL_read                                   ;
    #pragma aux (cdecl) SSL_set_fd                                 ;
    #pragma aux (cdecl) SSL_shutdown                               ;
    #pragma aux (cdecl) SSL_write                                  ;
    #pragma aux (cdecl) TLS_method                                 ;

#else

    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\include\openssl\ssl.h"
    #include "\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\include\openssl\err.h"

    #define MYpREFIX

#endif

#undef UNICODE
#include <excpt.h>
#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

// WRAPPERS FOR THE OPENSSL UPLINK FUNCTIONS (NEEDED BECAUSE OPENSSL'S FILE I/O CODE (E.G. PEM FILE READING/WRITING) WANTS TO CALL WATCOM'S clib FUNCTIONS USING cdecl, BUT WATCOM'S clib IS COMPILED USING watcall
MYpREFIX int             _export __cdecl   c__close_cdecl_IF(       int handle                                                  ) ;
MYpREFIX off_t           _export __cdecl   c__lseek_cdecl_IF(       int handle , off_t offset , int origin                      ) ;
MYpREFIX int             _export __cdecl   c__open_cdecl_IF(        const char* path , int access , ...                         ) ;
MYpREFIX int             _export __cdecl   c__read_cdecl_IF(        int handle , void* buffer , unsigned len                    ) ;
MYpREFIX int             _export __cdecl   c__write_cdecl_IF(       int handle , void* buffer , unsigned len                    ) ;
MYpREFIX int             _export __cdecl   c_fclose_cdecl_IF(       FILE* fp                                                    ) ;
MYpREFIX int             _export __cdecl   c_fflush_cdecl_IF(       FILE* fp                                                    ) ;
MYpREFIX char*           _export __cdecl   c_fgets_cdecl_IF(        char* buf , int n , FILE* fp                                ) ;
MYpREFIX FILE*           _export __cdecl   c_fopen_cdecl_IF(        const char* filename , const char* mode                     ) ;
MYpREFIX int             _export __cdecl   c_fprintf_cdecl_IF(      FILE* fp , const char* format , ...                         ) ;
MYpREFIX size_t          _export __cdecl   c_fread_cdecl_IF(        void* ptr , size_t size , size_t nmemb , FILE* stream       ) ;
MYpREFIX int             _export __cdecl   c_fseek_cdecl_IF(        FILE* fp , long int offset , int where                      ) ;
MYpREFIX long int        _export __cdecl   c_ftell_cdecl_IF(        FILE* fp                                                    ) ;
MYpREFIX size_t          _export __cdecl   c_fwrite_cdecl_IF(       const void* ptr , size_t size , size_t nmemb , FILE* stream ) ;
MYpREFIX void**          _export __cdecl   c_openSslAppLinkInnerIF( void ) ;

MYpREFIX unsigned        _export __watcall c_debugIF( unsigned pP ) ;
MYpREFIX void            _export __watcall c_getaddrinfoF( char* pbListP , unsigned cbListP , const char* const postNameP ) ;
MYpREFIX void            _export           c_traceHelperIF( unsigned pP ) ;
MYpREFIX int             _export __watcall c_threadTry1OuterF( unsigned bMainP , unsigned pExceptionHandlerFP , unsigned c1P , unsigned c2P , unsigned c3P ) ;     //CS:PSEUDOdUPLICATE CODE: 01000002 
MYpREFIX int             _export __watcall threadTry2InnerF( unsigned bMainP , unsigned c1P , unsigned c2P , unsigned c3P ) ;

#if defined( __cplusplus )
    unsigned _export _stdcall  rootExceptionFilterF( void* pvOsInfoP ) ;
#else
#endif


MYpREFIX void     __watcall c_openSslTls_wrapperFreeIF(                 unsigned* pEcP , SSL* pSslP                                                                                                                                                                                              ) ;
MYpREFIX void     __watcall c_openSslTls_setupIF(                       unsigned* pEcP                                                                                                                                                                                                           ) ;
MYpREFIX void     __watcall c_openSslTls_waveByeIF(                     unsigned* pEcP , SSL* pSslP                                                                                                                                                                                              ) ;
MYpREFIX SSL_CTX* __watcall c_openSslTls_getContextIF(                  unsigned* pEcP , const char* const postPemCertificatesP , const char* const postPemPrivateKeyP                                                                                                                           ) ;
MYpREFIX SSL*     __watcall c_openSslTls_getWrapperIF(                  unsigned* pEcP , SSL_CTX* pContextP                                                                                                                                                                                      ) ;
MYpREFIX void     __watcall c_openSslTls_wrapSocketIF(                  unsigned* pEcP , unsigned oshSocketP , SSL* pSslP                                                                                                                                                                        ) ;
MYpREFIX void     __watcall c_openSslTls_shakeHandsAsClientIF(          unsigned* pEcP , SSL* pSslP                                                                                                                                                                                              ) ;
MYpREFIX void     __watcall c_openSslTls_shakeHandsAsServerIF(          unsigned* pEcP , SSL* pSslP                                                                                                                                                                                              ) ;
MYpREFIX unsigned __watcall c_openSslTls_writeIF(                       unsigned* pEcP , SSL* pSslP , const char* const pbP , const unsigned cbP                                                                                                                                                 ) ;
MYpREFIX unsigned __watcall c_openSslTls_readIF(                        unsigned* pEcP , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                                   ) ;
MYpREFIX unsigned __watcall c_openSslTls_peekIF(                        unsigned* pEcP , char* pbP , unsigned cbP , SSL* pSslP                                                                                                                                                                   ) ;
MYpREFIX unsigned __watcall c_openSslCrypto_keyPairIF(                  unsigned* pEcP , unsigned bitsP                                                                                                                                                                                          ) ;
MYpREFIX void     __watcall c_openSslCrypto_errorCodeIF(                unsigned* pEcP                                                                                                                                                                                                           ) ;
MYpREFIX void     __watcall c_openSslCrypto_writePrivateKeyToFileIF(    unsigned* pEcP , const char* postFileP , unsigned c_pKeyPairP                                                                                                                                                            ) ;
MYpREFIX void     __watcall c_openSslCrypto_writePublicKeyToFileIF(     unsigned* pEcP , const char* postFileP , unsigned c_pKeyPairP                                                                                                                                                            ) ;
MYpREFIX void     __watcall c_openSslCrypto_getPublicKeyBase64IF(       unsigned* pEcP , char* const postaP , const unsigned costaP , char* const postaTmpP , const unsigned costaTmpP , unsigned c_pKeyPairP                                                                                    ) ;
MYpREFIX void     __watcall c_openSslCrypto_getPrivateKeyBase64IF(      unsigned* pEcP , char* const postaP , const unsigned costaP , char* const postaTmpP , const unsigned costaTmpP , unsigned c_pKeyPairP                                                                                    ) ;
MYpREFIX unsigned __watcall c_openSslCrypto_readPrivateKeyFromFileIF(   unsigned* pEcP , const char* postFileP                                                                                                                                                                                   ) ;
MYpREFIX unsigned __watcall c_openSslCrypto_readPublicKeyFromFileIF(    unsigned* pEcP , const char* postFileP                                                                                                                                                                                   ) ;
MYpREFIX void     __watcall c_openSslCrypto_encryptIF(                  unsigned* pEcP , unsigned char* pbSymCypherTextP , int* pcbSymCypherTextP , unsigned char* pbHushedSymKeyP , int* pcbHushedSymKeyP , unsigned char* pbSeedP , int cbSeedP , unsigned char* pbPlainTextP , int cbPlainTextP , unsigned c_pKeyPublicP    ) ;
MYpREFIX void     __watcall c_openSslCrypto_decryptIF(                  unsigned* pEcP , unsigned char* pbPlainTextP , int* pcbPlainTextP , unsigned char* pbSymCypherTextP , int cbSymCypherTextP , unsigned char* pbHushedSymKeyP , int cbHushedSymKeyP , unsigned char* pbSeedP , int cbSeedP , unsigned c_pKeyPrivateP   ) ;

//
// Respecting the rights of other people is an important part of empowering one another.
// This proprietary software was crafted at great expense and with great hardship by one man.  It took 33 years.
//
// Copyright (c) 1992-2024 Wo Of Ideafarm.  All rights reserved.  See https://github.com/ideafarm/ideafarm.home.1 for permitted uses.
//
 
