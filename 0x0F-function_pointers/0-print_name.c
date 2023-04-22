#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prits name using poiter to a fuction
 * @name: tring to add
 * @f: pointer to functio
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
