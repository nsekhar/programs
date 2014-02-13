#include <stdio.h>
#include <stdlib.h>

#include "lib.h"
#include "insertsort.h"

#define MAX_NUM	10000

int main()
{
	FILE *f;
	int *a, i = 0;
	time_t t;

	f = fopen("data", "r");
	if (!f)
		PERROR_RET("Unable to open file data for reading");


	a = (int *) calloc(sizeof(int), MAX_NUM);

	while (!feof(f)) {
		fscanf(f, "%d", &a[i]);
		i++;
	}

	start_timestamp();
	insertsort(a, i - 1);
	t = stop_timestamp();
	printf("Sorting complete in %lu microseconds\n", t);
	printarray(a, i - 1);

	free(a);
	fclose(f);

	return 0;
}
