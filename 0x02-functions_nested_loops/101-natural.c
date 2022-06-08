#include "main.h"
#include <stdio.h>

/**
 * main - Sum all multiples of 3 and 5 between 1 and 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
