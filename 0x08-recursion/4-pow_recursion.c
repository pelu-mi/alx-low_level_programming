#include "main.h"

/**
 * _pow_recursion - pow function using recursion
 * @x: base number
 * @y: exponent
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
