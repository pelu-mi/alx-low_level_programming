#include "search_algos.h"

/**
 * interpolation_search - Implement interpolation search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l = 0, r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		/* Computation */
		pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			r = pos - 1;
		else if (value > array[pos])
			l = pos + 1;
	}
	return (-1);
}
