#include "main.h"

/**
 * _memset - Function to fill the first n bytes of the memory area pointed by s with constanty byte b
 * @s: pointer to first memory area
 * @b: byte to fill s with
 * @n: number of times to write b to s
 * Return: Pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (memset);
}
