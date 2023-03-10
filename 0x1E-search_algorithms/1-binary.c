#include "search_algos.h"
#include <math.h>

/**
 * binary_search - Implement binary search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m, l = 0, r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		/* Computation */
		m = floor((l + r) / 2);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
