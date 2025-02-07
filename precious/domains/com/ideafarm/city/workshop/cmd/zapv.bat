@echo off

if not %1z == z goto :DOdEVICE

cls
d:
cd \ideafarm.home.101\devices\
echo current dir is %cd%

for /d %%d in (*) do @call zapv.bat %%d
goto :FIN

:DOdEVICE

cd \ideafarm.home.101\devices\%1
echo current dir is %cd%

if not %cd%z == D:\ideafarm.home.101\devices\%1z goto :FIN

:V1
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20170131@0908.0a74553a0c5632d54d609aea2aeba6a4.001.* goto :V2
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20170131@0908.0a74553a0c5632d54d609aea2aeba6a4.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20170131@0908.0a74553a0c5632d54d609aea2aeba6a4.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20170131@0908.0a74553a0c5632d54d609aea2aeba6a4.001.*

:V2
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20170306@1906.cdfdb423d448f823205003334fc5c3ef.001.* goto :V3
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20170306@1906.cdfdb423d448f823205003334fc5c3ef.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20170306@1906.cdfdb423d448f823205003334fc5c3ef.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20170306@1906.cdfdb423d448f823205003334fc5c3ef.001.*

:V3
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20170306@2005.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.* goto :V4
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20170306@2005.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20170306@2005.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20170306@2005.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*

:V4
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20170306@1904.a33a15cf5af4f1d91d517a6940da8334.001.* goto :V5
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20170306@1904.a33a15cf5af4f1d91d517a6940da8334.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20170306@1904.a33a15cf5af4f1d91d517a6940da8334.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20170306@1904.a33a15cf5af4f1d91d517a6940da8334.001.*

:V5
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20140702@0817.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.* goto :V6
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20140702@0817.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20140702@0817.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140702@0817.20140702@0817.ad08d028c61cf7f5a0bc5bc60a77ee3c.001.*

:V6
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20140125@1426.a33a15cf5af4f1d91d517a6940da8334.001.* goto :V7
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20140125@1426.a33a15cf5af4f1d91d517a6940da8334.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20140125@1426.a33a15cf5af4f1d91d517a6940da8334.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140125@1426.20140125@1426.a33a15cf5af4f1d91d517a6940da8334.001.*

:V7
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20140226@1828.cdfdb423d448f823205003334fc5c3ef.001.* goto :V8
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20140226@1828.cdfdb423d448f823205003334fc5c3ef.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20140226@1828.cdfdb423d448f823205003334fc5c3ef.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2014\!ideafarm.9.2.00000000.00000001.20140226@1828.20140226@1828.cdfdb423d448f823205003334fc5c3ef.001.*

:V8
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20170131@0908.1321f728daeaff939719ff5e7a0e6673.001.* goto :V9
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20170131@0908.1321f728daeaff939719ff5e7a0e6673.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20170131@0908.1321f728daeaff939719ff5e7a0e6673.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20170131@0908.1321f728daeaff939719ff5e7a0e6673.001.*

:V9
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20170131@0908.4b19aa6c36f388f91a9bb23ef27e07ba.001.* goto :Va
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20170131@0908.4b19aa6c36f388f91a9bb23ef27e07ba.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20170131@0908.4b19aa6c36f388f91a9bb23ef27e07ba.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20170131@0908.4b19aa6c36f388f91a9bb23ef27e07ba.001.*

:Va
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20121210@1419.0a74553a0c5632d54d609aea2aeba6a4.001.* goto :Vb
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20121210@1419.0a74553a0c5632d54d609aea2aeba6a4.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20121210@1419.0a74553a0c5632d54d609aea2aeba6a4.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1419.20121210@1419.0a74553a0c5632d54d609aea2aeba6a4.001.*

:Vb
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20121210@1516.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.* goto :Vc
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20121210@1516.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20121210@1516.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20121210@1516.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*

:Vc
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20170306@1853.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.* goto :Vd
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20170306@1853.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20170306@1853.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1516.20170306@1853.b8b7d0c3695688eb7d7cccd4f9aa7d8c.001.*

:Vd
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20121210@1448.4b19aa6c36f388f91a9bb23ef27e07ba.001.* goto :Ve
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20121210@1448.4b19aa6c36f388f91a9bb23ef27e07ba.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20121210@1448.4b19aa6c36f388f91a9bb23ef27e07ba.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121210@1448.20121210@1448.4b19aa6c36f388f91a9bb23ef27e07ba.001.*

:Ve
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.* goto :Vf
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*

:Vf
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.* goto :Vg
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*

:Vg
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.* goto :Vh
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*

:Vh
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.* goto :Vi
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*

:Vi
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.* goto :Vj
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.a.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*

:Vj
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.* goto :Vk
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20140721@1758.0c3d07545d637835c81483e3424e70e0.001.*

:Vk
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.* goto :Vl
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.?.2.00000000.00000001.20140721@1758.20170306@1910.0c3d07545d637835c81483e3424e70e0.001.*

:Vl
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.* goto :V99
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\!ideafarm.9.2.00000000.00000001.20121122@0803.20121122@0803.1321f728daeaff939719ff5e7a0e6673.001.*




:V99
goto :FIN



THIS IS A SKELETON TO USE FOR ADDING VIRUS FILES (REPLACE 2012 WITH CORRECT YEAR; REPLACE ZZ WITH SHORT FILE NAME ENDING WITH *):

:V
if not exist D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\ZZ goto :V
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\ZZ
del          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\ZZ
pause
dir          D:\ideafarm.home.101\devices\%1\ideafarm.archives\wo.ideafarm\2012\ZZ


:FIN
