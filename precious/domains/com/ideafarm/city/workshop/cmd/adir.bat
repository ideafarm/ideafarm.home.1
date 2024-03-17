@echo off

rem param 1: device
rem param 2: year

if %1z == z goto :HAVEnOTHING
if %2z == z goto :HAVEdEVICE
            goto :HAVEdEVICEaNDyEAR


:HAVEnOTHING
echo HAVEnOTHING

for %%s in (a b c d e f g h i j k l m n o p q r s t u v w x y z) do @if exist %%s:\ideafarm.archives\wo.ideafarm\* call adir.bat %%s
goto :FIN


:HAVEdEVICE
echo HAVEdEVICE %1

for %%s in (1999 2008 2009 2010 2011 2012 2013 2014 2015 2016 2017 2018 2019 2020 2021 2022 2023 2099) do @if exist %1:\ideafarm.archives\wo.ideafarm\%2\* call adir.bat %1 %%s
goto :FIN


:HAVEdEVICEaNDyEAR

%1:
if not exist \ideafarm.archives\wo.ideafarm\%2\* goto :FIN
echo HAVEdEVICEaNDyEAR %1 %2
cd \ideafarm.archives\wo.ideafarm\%2
dir * > d:\tmp\dir.adir.%2.%1.ttt
goto :FIN


:FIN

