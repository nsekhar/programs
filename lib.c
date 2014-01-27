#include <stdio.h>
#include "lib.h"

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
