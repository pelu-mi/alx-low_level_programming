#include "main.h"

/**
 * times_table - Print 9x9 multiplication table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; a++)
	{
		for (j = 0; j < 10; b++)
		{
			a = i * j;
			if (a < 9 && a !=0)
				_putchar(' ')
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
