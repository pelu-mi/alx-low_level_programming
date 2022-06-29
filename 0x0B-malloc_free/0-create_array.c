#include "main.h"

/**
 * create_array - Function to return an array filled with a character
 * @size: size of array to be created
 * @c: character to fill the array with
 * Return: Array filled with value or NULL if size is 0
 */


char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *c;

	if (size <= 0)
		return ('\0');
	c = malloc(size * sizeof(char));

	while (i < size)
	{
		if (c[i] == NULL)
		{
			return (NULL);
		}
		c[i] = c;
		i++;
	}

	return (c);
}
