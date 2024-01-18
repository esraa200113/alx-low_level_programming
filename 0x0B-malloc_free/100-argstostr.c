#include <stdlib.h>

/**
 * argstostr - Concatenate all arguments of a program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string.
 *         NULL if ac == 0 or av == NULL or if it fails.
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);
	int total_length = 0;
	int i;

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	char *concat_str = (char *)malloc(sizeof(char) * (total_length + 1));
	
	if (concat_str != NULL)
	{
		int k = 0;

		for (i = 0; i < ac; i++)
		{
			int j = 0;

			while (av[i][j] != '\0')
			{
				concat_str[k++] = av[i][j++];
			}
			concat_str[k++] = '\n';
		}
		concat_str[k] = '\0';
	}
	return (concat_str);
}

