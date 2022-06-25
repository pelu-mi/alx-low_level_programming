#include "main.h"

/**
 *_strpbrk - Search for the first occurence of any byte in accept in string s
 * @s: String to search in
 * @accept: String to match search to
 * Return: pointer to first occurence in string of any byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag++;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
		return ('\0');
	else
		return (s + i);
}
