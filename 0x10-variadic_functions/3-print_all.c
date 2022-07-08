#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - print all items passed as arguments
 * @format: format of arguments to be passed
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, n = strlen(format), flag = 0;

	va_list args;
	va_start(args, format);

	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
				flag = 1;
				break;
		}		

		if (flag == 1 && i != n - 1)
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(args);
}
