#include "main.h"
/**
 * main - calls a function that print alphabets X10
 *
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while(i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
