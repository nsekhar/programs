#include <stdio.h>
#include <stdlib.h>

#include "lib.h"
#include "insertsort.h"

#define MAX_NUM	10000

int main()
{
	FILE *f;
	int *a, i = 0;

	f = fopen("data", "r");
	if (!f)
		PERROR_RET("Unable to open file data for reading");


	a = (int *) calloc(sizeof(int), MAX_NUM);

	while (!feof(f)) {
		fscanf(f, "%d", &a[i]);
		i++;
	}

	insertsort(a, i - 1);
	printarray(a, i - 1);

	free(a);

	return 0;
}
