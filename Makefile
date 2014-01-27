CC=gcc
CFLAGS=-g -ggdb -Wall

insertsort: insertsort.o lib.o insertsorttest.o

clean:
	rm *.o
