#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: Array to be reversed
 * @n: length of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, swap[10000];

	i = 0;
	j = n;
	while (i < n)
	{
		swap[i] = *(a + j);
		i++;
		j--;
	}

	while (j < n)
	{
		*(a + j) = swap[i];
		i--;
		j++;
	}
}
