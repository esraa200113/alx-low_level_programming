#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		_puts(argv[0]);
		return (0);
	}
	else
	{
		_puts("Error: No command-line arguments.");
		return (1);
	}
}


