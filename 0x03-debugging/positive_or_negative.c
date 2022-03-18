#include <stdio.h>

/**
 * positive_or_negative - Entry point
 *
 * @n: number to check if positif or negative
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}

