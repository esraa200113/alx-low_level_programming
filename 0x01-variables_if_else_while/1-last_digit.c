#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry point
 *
 * Description: This program generates a random number and
 *              prints the last digit of the number along with some conditions.
 *
 * Return: Always (0) success
*/


/* main generates random number and prints its status */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);

	return (0);
}