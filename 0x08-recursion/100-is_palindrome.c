#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Helper function to check if a string is empty.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);
	
	return (is_palindrome_recursive(s, 0, length - 1));
}

