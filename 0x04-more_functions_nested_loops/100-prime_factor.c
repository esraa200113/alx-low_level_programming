#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n = n / 2;
	}

	for (long i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
		max_prime = n;

	return (max_prime);
}

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}

