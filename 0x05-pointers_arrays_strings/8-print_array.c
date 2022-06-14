#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: array pointer to use
 * @n: number of elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
