.PHONY: exec clean format

#obj = build/add.o build/sub.o build/mul.o build/divi.o build/pot.o build/sqr.o
SRCS = $(filter-out src/main.c, $(wildcard src/*.c))

OBJS = $(patsubst src/%.c, build/%.o, $(SRCS))

all: build/main

build/%.o: src/%.c
	gcc -c $< -o $@

build/main: src/main.c src/functions.h $(OBJS)
	gcc -I src/functions.h src/main.c $(OBJS) -o $@

exec: build/main
	./build/main

clean: build
	rm -f ./build/*

format: 
	clang-format -i ./src/*