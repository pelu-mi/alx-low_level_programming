#include "_putchar.c"

/**
 * main - print out "_putchar\n" using _putchar.c file in same folder.
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;
	while (i < 9)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
