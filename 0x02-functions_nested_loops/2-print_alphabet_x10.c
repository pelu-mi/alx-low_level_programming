#include "main.h"

/**
 * print_alphabet_x10 - Print the lower case alphabets 10 times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j < 27)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
