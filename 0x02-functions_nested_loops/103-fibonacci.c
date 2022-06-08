#include "main.h"
#include <stdio.h>

/**
 * main - Print sum of even terms in fibonacci series
 * Return: 0 (Success)
 */
int main(void)
{
	long int t1 = 1, t2 = 2, sum = t1 + t2, total = 2;

	while (true)
	{
		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total+=sum;
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;

	}
	printf("%ld\n", total);
	return (0);
}
