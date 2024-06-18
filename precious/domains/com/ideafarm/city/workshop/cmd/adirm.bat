@echo off

if %1z == z goto :NEEDtIMESTAMP

if not %2z == z goto :HAVEmOUNT

d:
if not exist \tmp\* md \tmp
cd               \tmp
if not %cd% == D:\tmp goto :FIN
md               adirm.%1
cd               \tmp\adirm.%1
if not %cd% == D:\tmp\adirm.%1 goto :FIN

cd               \ideafarm.home.101\devices
if not %cd% == D:\ideafarm.home.101\devices goto :FIN

for /d %%d in (*) do @if exist %%d\* start "%%d" adirm.bat %1 %%d

goto :FIN


:HAVEmOUNT
d:
cd \ideafarm.home.101\devices\%2\ideafarm.archives\wo.ideafarm
 for /d %%y in (2099) do @dir /s /o:-d %%y > d:\tmp\adirm.%1\adirm.%1.%2.%%y.ttt
rem    for /d %%y in (*)    do @dir /s /o:-d %%y > d:\tmp\adirm.%1\adirm.%1.%2.%%y.ttt
exit


:NEEDtIMESTAMP
echo parameter 1: timestamp in the form 20231116@0947
echo nothing done

:FIN
