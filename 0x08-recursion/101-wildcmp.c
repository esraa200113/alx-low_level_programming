#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard pattern matching.
 * @s1: The first string.
 * @s2: The second string with wildcard pattern.
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

