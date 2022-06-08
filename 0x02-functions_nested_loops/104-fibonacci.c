#include "main.h"
#include <stdio.h>

/**
 * main - Print fibonacci series
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 2;
	unsigned long int t1 = 1, t2 = 2, sum = t1 + t2;

	printf("%lu, %lu, ", t1, t2);
	while (i < 98)
	{
		/*printf("%lu", sum);*/
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
		if (i < 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
