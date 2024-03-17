@echo off

if not %2z == z goto :DOyEAR
if not %1z == z goto :DOdEVICE

d:
cd d:\ideafarm.home.101\devices
rem for /d %%d in (*) do @call        undoza.bat %%d
    for /d %%d in (*) do @start "%%d" undoza.bat %%d
goto :FIN


:DOdEVICE
rem echo device %1
cd d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm
for /d %%d in (*) do @if    %%d == 2010 call undoza.bat %1 %%d
cd d:\ideafarm.home.101\devices
goto :FINE


:DOyEAR
rem echo year %1 %2
cd d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2
rem echo currently in: %cd%
if not %cd% == d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2 echo currently in: %cd%
if not %cd% == d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2 echo year folder not found
if not %cd% == d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\%2 goto :SKIPyEAR

rem echo processing fset files in %cd%
rem for %%f in (*.fset.zip) do @unzip %%f
rem if exist *.data.* echo yes, data files exist in %cd%
rem if     exist *.fset.zip echo yes, fset.zip files exist in %cd%
rem if not exist *.fset.zip echo NO, fset.zip files DO NOT exist in %cd%
rem if not exist *.fset.zip goto :SKIPyEAR

rem if not exist *.data.* echo NO, data files DO NOT exist in %cd%
rem if not exist *.data.* goto :SKIPyEAR

rem del *.data.*
rem del *.meta.*
rem del *.!.control.*
rem dir *   >  d:\tmp\dir.undoza.%1.%2.ttt

dir !ideafarm.a.*.data.*   >  d:\tmp\dir.undoza.%1.%2.ttt
dir !ideafarm.a.*.fset.zip >> d:\tmp\dir.undoza.%1.%2.ttt
rem del *.fset.zip


:SKIPyEAR
cd d:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm
goto :FIN


:FINE
rem exit


:FIN
