#include "main.h"
#include <limits.h> 
#include <stdio.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (s != NULL)
	{
		while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

		while (*s == '-' || *s == '+')
		{
			if (*s == '-')
			sign *= -1;
			s++;
		}

		while (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + digit;
			s++;
	}
	}

	return (result * sign);
}


