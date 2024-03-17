@echo off

echo if \openssl\*.dll exists, i refresh the IPDOS (tm) build tree to contain current copies of the openssl files that IPDOS (tm) needs to be built or to run
echo i require that ideafarm.bat has been called for my command window
pause

if not exist \openssl\ms\applink.c     goto :ERROR
if not exist \openssl\include\crypto\* goto :ERROR
if not exist \openssl\libcrypto-3.*    goto :ERROR
if not exist \openssl\libssl-3.*       goto :ERROR
if not exist \openssl\apps\openssl.exe goto :ERROR
if not exist \openssl\apps\openssl.pdb goto :ERROR
if not exist \openssl\libcrypto.lib    goto :ERROR
if not exist \openssl\libssl.lib       goto :ERROR
if not exist \openssl\ms\applink.c     goto :ERROR

call g el
cd..\openssl\include
robocopy /s \openssl\include .

cd..\bin
copy \openssl\libcrypto-3.*
copy \openssl\libssl-3.*
copy \openssl\apps\openssl.exe
copy \openssl\apps\openssl.pdb

cd..\lib
copy \openssl\libcrypto.lib .
copy \openssl\libssl.lib .

cd..\include
copy \openssl\ms\applink.c .

goto :FIN


:ERROR
echo !exception: nothing done

:FIN