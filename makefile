all: main.o sieve.o
	gcc main.o sieve.o -lm
main.o: sieve.h main.c
	gcc -c main.c
sieve.o: sieve.c
	gcc -c sieve.c

run:
	./a.out
clean: all
	rm *.o
	rm *.out
	rm *~*
