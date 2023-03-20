#include <unistd.h>
/**
 * main - entry point
 * program prints character c on request
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
