@echo off

d:
cd \tmp
if exist bkstrace.all.* del bkstrace.all.*
for %%s in (wh1 wh2 dns1 go1) do copy \\%%s\d\ideafarm.home.101\ephemeral\ipdos\memorySpaces\Administrator\00000100\stateSpaces\fffeffff\bkstrace.* bkstrace.all.%%s.ttt
echo in the editor, remove the trailing white space at the end of each file
for %%f in (bkstrace.all.*) do rw %%f
copy bkstrace.all.* bkstrace.all.all.ttt
sort < bkstrace.all.all.ttt /o bkstrace.all.sorted.ttt
dir bkstrace.all.*
