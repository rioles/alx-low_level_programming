#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * lastDigitGreaterOrLess - This is a description
 * @lastDigit: lastDigit of number
 *
 * @n: srand number
 */
void lastDigitGreaterOrLess(int lastDigit, int n)
{
	if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
		lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	lastDigitGreaterOrLess(lastDigit, n);
	/* your code goes there */
	return (0);
}
