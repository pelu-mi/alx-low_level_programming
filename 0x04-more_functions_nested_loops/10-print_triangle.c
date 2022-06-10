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
			j = size;
			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			k = i;
			while (k > 0)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
