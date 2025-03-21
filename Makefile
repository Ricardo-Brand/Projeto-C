.PHONY: exec clean

all: build/main

build/add.o: src/add.c
	gcc -c ./src/add.c -o ./build/add.o

build/sub.o: src/sub.c
	gcc -c ./src/sub.c -o ./build/sub.o

build/divi.o: src/divi.c
	gcc -c ./src/divi.c -o ./build/divi.o

build/sqr.o: src/sqr.c
	gcc -c ./src/sqr.c -o ./build/sqr.o

build/pot.o: src/pot.c	
	gcc -c ./src/pot.c -o ./build/pot.o

build/mul.o: src/mul.c
	gcc -c ./src/mul.c -o ./build/mul.o

build/main: src/functions.h src/main.c build/add.o build/sub.o build/mul.o build/divi.o build/sqr.o build/pot.o
	gcc -I ./src/functions.h ./src/main.c ./build/add.o ./build/sub.o ./build/mul.o ./build/divi.o ./build/sqr.o ./build/pot.o  -o ./build/main

exec: build/main
	./build/main

clean: build
	rm -f ./build/*