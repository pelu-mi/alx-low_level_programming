#include "main.h"

/**
 * times_table - Print 9x9 multiplication table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a < 9 && a !=0)
				_putchar(' ');
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
