#include "main.h"
/**
 * _abs - Computes the absalute value of an integer
 * @c: the number to be computed
 * Return: absalute value of a number or zero
 */

int _abs(int c)

{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
