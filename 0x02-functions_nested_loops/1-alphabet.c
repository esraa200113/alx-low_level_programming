#include "main.h"
/**
 * print_alphabet: The main function that calls print_alphabet. 
 * print_alphabet: A function that prints the alphabet. 
 *                  in lowercase, followed by a new line.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}


