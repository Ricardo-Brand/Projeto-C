.PHONY: exec clean

obj = build/add.o build/sub.o build/mul.o build/divi.o build/pot.o build/sqr.o

all: build/main

build/%.o: src/%.c
	gcc -c $< -o $@

build/main: src/main.c src/functions.h $(obj)
	gcc -I src/functions.h src/main.c $(obj) -o $@

exec: build/main
	./build/main

clean: build
	rm -f ./build/*