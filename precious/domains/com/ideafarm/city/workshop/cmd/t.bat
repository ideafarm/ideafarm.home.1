@echo off

E:
cd \ideafarm.archives\wo.ideafarm
if not %cd% == E:\ideafarm.archives\wo.ideafarm echo %cd% (!exception: could not set E: current directory to wo.ideafarm)
if not %cd% == E:\ideafarm.archives\wo.ideafarm goto :FIN

U:
cd \ideafarm.archives.unzipped\wo.ideafarm
if not %cd% == U:\ideafarm.archives.unzipped\wo.ideafarm echo %cd% (!exception: could not set U: current directory to wo.ideafarm)
if not %cd% == U:\ideafarm.archives.unzipped\wo.ideafarm goto :FIN

if not %1z == z goto :WOyEAR

for /d %%y in (*) do @call t.bat %%y

goto :FIN


:WOyEAR

echo woyear: %1

E:
cd %1
if not %cd% == E:\ideafarm.archives\wo.ideafarm\%1 echo %cd% (!exception: could not set E: current directory to year)
if not %cd% == E:\ideafarm.archives\wo.ideafarm\%1 goto :FIN

U:
cd %1
if not %cd% == U:\ideafarm.archives.unzipped\wo.ideafarm\%1 echo %cd% (!exception: could not set U: current directory to year)
if not %cd% == U:\ideafarm.archives.unzipped\wo.ideafarm\%1 goto :FIN

for %%f in (e:*) do @pkzipc -extract %%f

cd..
e:
cd..


:FIN