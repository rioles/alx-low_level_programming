#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 10; x <= 18; x++)
	{
		for (y = x + 1; y <= 19; y++)
		{
			putchar(x % 10 + '0');
			putchar(y % 10 + '0');
			if (y == 19 && x == 18)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
