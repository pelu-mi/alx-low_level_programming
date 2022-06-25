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
	int n = (int) (argv - argv);

	printf("%d\n", argc - 1);
	return (n);
}
