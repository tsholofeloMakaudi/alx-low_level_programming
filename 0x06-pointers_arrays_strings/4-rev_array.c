#include "main.h"

/**
 * reverse_array - writes tthe contents of an array in reverse
 * @a: the array of integers to be reversed
 * @n: the number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
