#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words).
 *         NULL if str == NULL, str == "" or if it fails.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);
	int words_count = 0;
	char **words = NULL;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words_count++;
	}
	words = (char **)malloc(sizeof(char *) * (words_count + 1));
	
	if (words != NULL)
	{
		int word_index = 0;
		int word_length = 0;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] != ' ')
			{
				word_length++;
				if (str[i + 1] == ' ' || str[i + 1] == '\0')
				{
					words[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
					if (words[word_index] != NULL)
					{
						strncpy(words[word_index], str + i - word_length + 1, word_length);
						words[word_index][word_length] = '\0';
						word_index++;
						word_length = 0;
					}
					else
					{
						while (--word_index >= 0)
							free(words[word_index]);
						free(words);
						return (NULL);
					}
				}
			}
		}
		words[word_index] = (NULL);
	}
	return (words);
}

