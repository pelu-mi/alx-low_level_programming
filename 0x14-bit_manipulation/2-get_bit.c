#include "main.h"

/**
 * get_bit - Function to return value of bit at index
 * @n: number to find value of bit in
 * @index: index of value to be found
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
