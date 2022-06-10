#include "main.h"

/**
 * print_diagonal - Print \ n times
 * @n: Number of times to print \
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n')
			i++;
		}
	}
	else
		_putchar('\n');
}
