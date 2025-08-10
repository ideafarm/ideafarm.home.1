@echo off

rem param 1: idAdam, either in numeric form (e.g. 8ac) or symbolic form (e.g. TOOLfILEsPLIT)
rem param 2-9: parameters to pass into the hired adam

if %1z == z echo missing parameter
if %1z == z goto :FIN

d:
ideafarm.elves.ipdos !makeElfOnly
adam ELF !makeIf %1
adam %1 %2 %3 %4 %5 %6 %7 %8 %9

:FIN
