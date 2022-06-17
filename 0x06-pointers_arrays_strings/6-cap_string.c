#include "main.h"

/**
 * cap_string - convert first letter of string to upper case
 * @c: string to convert
 * Return: Converted string
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if(*(c + i - 1) == ' ' || *(c + i - 1) == '\t' || *(c + i - 1) == '\n' || *(c + i - 1) == ',' || *(c + i - 1) == ';')
				*(c + i) -= 32;
			else if (*(c + i - 1) == '!' || *(c + i - 1) == '?' || *(c + i - 1) == '"' ||*(c + i - 1) == '(' || *(c + i - 1) == ')')
				*(c + i) -= 32;
			else if (*(c + i - 1) == '{' || *(c + i - 1) == '}' || *(c + i - 1) == '.')
				*(c + i) -= 32;
		}
		i++;
	}
	return (c);
}
