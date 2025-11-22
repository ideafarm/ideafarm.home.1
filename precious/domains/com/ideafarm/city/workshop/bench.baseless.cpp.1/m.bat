@echo off
wpp386 -d2 bench.cpp
wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj op map=d:\tmp\baseless.cpp.map
