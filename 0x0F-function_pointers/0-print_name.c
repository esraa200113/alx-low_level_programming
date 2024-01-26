#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to a string
 * @f: function pointer to print a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

