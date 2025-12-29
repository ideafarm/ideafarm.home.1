@echo off

wcc386 -d2 bench.c

 wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library D:\openssl.static.20251121.1411\lib\libssl.lib library D:\openssl.static.20251121.1411\lib\libcrypto.lib
rem wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj
