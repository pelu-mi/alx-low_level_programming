#include "main.h"

/**
 * print_alphabet - print all the lowercase alphabets
 * Return: Void
 *
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		_putchar(str[i]);
		i++;
	}
}
