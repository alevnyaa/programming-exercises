.PHONY: clean

all: bin/hello bin/clearscreen bin/sieve

bin/hello: src/hello.S
	as -o build/hello.o src/hello.S
	ld -s -o bin/hello build/hello.o

bin/clearscreen: src/clearscreen.S
	as -o build/clearscreen.o src/clearscreen.S
	ld -s -o bin/clearscreen build/clearscreen.o

bin/sieve: src/sieve.S
	as -o build/sieve.o src/sieve.S
	ld -s -o bin/sieve build/sieve.o

clean:
	rm -rf bin build
