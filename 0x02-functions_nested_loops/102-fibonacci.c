#include "main.h"
#include <stdio.h>

/**
 * main - Print fibonacci series
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0, sum = 1;

	while (i < 50)
	{
		sum += sum;
		printf("%d", sum);
		i++;
		if (i !=49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
