#include "main.h"

/**
 * _strcmp - Function to compare two strings and return difference between them
 * @s1: String to compare
 * @s2: string to compare
 * Return: Concatenated string
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (*(s1 + j) == '\0' || *(s2 + j) == '\0')
	{
		if (*(s1 + j) != *(s2 + j))
		{
			return (s1[j] - s2[j]);
		}
		j++;
	}

	return (0);
}
