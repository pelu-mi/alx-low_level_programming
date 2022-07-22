#include "main.h"

/**
 * set_bit - set bit at index to 1
 * @n: number to change bit in
 * @index: index of bit to change to 1
 * Return: 1 if worked or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
