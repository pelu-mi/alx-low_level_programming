#include "main.h"

/**
 * _calloc - function to allocate memory for array and init to 0
 * @nmemb: number of elements in array
 * @size: size in bytes of each element in array
 * Return: Pointer to the array or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
