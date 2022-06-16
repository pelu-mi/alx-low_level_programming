#include "main.h"

/**
 * _strncat - Function to concatenate at most n bytes of src
 * @dest - String to be concatenated to
 * @src - string to concatenate to dest
 * @n - Maximum number of bytes to concatenate to dest
 * Return - Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (i >= 0)
	{
		if (*(dest + i) == '\0')
			break;
		i++;
	}

	j = 0;
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
