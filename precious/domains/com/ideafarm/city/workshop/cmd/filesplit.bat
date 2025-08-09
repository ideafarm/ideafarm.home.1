@echo off

rem param 1: name of file to split, in ifc format (e.g. ///c/tmp/foo.ttt)

if %1z == z echo missing parameter
if %1z == z goto :FIN

d:
adam ELF           !idHome 10000008 !makeIf ca8
adam TOOLfILEsPLIT !idHome 10000008 !file %1

:FIN
