#include "main.h"

/**
 * _strstr - Function to find needle in a haystack
 * @haystack: String to search
 * @needle: Substring to search for
 * Return: Pointer to beginning of needle in haystack or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag = 0;

	if (*needle == 0)
		return (haystack);
	
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; j >= 0; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
			if (*(needle + j) == '\0')
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	if (flag == 1)
		return (haystack + i);
	else
		return ('\0');
}
