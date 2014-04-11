#include <stdlib.h>
#include "lib.h"

static int *merge (int *a, int an, int *b, int bn)
{
	int i, j, k;
	int *c;

	c = malloc(sizeof(int) * (an + bn));

	for (i = j = k = 0; i < an + bn; i++) {

		if ((j == an) || (k == bn))
			break;

		if (a[j] <= b[k]) {
			c[i] = a[j];
			j++;
		} else {
			c[i] = b[k];
			k++;
		}
	}

	if (j < an) {
		for (; j < an; j++, i++)
			c[i] = a[j];
	} else if (k < bn) {
		for (; k < bn; k++, i++)
			c[i] = b[k];
	} else {
		printf("%s: both a and b not done!\n", __func__);
	}

	for (i = 0; i < an + bn; i++) {
		a[i] = c[i];
	}

	free (c);

	return a;
}

int *mergesort(int *a, int n)
{
	if (n == 1)
		return a;

	printarray (a, n);

	return merge(mergesort(a, n/2), n/2, mergesort(a + n/2, n/2), n/2);
}
