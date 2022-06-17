#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: Array to be reversed
 * @n: length of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, swap;

	i = 0;
	while (i < n / 2)
	{
		swap = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = swap;
		i++;
	}
}
