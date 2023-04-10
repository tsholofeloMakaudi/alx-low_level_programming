#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments contents
 * @argc: arguents count
 * @argv: arguement vector
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
