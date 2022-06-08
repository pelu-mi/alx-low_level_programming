#include "main.h"
#include <stdio.h>

/**
 * main - Print fibonacci series
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, t1 = 1, t2 = 2, sum = t1 + t2;

	printf("%ld, %ld, ", t1, t2);
	while (i < 50)
	{
		printf("%ld", sum);
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
		if (i !=49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
