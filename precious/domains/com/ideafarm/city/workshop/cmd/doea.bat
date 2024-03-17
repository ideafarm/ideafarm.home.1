@echo off

d:
cd D:\ideafarm.home.101\devices

if not %1z == z goto :DOdEVICE

for /d %%d in (*) do @start "%%d" doea.bat %%d
goto :FIN


:DOdEVICE

echo DOdEVICE %1
d:
cd              D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm
if not %cd%z == D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarmz goto :FIN

dir /s !ideafarm.a.*


:FIN
