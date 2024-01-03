#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = 0;
		int i, start_index;

		while (*str != '\0')
		{
			length++;
			str++;
		}
		start_index = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;
		for (i = start_index; i < length; i++)
		{
			_putchar(str[i]);
		}

		_putchar('\n');
	}
}

