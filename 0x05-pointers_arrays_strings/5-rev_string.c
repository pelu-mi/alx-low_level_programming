#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Str pointer to use
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j, k, c;
	char rev[];

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;
	while (j >= 0)
	{
		rev[k] = *(s + j);
		j--;
		k++;
	}
	c = 0;
	while (c < k)
	{
		*(s + c) = rev[c];
		c++
	}
}
