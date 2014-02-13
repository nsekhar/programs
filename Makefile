CC=gcc
CFLAGS=-g -ggdb -Wall

all: insertsort numgen
insertsort: insertsort.o lib.o insertsorttest.o
numgen: numgen.o

clean:
	rm *.o
