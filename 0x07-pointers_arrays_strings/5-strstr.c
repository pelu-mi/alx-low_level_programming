#include "main.h"

/**
 * _strstr - Function to find needle in a haystack
 * @haystack: String to search
 * @needle: Substring to search for
 * Return: Pointer to beginning of needle in haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);

	for ( ;*haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
