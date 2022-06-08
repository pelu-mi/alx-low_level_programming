#include "main.h"
#include <stdio.h>

/**
 * main - Print fibonacci series
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	unsigned long int t1 = 0, t2 = 1, sum = 0;

	while (i < 98)
	{
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;
		printf("%lu", sum);
		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
