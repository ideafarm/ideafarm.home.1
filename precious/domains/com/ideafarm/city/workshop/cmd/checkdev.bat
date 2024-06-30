@echo off

if not %1z == z goto :WOdEVICE

echo I CALL chkdsk FOR EACH FOLDER IN d:\ideafarm.home.101\devices IN PARALLEL

d:
cd \ideafarm.home.101\devices
rem for /d %%d in (*) do @if exist %%d\* echo %%d
    for /d %%d in (*) do @if exist %%d\* start "%%d" checkdev.bat %%d
goto :FIN


:WOdEVICE

chkdsk %1 /f /v /x
                  

:FIN