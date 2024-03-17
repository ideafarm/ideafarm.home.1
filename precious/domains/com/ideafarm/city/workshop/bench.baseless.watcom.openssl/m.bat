@echo off


wpp386 -d2 -zp1 -bt=NT -sg -od -zq -bm -wx -6r -fpi87 -fp5 -fr=1.err 1.cpp

rem wlink debug all op mang op map=1.map op q op el  name 1.exe file 1.obj library D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libssl.lib        library D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libcrypto.lib
    wlink debug all op mang op map=1.map op q op el  name 1.exe file 1.obj library D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libssl_static.lib library D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libcrypto_static.lib
