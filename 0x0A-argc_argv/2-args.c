#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
	}
	return (0);
}

