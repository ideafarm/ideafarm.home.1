@echo off

if     %1z == step1z goto :DOfILE1
if     %1z == step2z goto :DOfILE2
if not %1z == z      goto :DOYEAR

echo hire this batch file with no arguments after you have manually smudged the d:\tmp\dir.adir.* files to eliminate expected differences
echo i assume that D:\tmp\adir contains a directory for each year and that all files in each year folder should be identical
echo that is what i verify
pause

d:
cd\tmp\adir
dir > d:\tmp\adirc.report.ttt
for /d %%y in (1* 2*) do @call adirc.bat %%y
rw d:\tmp\adirc.report.ttt
goto :FIN


:DOYEAR
echo %1
set woth=
cd %1
for %%f in (*) do @call adirc.bat step1 %%f
echo for year %1, woth is %woth%
for %%f in (*) do @call adirc.bat step2 %%f
cd ..
goto :FIN


:DOfILE1
if %woth%z == z set woth=%2
goto :FIN


:DOfILE2
echo %2
if not %woth%z == %2z fc %woth% %2 >> d:\tmp\adirc.report.ttt
goto :FIN




:FIN