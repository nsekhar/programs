#include "lib.h"
#include "insertsort.h"

void insertsort(int a[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap (a + i, a + j);
}
