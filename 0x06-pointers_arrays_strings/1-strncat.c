#include "main.h"

/**
 * *_strncat - concatinates two strings using at most
 * @dest: the string to be uppended at most
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ind = 0, dlen = 0;

	while (dest[ind++])
	dlen++;
	for (ind = 0; src[ind] && ind < n; ind++)
	dest[dlen++] = src[ind];
	return (dest);
}
