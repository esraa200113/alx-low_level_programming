#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the set of bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = original_accept;
	}
	return (NULL);
}

