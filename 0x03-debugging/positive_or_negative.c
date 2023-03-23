#include "main.h"
/**
 * positive_or_negative - tests if the number is negative ir positive
 * @i: the variable to be tested
 * Return: positive ir negative
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
