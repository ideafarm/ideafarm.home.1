@echo off

if not %1z == z goto :WOdEVICE

echo I CALL chkdsk FOR EACH FOLDER IN d:\ideafarm.home.101\devices IN PARALLEL

d:
cd \ideafarm.home.101\devices
for /d %%d in (*) do @start "%%d" donotindex.bat %%d
goto :FIN
               
:WOdEVICE

attrib +I %1 /d                  

:FIN