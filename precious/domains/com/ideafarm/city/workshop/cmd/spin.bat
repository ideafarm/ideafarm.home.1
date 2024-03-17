@echo off

if not %1z == z goto :WOdRIVE

set /a spincount=0

for %%s in (a b c d e f g h i j k l m n o p q r s t u v w x y z) do @if exist %%s:\ideafarm.archives\* call spin %%s

echo %spincount% devices were spun

goto :FIN

:WOdRIVE

set /a spincount="spincount+1"

set /a spinxx=0
:AGAIN
set /a spinxx="spinxx+1"
echo %spincount%         %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1 %1
if %spinxx%z == 1024z goto :AFTERbANNER
goto :AGAIN
:AFTERbANNER


%1:
dir \ideafarm.archives\*
if exist \ideafarm.archives\wo.ideafarm\* dir \ideafarm.archives\wo.ideafarm\*
if exist \ideafarm.archives\wo.ideafarm\1999\* dir \ideafarm.archives\wo.ideafarm\1999\*
if exist \ideafarm.archives\wo.ideafarm\2099\!ideafarm.9.2.00000000.00000001.20990000@0000.* dir \ideafarm.archives\wo.ideafarm\2099\!ideafarm.9.2.00000000.00000001.20990000@0000.*

:FIN

