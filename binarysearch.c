#include "lib.h"

bool binarysearch(int *a, int low, int high, int key)
{
	int mid = (low + high) / 2;

	if(a[mid] == key)
		return true;
	else if (low == high)
		return false;
	else if (a[mid] > key)
		return binarysearch(a, low, mid - 1, key);
	else
		return binarysearch(a, mid + 1, high, key);
}
