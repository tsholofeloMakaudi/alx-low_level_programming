#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguemnts passed
 * @argc: arguemnt count
 * @argv: arguement vector
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
