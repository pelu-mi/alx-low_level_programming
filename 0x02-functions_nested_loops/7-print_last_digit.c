#include "main.h"

/**
 * print_last_digit - Return last digit of a number
 * @n: number input
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	_putchar(a + '0');
	return (a);
}
