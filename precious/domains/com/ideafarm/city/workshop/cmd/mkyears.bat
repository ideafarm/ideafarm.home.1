@echo off

if not %1z == z goto :WOyEAR

for %%s in (a b c d e f g h i j k l m n o p q r s t u v w x y z) do @if exist %%s:\ideafarm.archives\wo.ideafarm call mkyears.bat %%s
goto :FIN


:WOyEAR

%1:
cd \ideafarm.archives\wo.ideafarm

for %%t in (1999 2008 2009 2010 2011 2012 2013 2014 2015 2016 2017 2018 2019 2020 2021 2022 2023 2099) do @@if not exist %%t md %%t

dir


:FIN
