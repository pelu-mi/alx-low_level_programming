#include "main.h"

/**
 * times_table - Print 9x9 multiplication table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, a, mod, lead;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a < 10 && a !=0)
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a > 9)
			{
				mod = a % 10;
				lead = (a % 100) / 10;
				_putchar(lead + '0');
				_putchar(mod + '0');
			}
			else if (a == 0)
				_putchar(a + '0');

			if (j == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
