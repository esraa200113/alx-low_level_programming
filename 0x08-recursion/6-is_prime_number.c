#include "main.h"

/**
 * is_prime_recursive - Helper function to check for prime recursively.
 * @n: The number to check for primality.
 * @divisor: The current divisor being checked.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	else if (divisor < n && n % divisor == 0)
	{
		return (0);
	}
	else if (divisor == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_recursive(n, divisor + 1));
	}
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number.
 * @n: The number to check for primality.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_recursive(n, 2));
}

