#include "main.h"

/**
 * binary_to_uint - Function to convert binary to unsigned int
 * @b: string containing binary
 * Return: Converted number or 0 if b is null or string contains
 * anything else aside from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (*b == '\0')
		return (0);

	while (*(b + i))
	{
		i++;
	}

	while (*b == '0' || *b == '1')
	{
		num <<= 1;
		num += *b - '0';
		*b++;
	}
	return (num);
}
