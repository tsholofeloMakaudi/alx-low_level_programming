#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers using a pointer
 * @a: the 1st value to be swapped
 * @b: the second value to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
