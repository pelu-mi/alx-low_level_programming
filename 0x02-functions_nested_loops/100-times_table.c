#include "main.h"

/**
 * print_times_table - Return absolute value of a number
 * @n: number input to check if less than 15 and > 0
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = i * j;
				if (j == 0)
				{
					_putchar('0');
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (a < 100)
				{
					_putchar(' ');
					if (a < 10)
					{
						_putchar(' ');
						_putchar(a + '0');
					}
					else
					{
						_putchar(a / 10 + '0');
						_putchar(a % 10 + '0');
					}
				}
				else
				{
					_putchar(a / 100 + '0');
					_putchar(a / 10 % 10 + '0');
					_putchar(a % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
