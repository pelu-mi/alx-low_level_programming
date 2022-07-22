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
	int i = 0; len = 0;

	if (b[len] == '\0')
		return (0);

	while (*(b + i))
		len++;
	len --;

	for (i = 0; *(b + i) != '\0'; i++, len--)
	{
		if (*(b + i) != '0' || *(b + i) != '1')
			return (0);
		else if (*(b + i) == '1')
			num += pow(2, len);
	}

	return (num);
}
