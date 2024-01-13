#include "main.h"
#include <unistd.h>
/**
 * _puts - Prints a string to the standard output
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

