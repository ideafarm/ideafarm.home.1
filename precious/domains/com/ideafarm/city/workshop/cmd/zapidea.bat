@echo off
setlocal

if not %3z == z goto :DOmEMORYsPACE
if not %1z == z goto :DOhOME

if exist c:\tmp\ideafarm.service.log.txt del c:\tmp\ideafarm.service.log.txt

%idrive%
cd\
if exist ideafarm.home.1\* goto :GOTdRIVE
if exist ideafarm.home.101\* goto :GOTdRIVE

echo can't find ideafarm.home.1\*
echo nothing done
goto :FIN1

:GOTdRIVE

for /d %%d in (ideafarm.home.*) do @call zapidea %%d

goto :FIN1




:DOhOME

echo will zap some ephemeral directories within %1

rem set xx=ZDFY1VDS29OyO02Na5kA
rem if %1z == ideafarm.home.1z set xx=ZDFY1VDS29OyO02Na5kA
rem: this is for servers:      set xx=ZDFY1VDS29OyO02Na5kA

                               set ww=woide
                               set xx=WoIdeafarm
                               set yy=SYSTEM
                               set zz=Administrator

echo zapping for users %ww% and %xx% and %yy% and %zz%

cd \%1\ephemeral
rem CANNOT DO THIS BECAUSE IT WILL ZAP THE SETTINGS FILES: del /s *.bookc
cd \
              
rem THE NEXT LINE PRESERVES SUBDIRECTORIES IN tmp FOR THE BENEFIT OF HOME 101 ON FACTORY1 (privileges, registry)
if     exist \%1\tmp\*                                                                                           del      /q \%1\tmp
if     exist \%1\ephemeral\reports\*                                                                             rmdir /s /q \%1\ephemeral\reports

if     exist \%1\ephemeral\ipdos\memorySpaces\%xx%\00000100\stateSpaces\510006d9\* rmdir /s /q \%1\ephemeral\ipdos\memorySpaces\%xx%\00000100\stateSpaces\510006d9
if     exist \%1\ephemeral\ipdos\memorySpaces\%yy%\00000100\stateSpaces\510006d9\* rmdir /s /q \%1\ephemeral\ipdos\memorySpaces\%yy%\00000100\stateSpaces\510006d9

for %%s in ( 001 002 003 004 005 006 100 ) do @call zapidea %1 %%s %ww%
for %%s in ( 001 002 003 004 005 006 100 ) do @call zapidea %1 %%s %xx%
for %%s in ( 001 002 003 004 005 006 100 ) do @call zapidea %1 %%s %yy%
for %%s in ( 001 002 003 004 005 006 100 ) do @call zapidea %1 %%s %zz%

goto :FIN2

:DOmEMORYsPACE

echo zapping for memory space %2 user %3

if     exist \%1\ephemeral\ipdos\memorySpaces\%3\00000%2\stateSpaces\ffff0000\* rmdir /s /q \%1\ephemeral\ipdos\memorySpaces\%3\00000%2\stateSpaces\ffff0000

if not exist \%1\ephemeral\ipdos\memorySpaces\%3\00000%2\stateSpaces\fffeffff\* goto :FIN2

cd           \%1\ephemeral\ipdos\memorySpaces\%3\00000%2\stateSpaces\fffeffff

if exist bkstelemetrysys.*               del bkstelemetrysys.*
if exist bkstelemetryapp.*               del bkstelemetryapp.*
if exist bkstrace.*                      del bkstrace.*
if exist bksTraceDivert??.*              del bksTraceDivert??.*
if exist bksTraceHomeEcho.*              del bksTraceHomeEcho.*
if exist bksTraceHomeEchoDeadman1.*      del bksTraceHomeEchoDeadman1.*
if exist bksTraceHomeEchoGorillaHome.*   del bksTraceHomeEchoGorillaHome.*
if exist bktraceloop.*                   del bktraceloop.*
if exist bksword.*                       del bksword.*
if exist bkswords.*                      del bkswords.*

if exist log*                            del log*

if exist walk*                           del walk*
if exist kv.cloud*                       del kv.cloud*
if exist survey1.*                       del survey1.*

if exist kernel.minute.reports.*         del kernel.minute.reports.*

:FIN1
endlocal

:FIN2