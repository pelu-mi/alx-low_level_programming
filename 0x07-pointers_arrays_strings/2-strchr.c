#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to find first occurence of a char
 * @s: pointer to string to check
 * @c: Char to check for
 * Return: pointer to first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) == '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
