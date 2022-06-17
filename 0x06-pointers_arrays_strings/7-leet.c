#include "main.h"

/**
 * leet - convert string to 1337
 * @c: string to convert
 * Return: Converted string
 */

char *leet(char *c)
{
	int i, j;
	char find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (c[i] == find[j])
			{
				c[i] = replace[j / 2];
				j = 9;
			}
		}
	}

	return (c);
}
