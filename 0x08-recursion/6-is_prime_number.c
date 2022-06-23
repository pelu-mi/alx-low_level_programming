#include "main.h"

/**
 * prime_n - helper function to find out if n is a prime number
 * @n: number to check
 * @c: flag to check for prime number
 * Return: same as is_prime_number
 */

int prime_n(int n, int c)
{
	if (n < 0)
		return (0);

	if (n % c == 0)
		return (0);
	else if (c * 2 > n)
		return (1);

	return (prime_n(n, c + 1));
}



/**
 * is_prime_number - function to check if n is a prime number
 * @n: number to check
 * Return: 1 if n is a prime number and 0 if it isn't
 */

int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
