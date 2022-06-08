#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print natural numbers from n to 98
 * @n: number to print from
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", 98);
	}
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ");
			n++;
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ");
			n--;
		}
		printf("%d\n", 98);
	}
}
