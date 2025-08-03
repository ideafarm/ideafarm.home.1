@echo off

rem param 1 (optional): path for output file

adam 51000622 !idHome 10000008 !make ba8
adam 510008ab !idHome 10000008

d:
cd \ideafarm.home.1\tmp

if not exist tracecopy.all.ttt echo file tracecopy.dns1.ttt not found
if not exist tracecopy.all.ttt goto :FIN


if     %1z == z sort tracecopy.all.ttt /o tracecopy.all.sorted.ttt
if not %1z == z sort tracecopy.all.ttt /o \1\tracecopy.all.sorted.ttt
dir tracecopy.*

:FIN
