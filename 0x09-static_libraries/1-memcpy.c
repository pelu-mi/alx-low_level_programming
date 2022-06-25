#include "main.h"
/**
 * _memcpy - Function to copy the first n bytes of src into dest
 * @dest: destination for copying
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: Pointer to memory address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
