#include "main.h"

/**
 * swap - swap 2 characters
 * @x - char to swap with y
 * @y - char to swap with x
 * Return: nothing
 */

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}


/**
 * rev - Reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev(char *s, int n)
{
	static int i = 0;

	if (*(s + n) == '\0')
		return;

	rev(s, n + 1);

	if (i <= k)
		swap(&s[i++], &s[k]);	
}



/**
 * is_palindrome - function to check if n is a palindrome
 * @s: string to check
 * Return: 1 if n is a palindrome and 0 if it isn't
 */

int is_palindrome(char *s)
{
	char *str = s;
	
	rev(s, 0);
	if (*s == '\0')
		return (1);

	if (str == s)
		return (1);
	else 
		return (0);
}
