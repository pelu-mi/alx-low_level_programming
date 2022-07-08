#include "variadic_functions.h"

/**
 * print_all - print all items passed as arguments
 * @format: format of arguments to be passed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, n = 0, flag = 0;
	char *str;

	while (*(format + n) != '\0')
		n++;
	va_start(args, format);
	while (i <= n)
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), flag = 1;
				break;
			case 's':
				str = va_arg(args, char *), flag = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (flag == 1 && i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
