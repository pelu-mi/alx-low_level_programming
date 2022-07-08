#include "variadic_functions.h"

/**
 * print_strings - print all strings passed as arguments
 * @separator: string to use as separator between values
 * @n: number or arguments to expect
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char *);
		if (val == NULL)
			printf("(nil)");
		else
			printf("%s", val);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
