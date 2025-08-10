@echo off

rem param 1: name of file to split, in ifc format (e.g. ///c/tmp/foo.ttt)

if %1z == z echo missing parameter
if %1z == z goto :FIN

call a.bat TOOLfILEsPLIT !file %1

:FIN
