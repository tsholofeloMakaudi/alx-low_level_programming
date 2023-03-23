#include <stdio.h>
#include <math.h>

/**
 * main - prints the large prime factor of the number
 * Return: alyways 0
 */

int main(void)
{
	long x, mathf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
