#include <stdio.h>

#include <sys/time.h>

#include "lib.h"

__thread struct timeval tv_start, tv_stop;

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void printarray(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	printf("\n");
}

void start_timestamp()
{
	gettimeofday(&tv_start, NULL);
}

time_t stop_timestamp()
{
	struct timeval tv_res;

	gettimeofday(&tv_stop, NULL);
	timersub(&tv_stop, &tv_start, &tv_res);

	return tv_res.tv_sec * 1000000UL + tv_res.tv_usec;
}
