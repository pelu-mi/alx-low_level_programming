#include "main.h"

/**
 * reverse_str - Reverse String
 * @n: String to reverse
 * Return: Nothing
 */

void reverse_str(char *n)
{
	int i = 0, j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;

		j++;
		i--;
	}
}


/**
 * infinite_add - Add numbers in string format
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: pointer to a buffer
 * @size_r: Size of buffer
 * Return: Pointer to buffer containing the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tot = val1 + val2 + overflow;
		if (tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_str(r);
	return (r);
}
