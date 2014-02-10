/*
 * Generate a set of 'n' random numbers. Each can have a value of upto 1000
 */
#include <time.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

int main(int argc, char *argv[])
{
	int num, i;
	FILE *f;

	if (argc < 3) {
		printf("Usage: %s <filename> <number>\n", argv[0]);
		return 1;
	}

	/* Seed the random number generator with current time */
	srand(time(NULL));

	/* Use append so I dont inadvertently destroy something useful */
	f = fopen(argv[1], "a");
	if (!f) {
		PERROR_RET("Unable to open file %s for writing", argv[1]);
	}

	num = strtoul(argv[2], NULL, 10);

	for (i = 0; i < num; i++) {
		fprintf(f, "%d ", rand() % 1000);
	}
	
	fclose(f);

	return 0;
}
