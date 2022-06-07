#include "main.h"

/**
 * print_alphabet_x10 - Print the lower case alphabets 10 times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
