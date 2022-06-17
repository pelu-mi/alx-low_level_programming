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

	while (j < n)
	{
		*(dest + i) = '\0';
		i++;
		j++;
	}

	return (dest);
}
