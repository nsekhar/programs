CC=gcc
CFLAGS=-g -ggdb -Wall

insertsort: insertsort.o lib.o insertsorttest.o
numgen: numgen.o

clean:
	rm *.o
