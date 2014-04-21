#include <stdio.h>

int main()
{
	unsigned int x = 0b11010;
	int count = 0;

	/* x & (x - 1) eliminates the least significant set bit */
	while (x != 0) {
		x = x & (x - 1);
		count++;
	}
	printf ("count: %d\n", count);

	return 0;
}
