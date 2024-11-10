@echo off

rem param 1: either 'r' or 's' or a decimal number ; if 'r' then will restart base os
rem param 2: optional: name of a folder within /devices/

rem 20240527@1338: NOW SPINS ALL DEVICES IN PARALLEL ; THIS BREAKS THE 'r' (RESTART) FUNCTION SINCE RESTART WILL OCCUR IMMEDIATELY ; U:: ENHANCE TO RESTART ONLY IF LATH KID IS ENDING

if not %1z == rz if not %1z == sz if %1z == z goto :FINnOeXIT

if not %2z == z goto :WOmOUNT

setlocal

set /a spincount=0
set /a repeatcount=0
set /a repeatxx=0








:REPEAT
set /a repeatxx="repeatxx+1"
d:
cd \ideafarm.home.101\devices
    for /d %%d in (*) do call spinm %1 %%d
rem for /d %%d in (*) do start "%%d" spinm %1 %%d

echo %spincount% devices were spun
if     %1z == rz shutdown /r /t 0
if     %1z == sz shutdown /s /t 0
if not %1z == rz if not %1z == sz if %repeatxx% == %1 goto :FINnOeXIT
goto :REPEAT








:WOmOUNT

if not exist %2\* goto :FINeXIT
echo WOmOUNT: %2
cd %2

if not exist ideafarm.archives\*                                                                    goto :FINeXIT
if not exist ideafarm.archives\wo.ideafarm\*                                                        goto :FINeXIT
if not exist ideafarm.archives\wo.ideafarm\1999\* if not exist ideafarm.archives\wo.ideafarm\2099\* goto :FINeXIT

set /a spincount="spincount+1"

set /a spinxx=0
:AGAIN
set /a spinxx="spinxx+1"
echo "||||||||" %spincount% "||||||||"    %2    %2    %2    %2    %2    %2    %2    %2
rem if %spinxx%z == 1024z goto :AFTERbANNER
    if %spinxx%z ==    4z goto :AFTERbANNER
goto :AGAIN
:AFTERbANNER

dir ideafarm.archives\*
dir ideafarm.archives\wo.ideafarm\*
if exist ideafarm.archives\wo.ideafarm\1999\* dir ideafarm.archives\wo.ideafarm\1999\*
if exist ideafarm.archives\wo.ideafarm\2099\* dir ideafarm.archives\wo.ideafarm\2099\*

:FINeXIT
endlocal
exit

:FINnOeXIT
endlocal