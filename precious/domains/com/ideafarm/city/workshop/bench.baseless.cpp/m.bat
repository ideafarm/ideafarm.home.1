@echo off
wpp386 -d2 bench.cpp -q

wlink.exe system nt debug all op q op mangle                                                                ^
 op map=d:\tmp\baseless.cpp.map name bench.exe                                                              ^
 file *.obj                                                                                                 ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\wsock32.lib

