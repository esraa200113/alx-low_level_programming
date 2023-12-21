#include "main.h"

/**
 * fizzbuzz - prints the numbers from 1 to 100, followed by a new line.
 *
 * @n: This parameter represents the upper limit for printing
 *  numbers according to the FizzBuzz rules
 */
void fizzbuzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < n)
		{
			printf(" ");
		}
	}

	printf("\n");
}

