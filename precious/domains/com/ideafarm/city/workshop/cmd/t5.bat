@echo off

if not %2z == z goto :WOcHUNK
if not %1z == z goto :WOdEVICE

echo I CALL chkdsk FOR EACH FOLDER IN d:\ideafarm.home.101\devices IN PARALLEL

d:
cd \ideafarm.home.101\devices
for /d %%d in (*) do @if not %%d == internal if not %%d == hdd3.arc.2021010601 if not %%d == hdd3.arc.2022021201 call t5.bat %%d
goto :FIN
               
:WOdEVICE

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099 goto :FIN

for %%f in (*.chunk.*) do @start "%1 %%f" call t5.bat %1 %%f
goto :FIN

:WOcHUNK

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099 goto :FIN

echo %1 %2
pkzipc -extract %2
if %errorlevel% == 0 del %2
if %errorlevel% == 0 echo aok.  chunk deleted
goto :FIN

:FIN
exit

:FIN2
