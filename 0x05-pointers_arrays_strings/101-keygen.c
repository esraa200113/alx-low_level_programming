#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 *
 * Return: 0 on success.
 */
int main(void)
{
	char password[64];
	int sum = 0;
	int remainder;
	int i, last_char;
	
	srand(time(0));
	for (i = 0; i < 12; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}
	remainder = sum % 62;
	if (remainder > 36)
	{
		last_char = remainder + 'A' - 37;
	}
	else if (remainder > 10)
	{
		last_char = remainder + 'a' - 11;
	}
	else
	{
		last_char = remainder + '0';
	}

	password[i] = last_char;
	password[i + 1] = '\0';

	printf("%s\n", password);

	return (0);
}
