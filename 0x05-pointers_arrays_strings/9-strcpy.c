#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination of astring
 * @src: source value
 * Return: the pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
