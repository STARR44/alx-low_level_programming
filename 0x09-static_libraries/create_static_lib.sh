#/bin/bash

#this file creates a standard library

gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a

