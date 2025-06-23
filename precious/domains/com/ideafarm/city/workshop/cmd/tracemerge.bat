@echo off

d:
cd \tmp
for %%s in (wh1 wh2 dns1 go1) do copy \\%%s\d\ideafarm.home.101\ephemeral\ipdos\memorySpaces\Administrator\00000100\stateSpaces\fffeffff\bkstrace.* bkstrace.all.%%s.ttt
dir bkstrace.all.*
copy bkstrace.all.* bkstrace.all.all.ttt
sort < bkstrace.all.all.ttt /o bkstrace.all.sorted.ttt
