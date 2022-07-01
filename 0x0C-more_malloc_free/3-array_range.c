#include "main.h"

/**
 * _calloc - function to allocate memory for array and init to 0
 * @nmemb: number of elements in array
 * @size: size in bytes of each element in array
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
