#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 10; x <= 19; x++)
	{
		putchar(x % 10 + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
