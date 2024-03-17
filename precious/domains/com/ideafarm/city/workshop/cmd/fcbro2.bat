@echo off

if %1z == z goto :FIN

if not %2z == z goto :DOwO

echo param 1: the sibling folder to compare to
echo param 2 (internal use only): short file name

for %%f in (!*) do @call fcbro2.bat %1 %%f

goto :FIN

:DOwO

@dir %2 ..\%1\%2 > dir.%1.%2.ttt

:FIN