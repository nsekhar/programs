CC=gcc
CFLAGS=-g -ggdb -Wall -DDEBUG

all: insertsort numgen
insertsort: insertsort.o lib.o insertsorttest.o
numgen: numgen.o

clean:
	rm *.o
