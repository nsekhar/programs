#include <stdio.h>
#include "lib.h"
#include "insertsort.h"

int main()
{
	int a[] = {2, 5, 1, 3, 10};
	insertsort(a, sizeof(a)/sizeof(int));
	printarray(a, sizeof(a)/sizeof(int));

	return 0;
}
