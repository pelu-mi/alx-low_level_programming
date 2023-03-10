#include "search_algos.h"

/**
 * jump_search - Implement jump search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, next, step = floor(sqrt(size));

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* Computation */
		if (value == array[i])
			return (i);
		next = (i + step > size - 1) ? size - 1 : i + step;
		if (value <= array[next] || i + step > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
			/* Check all elements in block */
			while (i <= next)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
				i++;
			}
		}
		i += step;
	}
	return (-1);
}
