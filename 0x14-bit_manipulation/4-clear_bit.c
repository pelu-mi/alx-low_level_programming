#include "main.h"

/**
 * clear_bit - Function to set value of bit at index to 0
 * @n: number to change the bit in
 * @index: index of bit to be changed
 * Return: 1 if success and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
