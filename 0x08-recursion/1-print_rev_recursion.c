#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse folloewd by a new line
 * @s: the string to print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
