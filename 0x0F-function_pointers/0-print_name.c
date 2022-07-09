#include "function_pointers.h"

/**
 * print_name - Function to print a name
 * @name: Name to print
 * @f: function to use to print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
