#include <stdio.h>

/**
 * _strlen - tells us the length of a string
 * @s: the string to get the length of
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
