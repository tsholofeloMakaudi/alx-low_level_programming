#include "main.h"

/**
 * _islower - checkes for lowercase charecters
 * @c: The charecters to be checked
 * Return: 1 for lowercase charecters 0 for anything else
 */

int _islower(int c)

{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
