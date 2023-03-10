#include "search_algos.h"
#include <math.h>

/**
 * recursive_binary - Implement binary search using recursion
 * @array: Array to be searched
 * @left: left index of array
 * @right: right index of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t i, m, l = left, r = right;

	if (l > r)
		return (-1);
	printf("Searching in array: %d", array[l]);
	for (i = l + 1; i <= r; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
	/* Computation */
	m = floor((l + r) / 2);
	if (value == array[m] && (l == r || l + 1 == r))
		return (m);
	if (value > array[m])
		return (recursive_binary(array, m + 1, r, value));
	else
		return (recursive_binary(array, l, m, value));
}


/**
 * advanced_binary - Implement binary search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
