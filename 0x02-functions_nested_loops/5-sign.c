#include "main.h"
/**
 * print_sign - Checks if a number is positive or negative
 * @n: the number to check
 * Return: + for positive, - for negative and 0 for zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
