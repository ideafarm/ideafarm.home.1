@echo off

if not %2z == z goto :WOcHUNK
if not %1z == z goto :WOdEVICE

echo I CALL chkdsk FOR EACH FOLDER IN d:\ideafarm.home.101\devices IN PARALLEL

d:
cd \ideafarm.home.101\devices
for /d %%d in (*) do @if exist %%d\ideafarm.archives\wo.ideafarm\1999\*.chunk.* start "%1" call t6.1999.bat %%d
goto :FIN
               
:WOdEVICE

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\1999
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\1999 goto :FIN

for %%f in (*.chunk.*) do @call t6.1999.bat %1 %%f
goto :FIN

:WOcHUNK

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\1999
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\1999 goto :FIN

echo extracting... %1 %2
pkzipc -extract %2
if %errorlevel% == 0 goto :DELETEcHUNK
if %errorlevel% == 1 goto :DELETEcHUNK
echo extraction **** FAILED ****
goto :FIN

:DELETEcHUNK
del %2
echo deleted %2

:FIN
