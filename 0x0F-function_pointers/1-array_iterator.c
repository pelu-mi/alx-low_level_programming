#include "function_pointers.h"

/**
 * array_iterator - function to perform an action over all items in an array
 * @array: array to iterate over
 * @size: size of array
 * @action: function to call for each element in the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[1]);
		i++;
	}
}
