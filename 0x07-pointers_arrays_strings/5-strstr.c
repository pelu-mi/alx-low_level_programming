#include "main.h"

/**
 * _strstr - Function to find needle in a haystack
 * @haystack: String to search
 * @needle: Substring to search for
 * Return: Pointer to beginning of needle in haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		j = 0;
		if (*(haystack + i + j) == *(needle + j))
		{
			do {
				if (*(needle + j) == '\0')
					return (haystack + i);
			} while (*(haystack + i + j) == *(needle + j));
		}
	}
	return ('\0');
}
