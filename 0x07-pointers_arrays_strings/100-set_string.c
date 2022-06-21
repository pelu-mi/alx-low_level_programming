#include "main.h"

/**
 * set_string - function to set a pointer to a char
 * @s: pointer pointing to set pointer
 * @to: char to change pointer to
 * Return: Nothing
*/

void set_string(char **s, char *to)
{
	int i = 0;

	while (*(to + i) != '\0')
	{
		**(s + i) = *(to + i);
	}
}
