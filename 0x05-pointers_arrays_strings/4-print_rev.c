#include "main.h"

/**
 * print_rev - print a string reversed followed by a new line
 * @s: Str pointer to use
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
