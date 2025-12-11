@echo off

cd \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\ideanet
if exist *.obj del *.obj

if exist *.err del *.err
if exist *.exe del *.exe
if exist *.map del *.map

rem echo --------------------------------------------------------------------------------------------------------------------------------------------------
rem dir
rem echo --------------------------------------------------------------------------------------------------------------------------------------------------

copy \ideafarm.home.1\ephemeral\city\workshop\3object.exe\510008c0.*.obj

wpp386 -q -d2 -dBiFCcLASS=0 ideanet.cpp

wlink.exe system nt op q op map=ideanet.map op mangle debug all name ideanet                                                                                                                ^
 file *.obj                                                                                                                                                                                 ^
 library \ideafarm.home.1\ephemeral\city\workshop\3object.exe\base.exe.lib                                                                                                                  ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\microsoft\User32.Lib                                                                                                  ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\advapi32.lib                                                                                         ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\PowrProf.lib                                                                                         ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\psapi.lib                                                                                            ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\shlwapi.lib                                                                                          ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\winmm.lib                                                                                            ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\Ws2_32.lib                                                                                           ^
 library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\wsock32.lib                                                                                          ^
 segment type code shared segment class 'CODE' shared segment 'BEGTEXT' shared segment '_TEXT' shared segment 'CONST' shared segment 'CONST2' shared exp '_rTagF@0' exp '_eipF@4'           ^
 > ideanet.link.err

dir

if not exist d:\tmp md d:\tmp
copy ideanet.exe d:\tmp\ideanet.unconfigured.exe