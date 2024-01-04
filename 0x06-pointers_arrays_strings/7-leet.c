#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_replace[10] = {'o', 'O', 'l', 'L', 'e', 'E', 'a', 'A', 't', 'T'};
	char leet_digits[5] = {'0', '0', '1', '1', '7'};

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

	while (j < 10)
	{
		if (str[i] == leet_replace[j])
		{
			str[i] = leet_digits[j / 2];
		}
		j++;
	}
	i++;
	}
	return (str);
}

