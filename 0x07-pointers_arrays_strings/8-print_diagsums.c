#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print sum of diagonals of an array
 * @a: array
 * @size: size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + (size * i) + i);
		diag2 += *(a + ((size - 1) * (i + 1)));
	}
	printf("%u ,%u\n", diag1, diag2);
}
