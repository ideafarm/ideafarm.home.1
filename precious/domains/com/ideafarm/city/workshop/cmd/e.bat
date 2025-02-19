@echo off
%idrive%
cd \ideafarm.home.1\ephemeral\city\workshop\exe

if %1z == dz wdw   ideafarm.elves.ipdos
if %1z == dz goto :FIN

if %1z == wz       ideafarm.elves.ipdos
if %1z == wz goto :FIN

if %1z == z  start ideafarm.elves.ipdos




:FIN