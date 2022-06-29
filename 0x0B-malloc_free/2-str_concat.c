#include "main.h"

/**
 * str_concat - Function to concatenate 2 strings
 * @s1: string to be concatenated to
 * @s2: String to concatenate
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, size, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	size = len1 + len2 + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (i < len1)
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	while (i < size)
	{
		*(s + i) = *(s2 + i - len1);
		i++;
	}

	return (s);
}
