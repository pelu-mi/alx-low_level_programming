#include "main.h"
/**
 * rot13 - convert string to 1337
 * @c: string to convert
 * Return: Converted string
 */

char *rot13(char *c)
{
	int i, j;
	char find[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char replace[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
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
