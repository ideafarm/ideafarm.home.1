@echo off

rem PSEUDOdUPLICATED CODE adam/m.bat elves/elves.cpp
wpp386 -q -d2 -dBiFCcLASS=0 adam.cpp
wlink.exe system nt op q op mangle op map=adam.map debug all name %idrive%\ideafarm.home.1\ephemeral\city\workshop\exe\adam.exe file *.obj library %idrive%\ideafarm.home.1\ephemeral\city\park\exedll\1\master\ideafarm.81000001.ipdos-wl
