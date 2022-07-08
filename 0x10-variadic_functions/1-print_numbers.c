#include "variadic_functions.h"

/**
 * print_numbers - print all numbers passed as arguments
 * @separator: string to use as separator between values
 * @n: number or arguments to expect
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, val = 0;
	va_list args;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf("%d", val);

		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
