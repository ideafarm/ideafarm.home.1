@echo off

echo hire me in an administrator cmd prompt to launch an admin cmd prompt for each device that contains an archive
echo then in each, run chkdsk ?: /f /v /x
                                                                                                                  
for %%s in (a b c d e f g h i j k l m n o p q r s t u v w x y z) do @if exist %%s:\ideafarm.archives\wo.ideafarm\* start "%%s" cmd.exe