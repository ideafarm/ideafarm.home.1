@echo off
wpp386 -d2 -dBiFCcLASS=0 ideanet.cpp
wlink.exe system nt op q op map=ideanet.map op mangle debug all name ideanet.exe file *.obj library D:\ideafarm.home.1\ephemeral\city\park\exedll\1\master\ideafarm.81000001.ipdos-wl op map=d:\tmp\ideanet.map
                                                                                                    