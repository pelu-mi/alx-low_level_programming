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
	int num, cents = 0, i;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(*(argv + 1));
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num >= change[i])
			{
				num -= change[i];
				cents++;
				break;
			}
		}
	}
	printf("%d\n", cents);
	return (0);
}
