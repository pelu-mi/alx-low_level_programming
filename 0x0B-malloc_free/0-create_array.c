#include "main.h"

/**
 * create_array - Function to return an array filled with a character
 * @size: size of array to be created
 * @c: character to fill the array with
 * Return: Array filled with value or NULL if size is 0
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size <= 0)
		return ('\0');
	s = malloc(size * sizeof(char));

	while (i < size)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		s[i] = c;
		i++;
	}

	return (s);
}
