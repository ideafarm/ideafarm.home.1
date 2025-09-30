@echo off

goto :FOOEY

rem param 1: the same timestamp that was specified for the most recent call to adirm.bat (required)

echo i presume that adirm has launched me
echo wait for all adirm sessions to end before...
pause

d:
if not exist \tmp\adirm.%1\* echo !exception: \tmp\adirm.%1\* does not exist
if not exist \tmp\adirm.%1\* goto :FIN

cd \tmp\adirm.%1
if not %cd% == D:\tmp\adirm.%1 echo !exception: i could not set current directory to D:\tmp\adirm.%1
if not %cd% == D:\tmp\adirm.%1 goto :FIN

:FOOEY

echo now use the Rimstar editor (rw.exe), which i will hire for you, to do the following:
echo     replace ^ V.+$         with [null length string] for all buffers
echo     replace ^ D.+$         with [null length string] for all buffers
echo     replace ^.+xDIRy.+$    with [null length string] for all buffers (x denotes less than angle bracket.  y denotes greater than angle bracket.)
echo     replace ^.+bytes free$ with [null length string] for all buffers
echo     when you have completed these replacements, close Rimstar and i will present my report
echo     press a key now and i will hire Rimstar so that you can make these replacements

pause

rw *

for %%f in (adirm.*) do @sort /+36 < %%f > s.%%f

del a*

if exist fc.ttt del fc.ttt

    for %%s in (2099 2023 2022 2021 2020 2019 2018 2017 2016 2015 2014 2013 2012 2011 2010 2009 2008 1999) do @for %%f in (*.%%s.ttt) do @fc %%f s.adirm.%1.ssd4.arc.2024070404.%%s.ttt >> fc.ttt
rem for %%s in (2099 2023 2022 2021 2020 2019 2018 2017 2016 2015 2014 2013 2012 2011 2010 2009 2008 1999) do @for %%f in (*.%%s.ttt) do @fc %%f s.adirm.%1.internal.%%s.ttt            >> fc.ttt
rem U:: ENABLE THE PRECEDING LINE AFTER HEALED ARCHIVE IS COPIED TO THE INTERNAL SSD DRIVE e:

rw fc.ttt

:FIN
