#!/bin/bash

mkdir ./build
rm ./build/*


gcc -c ./src/add.c -o ./build/add.o
gcc -c ./src/sub.c -o ./build/sub.o
gcc -c ./src/mul.c -o ./build/mul.o
gcc -c ./src/divi.c -o ./build/divi.o
gcc -c ./src/sqr.c -o ./build/sqr.o
gcc -c ./src/pot.c -o ./build/pot.o
gcc -I ./src/functions.h -c ./src/main.c -o ./build/main.o
gcc ./build/main.o ./build/add.o ./build/sub.o ./build/mul.o ./build/divi.o ./build/sqr.o ./build/pot.o  -o ./build/main
./build/main 
