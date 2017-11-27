.PHONY: clean

all: directories bin/hello bin/clearscreen bin/sieve

directories:
	mkdir -p bin

# needs things like printf linked
# bin/sieve: src/sieve.S
# 	as -o build/sieve.o src/sieve.S
# 	ld -s -o bin/sieve build/sieve.o

bin/hello: src/hello.S
	gcc -o bin/hello src/hello.S -no-pie

bin/clearscreen: src/clearscreen.S
	gcc -o bin/clearscreen src/clearscreen.S -no-pie

bin/sieve: src/sieve.S
	gcc -o bin/sieve src/sieve.S -no-pie

clean:
	rm -rf bin
