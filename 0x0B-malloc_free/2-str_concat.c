#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated concatenated string.
 *         NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	char *concat_str;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	concat_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat_str != NULL)
	{
		for (i = 0; i < len_s1; i++)
			concat_str[i] = s1[i];
		for (j = 0; j <= len_s2; j++)
			concat_str[len_s1 + j] = s2[j];
	}
	return (concat_str);
}

