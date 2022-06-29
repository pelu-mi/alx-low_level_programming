#include "main.h"

/**
 * _strdup - Function to duplicate a string
 * @str: string to be duplicated
 * Return: Array filled with value or NULL if size is 0
 */

char *_strdup(char *str)
{
	int i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*(str + 1) != 0)
	{
		i++;
	}

	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);


	while (i >= 0)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
