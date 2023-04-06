#include "main.h"
#include <stdio.h>

int check_prime(int b, int c);

/**
 * is_prime_number - checks if an intiger is a prime number or  not
 * @n: the integer to check
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks number if its a prime
 * @b: the number to be checked
 * @c: the iteration times
 * Return: 1 for prime 0 for composite
 */

int check_prime(int b, int c)
{
	if (b <= 1)
		return (0);
	if (b % c == 0 && c > 1)
		return (0);
	if ((b / c) < c)
		return (1);
	return (check_prime(b, c + 1));
}
