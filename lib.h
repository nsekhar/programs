#ifndef _LIB_H
#define _LIB_H

#include <stdio.h>
#include <errno.h>
#include <string.h>

#include <sys/time.h>

void swap(int *a, int *b);
void printarray(int a[], int n);
void start_timestamp();
time_t stop_timestamp();

#define PERROR_RET(fmt, arg...)	do {				\
		int errsv = errno;				\
		printf(fmt ": %s\n", ##arg, strerror(errsv));	\
		return errsv;					\
	} while (0);

#endif
