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
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	while(i < argc)
	{
		num = atoi(*(argv + i));
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
