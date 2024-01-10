#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string.
 * @needle: Pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern != '\0' && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}

