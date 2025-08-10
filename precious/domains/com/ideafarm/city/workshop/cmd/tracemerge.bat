@echo off

rem param 1 (optional): path for output file

call a.bat TOOLtRACEcOPY

c:
cd \tmp

if not exist tracecopy.all.ttt echo file tracecopy.dns1.ttt not found
if not exist tracecopy.all.ttt goto :FIN

if     %1z == z sort tracecopy.all.ttt /o tracecopy.all.sorted.ttt
if not %1z == z sort tracecopy.all.ttt /o %1\tracecopy.all.sorted.ttt

if     %1z == z call a.bat TOOLfILEsPLIT !file ///c/tmp/tracecopy.all.sorted.ttt
if not %1z == z call a.bat TOOLfILEsPLIT !file %1\tracecopy.all.sorted.ttt

c:
dir tracecopy.*

:FIN
