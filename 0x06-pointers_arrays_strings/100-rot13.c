#include "main.h"
/**
 * rot13 - convert string to 1337
 * @c: string to convert
 * Return: Converted string
 */

char *rot13(char *c)
{
	int i, j;
	int find[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int replace[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == find[j])
			{
				c[i] = replace[j];
				break;
			}
		}
	}

	return (c);
}
