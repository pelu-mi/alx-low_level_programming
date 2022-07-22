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

	if (b == NULL)
		return (0);

	while (*b)
	{
		num <<= 1;/* num *= 2 */
		if (*b++ == '1')
			num ^= 1; /* num += 1 */
		else if (*b != '0')
		{
			num = 0;
			break;
		}
	}
	return (num);
}
