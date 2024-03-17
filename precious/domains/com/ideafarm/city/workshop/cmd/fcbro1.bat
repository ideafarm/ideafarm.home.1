@echo off

if %1z == z goto :FIN

if not %2z == z goto :DOwO

echo param 1: the sibling folder to compare to
echo param 2 (internal use only): short file name

if not exist diff md diff

for %%f in (*) do @call fcbro1.bat %1 %%f

goto :FIN

:DOwO

@fc %2 ..\%1\%2
if     errorlevel 1 echo **************************************************** D I F F E R E N T ************************************************************************
if not errorlevel 1 echo ****************************************************      S A M E      ************************************************************************
if     errorlevel 1 move %2 diff

:FIN