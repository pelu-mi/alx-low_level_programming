#include "main.h"

/**
 * print_triangle - Print triangle with height of size
 * @size: height of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i = 0, j, k;

	if (size > 0)
	{
		while (i < size)
		{
			j = i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = 0;
			while (k < i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
