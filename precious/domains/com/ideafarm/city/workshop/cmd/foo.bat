@echo off

set fnamedown=d:\tmp\shields.down.txt

echo writing %fnamedown%
echo shields down! > %fnamedown%

echo waiting for that file to be "eaten" by the http server

:AGAIN

if not exist %fnamedown% goto :GONE1

echo waiting to not see %fnamedown%
timeout /t 1 /nobreak > NUL

goto :AGAIN

:GONE1
echo %fnamedown% is gone
echo bye!



