#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * Return: The square root if found, or -1 if n does not have square root.
 */
int sqrt_recursive(int n, int guess)
{
	int square = guess * guess;
	
	if (square == n)
	{
		return (guess);
	}
	else if (square > n || guess > n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n, guess + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n));
	}
}
