#include "main.h"

/**
 * _strspn - Function to get the number of bytes in the initial segment of s
 * containing all the bytes in accept
 * @s: String to be checked
 * @accept: String containing bytes to check for
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, aLen, flag;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		aLen = 0;
		flag = 0;
		while (*(accept + aLen) != '\0')
		{
			if (*(s + count) == *(accept + aLen))
			{
				flag++;
				break;
			}
			aLen++;
		}
		if (flag == 0)
			break;
	}

	return (count);
}
