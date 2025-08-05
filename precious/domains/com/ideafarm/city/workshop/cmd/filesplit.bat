@echo off

rem param 1: name of file to split, in ifc format (e.g. ///c/tmp/foo.ttt)

if %1z == z echo missing parameter
if %1z == z goto :FIN

d:
adam 51000622 !idHome 10000008 !make ca8
adam 510008ac !idHome 10000008 !file %1

:FIN
