@echo off

rem %1: volume
rem %2: year

if not %2z == z goto :DOyEAR
if not %1z == z goto :DOdEVICE


d:
cd D:\ideafarm.home.101\devices\%1
for /d %%d in (*) do @call t.bat %%d
goto :FIN


:DOdEVICE

echo DOdEVICE %1
d:
cd              D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm
if not %cd%z == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarmz goto :FIN
for /d %%d in (*) do @call t.bat %1 %%d
goto :FIN


:DOyEAR

echo DOyEAR %1 %2
d:
cd              D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2
if not %cd%z == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2z goto :FIN
rd recover

if not exist    D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2\recover\* goto :FIN
cd              D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2\recover
if not %cd%z == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2\recoverz goto :FIN
dir
rem for %%f in (*) do @fc %%f ..\%%f
pause
for %%f in (*) do @if not exist ..\%%f move %%f ..
rem cd..
rem rd recover
goto :FIN


:FIN
