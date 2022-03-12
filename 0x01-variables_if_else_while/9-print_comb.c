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
		if (x == 19)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
