#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments in command line
 * @argv: array of arguments in command line
 * Return: Always 0
 */

int main (int argc, char **argv)
{
	int num1, num2, ans;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(*(argv + 1));
	s = *(argv + 2);
	num2 = atoi(*(argv + 3));

	if (get_op_func(s) == NULL || *(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' || *s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ans = get_op_func(s)(num1, num2);
	printf("%d\n", ans);

	return (0);
}
