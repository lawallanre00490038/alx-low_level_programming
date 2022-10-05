#!/bin/bash
-fPIC -c *.c
gcc -shared -o liball.so *.o
