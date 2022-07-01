#include "main.h"

/**
 * string_nconcat - concatenate strings s1 and first n bytes of s2
 * @s1: string to be concatenated to
 * @s2: string to take n bytes from
 * @n: Number of bytes to be concatenated
 *
 * Return: Pointer to the concatenated string or null
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			continue;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			continue;
	}

	if (j > n)
		j = n;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];

	s[i + j] = '\0';
	return (s);
}
