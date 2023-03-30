#include "main.h"

/**
 * *_strncpy - It copies a string
 * @dest: The buffer storing a string copy
 * @src: the source of the string
 * @n: the maximum number of bytes to be stored
 * Return: A pointer resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
 	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0; src[index++] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
