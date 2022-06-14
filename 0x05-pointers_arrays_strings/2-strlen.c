#include "main.h"

/**
 * _strlen - Find length of a String
 * @s: Char pointer to use
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;
	char str;

	str = *s;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
