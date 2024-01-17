#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc.
 * @str: The input string to be duplicated.
 *
 * Return: Pointer to the newly allocated duplicated string.
 *         NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	int n = 0;
	int i;
	char *dupstr;
	
	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
		n++;
	char *dupstr = malloc(sizeof(char) * (n + 1));

	if (dupstr != NULL)
	{
		for (i = 0; i <= n; i++)
			dupstr[i] = str[i];
	}
	return (dupstr);
}

