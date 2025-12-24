@echo off
wpp386 -d2 bench.cpp -q

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library TurboBase64Wrapper.lib
