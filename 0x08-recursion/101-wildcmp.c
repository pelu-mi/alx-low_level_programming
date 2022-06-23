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
	if (*(s1 + n) == '\0')
	{
		if (*(s2 + m) == '*')
			return (wild(s2, m + 1, s1, n));
		return (*(s2 + n) == '\0');
	}

	if (*(s2 + m) == '*')
		return (wild(s2, m, s1, n + 1) || wild(s2, m + 1, s1, n));
	else if (*(s1 + n) == *(s2 + m))
		return (wild(s2, m + 1, s1, n + 1));
	return (0);
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
