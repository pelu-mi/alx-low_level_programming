#include "variadic_functions.h"

/**
 * print_all - print all items passed as arguments
 * @format: format of arguments to be passed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j, flag = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
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
		} i++;
	}
	printf("\n"), va_end(args);
}
