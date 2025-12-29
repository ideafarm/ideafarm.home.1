@echo off
wpp386 -d2 -zp1 bench.cpp -q

wlink.exe system nt debug all op q op mangle                                                                ^
 op map=d:\tmp\baseless.cpp.map name bench.exe                                                              ^
 file *.obj                                                                                                 ^

