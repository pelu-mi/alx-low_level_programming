#include "main.h"

/**
 * _islower - Check if input is a lower case character
 * Return: 1 if yes, 0 if no
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
