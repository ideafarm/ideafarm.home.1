@echo off

rem //
rem // Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
rem //
rem // This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
rem // Respecting the rights of other people is an important part of empowering one another.
rem //

rem param 1: if "path"    then "just set the path"
rem param 1: if "ss"      then "skip drive search"
rem param 1: if "nopause" then "don't pause for keypress"

if %1z == pathz echo just setting path
if %1z == pathz goto :SETpATH

set idrive=%~d0%
echo IdeaFarm (tm) drive is: %idrive%
%idrive%

set iworkshop=%idrive%\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop

if not exist %idrive%\tmp.ideafarm\* md %idrive%\tmp.ideafarm

c:
if exist c:\rimstar\* goto :SKIPRIMSTAR

echo .
echo I am about to install the Rimstar Programmers Editor into c:\rimstar
echo .
if not %1z == nopausez pause

md c:\rimstar
cd c:\rimstar
%iworkshop%\infozip\unzip.exe\unzip %iworkshop%\rimstar\rimstar.zip
%idrive%

goto :AFTERrIMSTAR

:SKIPRIMSTAR

echo .
echo I did not install Rimstar because c:\rimstar already exists.
echo .
if not %1z == nopausez pause

:AFTERrIMSTAR

%idrive%

rem Visual Studio RUNTIMES ARE NO LONGER NEEDED BECAUSE OPENSSL HAS BEEN UPDATED  (NOT TRUE)
rem goto :AFTERvc

if not exist %idrive%\tmp.ideafarm\vc.installed.txt goto :DOvc

echo .
echo I did not install the Visual Studio runtimes because they appear to already be installed.
echo .
if not %1z == nopausez pause
goto :AFTERvc


:DOvc

copy %iworkshop%\visualstudio\vc.installed.txt %idrive%\tmp.ideafarm

echo .
echo I am about to install the Visual Studio runtimes.
echo If they are both (64-bit and 32-bit) are already installed, just click "Close" in each popup window.
echo Else click "I agree", "Install", and then "Close" for each of these two programs.
echo .
if not %1z == nopausez pause

rem %iworkshop%\visualstudio\VC_redist.x64.exe
%iworkshop%\visualstudio\VC_redist.x86.exe



:AFTERvc

if %1z == ssz echo skipping drive search
if %1z == ssz goto :SETpATH

echo .
echo I am about to look for IdeaFarm (tm) home folders on all drives...
echo .
if not %1z == nopausez pause
echo .

set isay1=ideafarm.home.* exists on drive
set isay2=WARNING: ideafarm.home.* also exists on drive
set isay=%isay1%

if exist a:\ideafarm.home.* echo %isay% a.
if exist a:\ideafarm.home.* set isay=%isay2%

if exist b:\ideafarm.home.* echo %isay% b.
if exist b:\ideafarm.home.* set isay=%isay2%

if exist c:\ideafarm.home.* echo %isay% c.
if exist c:\ideafarm.home.* set isay=%isay2%

if exist d:\ideafarm.home.* echo %isay% d.
if exist d:\ideafarm.home.* set isay=%isay2%

if exist e:\ideafarm.home.* echo %isay% e.
if exist e:\ideafarm.home.* set isay=%isay2%

if exist f:\ideafarm.home.* echo %isay% f.
if exist f:\ideafarm.home.* set isay=%isay2%

if exist g:\ideafarm.home.* echo %isay% g.
if exist g:\ideafarm.home.* set isay=%isay2%

if exist h:\ideafarm.home.* echo %isay% h.
if exist h:\ideafarm.home.* set isay=%isay2%

if exist i:\ideafarm.home.* echo %isay% i.
if exist i:\ideafarm.home.* set isay=%isay2%

if exist j:\ideafarm.home.* echo %isay% j.
if exist j:\ideafarm.home.* set isay=%isay2%

if exist k:\ideafarm.home.* echo %isay% k.
if exist k:\ideafarm.home.* set isay=%isay2%

if exist l:\ideafarm.home.* echo %isay% l.
if exist l:\ideafarm.home.* set isay=%isay2%

if exist m:\ideafarm.home.* echo %isay% m.
if exist m:\ideafarm.home.* set isay=%isay2%

if exist n:\ideafarm.home.* echo %isay% n.
if exist n:\ideafarm.home.* set isay=%isay2%

if exist o:\ideafarm.home.* echo %isay% o.
if exist o:\ideafarm.home.* set isay=%isay2%

if exist p:\ideafarm.home.* echo %isay% p.
if exist p:\ideafarm.home.* set isay=%isay2%

if exist q:\ideafarm.home.* echo %isay% q.
if exist q:\ideafarm.home.* set isay=%isay2%

if exist r:\ideafarm.home.* echo %isay% r.
if exist r:\ideafarm.home.* set isay=%isay2%

if exist s:\ideafarm.home.* echo %isay% s.
if exist s:\ideafarm.home.* set isay=%isay2%

if exist t:\ideafarm.home.* echo %isay% t.
if exist t:\ideafarm.home.* set isay=%isay2%

if exist u:\ideafarm.home.* echo %isay% u.
if exist u:\ideafarm.home.* set isay=%isay2%

if exist v:\ideafarm.home.* echo %isay% v.
if exist v:\ideafarm.home.* set isay=%isay2%

if exist w:\ideafarm.home.* echo %isay% w.
if exist w:\ideafarm.home.* set isay=%isay2%

if exist x:\ideafarm.home.* echo %isay% x.
if exist x:\ideafarm.home.* set isay=%isay2%

if exist y:\ideafarm.home.* echo %isay% y.
if exist y:\ideafarm.home.* set isay=%isay2%

if exist z:\ideafarm.home.* echo %isay% z.
if exist z:\ideafarm.home.* set isay=%isay2%

echo .
echo All ideafarm.home.* folders must be in the root folder of the same local drive.
echo If execution fails, this is the first thing to check for.
echo Do not proceed with this build if there is more than one drive reported above.
echo (To fix that problem, just move all ideafarm.home.* folders to the same local drive.)
echo .
if not %1z == nopausez pause

:SETpATH

set path=%path%;c:\rimstar
set path=%path%;%idrive%\ideafarm.home.1\ephemeral\city\park\exedll\1\master;%iworkshop%\openssl\bin

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED THE WiX Toolset:
set path=%path%;%iworkshop%\wix\WiX Toolset v3.11\bin
set wix=%iworkshop%\wix\WiX Toolset v3.11\

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED Open Watcom V2:
set watcom=%iworkshop%/watcom
set include=%iworkshop%\watcom\H;%iworkshop%\watcom\H\NT;%iworkshop%\watcom\H\NT\DIRECTX;%iworkshop%\watcom\H\NT\DDK;%iworkshop%\openssl\include
rem THE OPENSSL INCLUDE PATHS MUST BE ADDED TO SYSTEM ENVIRONMENT IF NEEDED FOR VISUAL STUDIO

set path=%iworkshop%\WinHelp;%path%;%iworkshop%\cmd;%iworkshop%\watcom\BINNT;%iworkshop%\infozip\unzip.exe;%iworkshop%\infozip\zip.exe;%iworkshop%\openssl\dll;%iworkshop%\zlib\unzipped.zlib123dll\dll32

if %1z == pathz goto :FIN

rem THE NEXT LINE IS COMMENTED OUT FOR RELIABILITY (TO FORCE BUILD).  FOR SPEED, ENABLE THE NEXT LINE
rem if exist %idrive%\ideafarm.home.1\ephemeral\city\workshop\exe\ideafarm.elves.ipdos goto :BUILD

call g el

call m

:BUILD
call e

:FIN