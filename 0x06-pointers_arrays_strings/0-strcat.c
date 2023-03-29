#include "main.h"
/**
 * *_strcat - concatinates 2 strings
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
