#!/bin/bash
gcc  -c -fPIC *.ic
gcc -shared -o liball.so *.o
