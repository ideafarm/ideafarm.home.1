@echo off

if exist i:\tmp\*                   del i:\tmp\* /q

call g m

rem DONE THIS WAY TO BE SAFE; "call g m" WILL FAIL TO CHANGE DIR IF I AM CALLED AFTER DELETING ephemeral DIRECTORY

if exist ideafarm.????????.ipdos-wm del ideafarm.????????.ipdos-wm
if exist ideafarm.????????.ipdos-wl del ideafarm.????????.ipdos-wl

if exist ideafarm.????????.ipdos-tm del ideafarm.????????.ipdos-tm
if exist ideafarm.????????.ipdos-tl del ideafarm.????????.ipdos-tl

dir

call g 1
if exist ideafarm.????????.ipdos-wd del ideafarm.????????.ipdos-wd
if exist ideafarm.????????.ipdos-we del ideafarm.????????.ipdos-we

dir
