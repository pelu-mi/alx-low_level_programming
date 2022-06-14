#include "main.h"

/**
 * _strcpy - Copy string to buffer
 * @src: String pointer
 * @dest: destination buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}

	return (dest);
}
