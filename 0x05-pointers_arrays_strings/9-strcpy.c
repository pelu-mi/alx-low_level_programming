#include "main.h"

/**
 * _strcpy - Copy string to buffer
 * @src: String pointer
 * @dest: destination buffer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n, count;

	count = 0;
	while (*(src + count) != '\0')
		count++;
	for(i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}

}
