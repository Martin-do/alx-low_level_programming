#!bin/bash
gcc -c *.c
ar liball.a *.o
ranlib liball.a
