#include "main.h"

/**
 * wild - helper function for wild cmp
 * @s1: String to compare
 * @s2: String to compare with containing wildcard
 * @n: index of s1 being compared
 * @m: index of s2 being compared
 * Return: same as wildcmp
 */
int wild(char *s2, int m, char *s1, int n)
{
	if (*(s2 + m) == '\0' && *(s1 + n) == '\0')
		return (1);

	if (*(s2 + m) == *(s1 + n))
		wild(s2, m + 1, s1, n + 1);
	else if (*(s2 + m) == '*')
		wild(s2, m + 1, s1, n);
	else if (*(s2 + m) != *(s1 + n))
	{
		if (*(s2 + m - 1) == '*')
			wild(s2, m, s1, n + 1);
		else
			return (0);
	}
}


/**
 * wildcmp - Function to compare 2 strings including wild card *
 * by using recursion
 * @s1: String to compare not containing wild card
 * @s2: String to compare containing wild card
 * Return: 1 if strings can be considered same
 * and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	return (wild(s2, 0, s1, 0));
}
