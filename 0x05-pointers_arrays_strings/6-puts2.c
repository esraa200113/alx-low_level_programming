#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str += 2;
		}

		_putchar('\n');
	}
}

