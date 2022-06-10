#include <stdio.h>

/**
 * _isupper - Function to check if a character is upper case or not
 * @c: Ascii code for character
 * Return: 1 if upper case, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
