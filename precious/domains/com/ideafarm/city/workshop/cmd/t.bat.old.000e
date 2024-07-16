@echo off

fc e:%1 f:%1 > nul
if not %errorlevel% == 0 echo different: %1
if     %errorlevel% == 0 echo same     : %1
