CC=gcc
CFLAGS=-g -ggdb -Wall -DDEBUG

all: insertsort numgen
insertsort: insertsort.o lib.o insertsorttest.o
mergesort: mergesort.o lib.o mergesorttest.o
numgen: numgen.o

clean:
	rm *.o
