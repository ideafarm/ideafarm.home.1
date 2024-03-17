@echo off

echo ms: "make scratch"
echo param 1 example: 4fb
echo param 2 example: f
echo example will copy adam 4fb source to scratch adam f

if %2z == z goto :FIN

d:
call g d

if exist 5adam.51000%1.1 copy 5adam.51000%1.1               5adam.5101200%2.1
if exist 5adam.51000%1.2 copy 5adam.51000%1.2               5adam.5101200%2.2
if exist 5adam.51000%1.3 copy 5adam.51000%1.3               5adam.5101200%2.3
if exist 5adam.51000%1.4 copy 5adam.51000%1.4               5adam.5101200%2.4
if exist 5adam.51000%1.5 copy 5adam.51000%1.5               5adam.5101200%2.5
if exist 5adam.51000%1.6 copy 5adam.51000%1.6               5adam.5101200%2.6
if exist 5adam.51000%1.7 copy 5adam.51000%1.7               5adam.5101200%2.7
if exist 5adam.51000%1.8 copy 5adam.51000%1.8               5adam.5101200%2.8
if exist 5adam.51000%1.9 copy 5adam.51000%1.9               5adam.5101200%2.9
if exist 5adam.51000%1.h copy 5adam.51000%1.h               5adam.5101200%2.h

:FIN