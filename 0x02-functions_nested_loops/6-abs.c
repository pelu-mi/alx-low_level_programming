#include "main.h"

/**
 * _abs - Return absolute value of a number
 * @n: number input to convert to absolute value
 * Return: absolute value of n
 */
int _abs(int n)
{
	int a;

	if (n >= 0)
		a = n;
	else
	{
		a = n * (-1);
	}
	return (a);
}
