#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: the fiest string
 * @s2: the second string to be compared
 * Return: the result found
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
