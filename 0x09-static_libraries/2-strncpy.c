#include "main.h"

/**
 * _strncpy - Function to copy at most n bytes of src and fill the
 * blank spaces with null bytes
 * @dest: String to be concatenated to
 * @src: string to concatenate to dest
 * @n: Maximum number of bytes to copy to dest
 * Return: Concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n)
	{
		*(dest + j) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
	}

	while (j < n)
	{
		*(dest + j) = '\0';
		j++;
	}

	return (dest);
}
