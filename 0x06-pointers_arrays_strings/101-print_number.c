#include "main.h"
/**
 * print_number - print any integer
 * @n: number to print
 * Return: number to print
 */

void print_number(int n)
{
	unsigned int num = n;
	
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar('0' + num % 10);

}
