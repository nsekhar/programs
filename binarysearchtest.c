#include <stdlib.h>
#include "lib.h"

#define MAX_NUM	10000

int main(int argc, char *argv[])
{
	FILE *f;
	int *a, i = 0, key;
	time_t t;
	bool found;

	if (argc < 2) {
		fprintf(stderr, "Usage: %s <key>\n", argv[0]);
		return 1;
	}

	f = fopen("data", "r");
	if (!f)
		PERROR_RET("Unable to open file data for reading");


	sscanf(argv[1], "%d", &key);

	a = (int *) calloc(sizeof(int), MAX_NUM);

	while (!feof(f)) {
		fscanf(f, "%d", &a[i]);
		i++;
	}

	start_timestamp();
	found = binarysearch(a, 0, i - 2, key);
	t = stop_timestamp();
	printf("Key %d was %s.\n", 
			key, found ? "found" : "not found");
	printf("Search complete in %lu microseconds\n", t);

	free(a);
	fclose(f);

	return 0;
}
