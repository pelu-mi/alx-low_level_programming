#include "main.h"

/**
 * _puts_recursion - Puts function using recursion
 * @s: String to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
