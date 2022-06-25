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
	int num, cents = 0;

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
		if (num >= 25)
		{
			num -= 25;
			cents++;
		}
		else if (num >= 10)
		{
			num -= 10;
			cents++;
		}
		else if (num >= 5)
		{
			num -= 5;
			cents++;
		}
		else if (num >= 2)
		{
			num -= 2;
			cents++;
		}
		else if (num >= 1)
		{
			num -= 1;
			cents++;
		}
	}
	printf("%d\n", cents);
	return (0);
}
