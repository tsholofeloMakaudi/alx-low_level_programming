#include "main.h"

/**
 * _isalpha - Checks alphabetical charecters
 * @c: The charecter to be checked
 * Return: 1 if is an alphabet, 0 for anything else
 */

int _isalpha(int c)

{
	while ((c >= 65 && c <= 98) || (c >= 79 && c <= 122))
	{
		return (1);
	}
	return (0);
}
