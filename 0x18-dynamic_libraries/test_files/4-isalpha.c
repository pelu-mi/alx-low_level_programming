#include "main.h"

/**
 * _isalpha - Check if input is an upper case character
 * @c: character input to check if it is upper case
 * Return: 1 if yes, 0 if no
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
