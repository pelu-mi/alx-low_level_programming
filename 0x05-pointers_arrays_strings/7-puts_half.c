#include "main.h"

/**
 * puts_half - print second half of a string followed by a new line
 * @str: Str pointer to use
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i / 2;
	j = i - len;
	while (j < i)
	{
		_putchar(*(s + j));
		j++;
	}
	_putchar('\n');
}
