#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char str[] = "0123456789";

	int i;

	for (i = 0; i < 10; i++)
		putchar(str[i]);
	putchar('\n');

	return (0);
}
