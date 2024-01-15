#!/bin/bash
gcc -c -FPIC *.c
gcc -shared -o libdynamic.so  *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH


 