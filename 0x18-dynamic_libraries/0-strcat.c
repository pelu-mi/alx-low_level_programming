#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate to dest
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
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
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
