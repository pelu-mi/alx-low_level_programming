#include "main.h"

/**
 * _strdup - Function to duplicate a string
 * @str: string to be duplicated
 * Return: Array filled with value or NULL if size is 0
 */

char *_strdup(char *str)
{
	int i = 0, j = 0, size;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != 0)
	{
		i++;
	}

	size = i + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (j <= i)
	{
		*(s + j) = *(str + j);
		j++;
	}

	return (s);
}
