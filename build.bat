@echo off
set fileDir=%1
%GBDK_WIN%/bin/lcc -Wa-l -Wl-m -Wl-j -c -o %fileDir%/main.o %fileDir%/main.c
%GBDK_WIN%/bin/lcc -Wa-l -Wl-m -Wl-j -o %fileDir%/output.gb %fileDir%/main.o
cd %fileDir%
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o