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
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
