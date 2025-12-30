@echo off

rem wcc386 -d2 bench.c
wcc386 -d2 -zp1 bench.c -q

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj
