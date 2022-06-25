#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments in command line
 * @argv: array of arguments in command line
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
