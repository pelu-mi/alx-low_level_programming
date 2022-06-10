#include "main.h"

/**
 * more_numbers - Print numbers 0 to 14, 10 times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
