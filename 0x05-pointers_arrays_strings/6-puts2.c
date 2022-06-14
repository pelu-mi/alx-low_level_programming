#include "main.h"

/**
 * puts2 - print every other character in a string followed by a new line
 * @str: Char array pointer to use
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
