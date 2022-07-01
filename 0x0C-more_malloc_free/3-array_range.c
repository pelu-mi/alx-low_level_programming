#include "main.h"

/**
 * array_range - function to create array of numbers from min to max
 * both inclusive
 * @min: min number in the array
 * @max: max number in the array
 * Return: Pointer to the array or null
 */

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
