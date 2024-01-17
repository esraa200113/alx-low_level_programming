#include <stdlib.h>
#include"main.h"
/**
 * create_array: creates an array of chars and initializes. 
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: pointer to the allocated array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}


