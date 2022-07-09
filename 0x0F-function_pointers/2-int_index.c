#include "function_pointers.h"

/**
 * int_index - Function to find the index of element for which
 * cmp does not return 0
 * @array: array to check
 * @size: size of array
 * @cmp: function to check
 * Return: index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
