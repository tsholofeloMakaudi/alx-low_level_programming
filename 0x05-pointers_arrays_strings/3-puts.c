#include "main.h"
/**
 * _puts - write a function that prints a string the a new line
 * @str: the string to be printed
 * Return: nothing
 */

void  _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
