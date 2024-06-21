@echo off

if not %2z == z goto :WOcHUNK
if not %1z == z goto :WOdEVICE

echo I CALL chkdsk FOR EACH FOLDER IN d:\ideafarm.home.101\devices IN PARALLEL

d:
cd \ideafarm.home.101\devices
for /d %%d in (*) do @if not %%d == internal call t3.bat %%d
goto :FIN
               
:WOdEVICE

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099 goto :FIN

for %%f in (*.chunk.*) do @start "%1 %%f" t3.bat %1 %%f
goto :FIN

:WOcHUNK

d:
cd               \ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099
if not %cd% == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2099 goto :FIN

echo %1 %2
pkzipc -extract %2
if %errorlevel% == 0 del %2
goto :FIN2

:FIN
exit

:FIN2
exit
