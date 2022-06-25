#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: Char array pointer to use
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
