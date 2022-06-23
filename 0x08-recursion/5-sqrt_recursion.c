#include "main.h"

/**
 * sqrt_n - helper function to find square root of n
 * @n: number to find the square root of
 * @c: flag to check for root
 * Return: -1 if number doesn't have a square root or natural square root of n
 */

int sqrt_n(int n, int c)
{
	if (n < 0)
		return (-1);

	if (c * c == n)
		return (c);

	return (sqrt_n(n, c - 1));
}



/**
 * _sqrt_recursion - sqrt function using recursion
 * @n: number to find square root of
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_n(n, n));
}
