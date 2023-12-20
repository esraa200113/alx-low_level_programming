#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the value to print the times table for
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;
	int result;


	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				printf(", ");
				if (result < 10)
					printf("  ");
				else if (result < 100)
					printf(" ");
			}

		printf("%d", result);
		}
	printf("\n");
	}
}

