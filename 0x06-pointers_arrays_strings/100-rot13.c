#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i, j;
	char rot13_lowercase[26] = {'a', 'b', 'c', 'd', 'e', 
	'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
	'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 
	'v', 'w', 'x', 'y', 'z'};
	char rot13_uppercase[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	i = 0;

	while (str[i] != '\0')
	{
		j = 0;

		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] == rot13_lowercase[j])
			{
				str[i] = rot13_lowercase[(j + 13) % 26];
				break;
			}
			else if (str[i] == rot13_uppercase[j])
			{
				str[i] = rot13_uppercase[(j + 13) % 26];
				break;
			}

			j++;
		}
		i++;
	}
	return (str);
}

