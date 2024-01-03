#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		char *start = s;
		char *end = s;
		char temp;

		while (*s != '\0')
		{
			length++;
			s++;
		}

		if (length > 1)
		{
			end = start + length - 1;

			while (start < end)
			{
				temp = *start;
				*start = *end;
				*end = temp;

				start++;
				end--;
			}
		}
	}
}

