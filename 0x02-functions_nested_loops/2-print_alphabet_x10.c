#include "main.h"

/**
 * print_alphabet_x10 - Print the lower case alphabets 10 times
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 27)
		{
			_putchar(str[j]);
			j++;
		}
		i++;
	}
}
