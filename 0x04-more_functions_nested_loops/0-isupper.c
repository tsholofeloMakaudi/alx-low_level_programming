#include "main.h"

/**
 * _isupper - checks if the letter is uppe
 * @c: the value to be checked
 * Return: 1 for upper, 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
