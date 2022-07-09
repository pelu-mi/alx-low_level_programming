#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments from command line
 * @argv: array of command line arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (byte - 1); i++)
	{
		if (byte != 0)
			printf("%02hhx ", ((char *)main)[i]);
	}

	printf("%02hhx\n", ((char *)main)[i]);

	return (0);
}
