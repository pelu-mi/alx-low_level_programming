#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - function to check if a string is a number
 * @s: string to check
 * Return: 1 if number, 0 if not
 */

int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]!= '\0'; i++)
	{
		if (isdigit(s[i]) == 0)
			return (0);
	}
	return (1);
}

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
	while (i < argc)
	{
		num = atoi(*(argv + i));
		if (isNumber(*(argv + i)) == 0)
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
