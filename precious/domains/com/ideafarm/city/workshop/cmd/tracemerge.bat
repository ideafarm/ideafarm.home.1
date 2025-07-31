@echo off

adam 51000622 !idHome 10000008 !make ba8
adam 510008ab !idHome 10000008

d:
cd \ideafarm.home.1\tmp

if not exist tracecopy.all.ttt echo file tracecopy.dns1.ttt not found
if not exist tracecopy.all.ttt goto :FIN

sort tracecopy.all.ttt /o tracecopy.all.sorted.ttt
dir tracecopy.*

:FIN
