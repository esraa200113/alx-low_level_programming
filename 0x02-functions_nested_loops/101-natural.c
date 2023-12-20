#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all multiples of 3 or 5
 *              below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{
	int limit = 1024;
	int sum = 0;

	for (int i = 0; i < limit; i++) 
	{
		if (i % 3 == 0 || i % 5 == 0) 
		{
			sum += i;
		}
	}
	
	printf("Sum of multiples of 3 or 5 below %d: %d\n", limit, sum);
	return (0);
}

