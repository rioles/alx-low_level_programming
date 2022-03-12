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
	int z;

	for (x = 10; x <= 17; x++)
	{
		for (y = x + 1; y <= 18; y++)
		{
			for (z = y + 1; z <= 19; z++)
			{
				putchar(x % 10 + '0');
				putchar(y % 10 + '0');
				putchar(z % 10 + '0');
				if (z == 19 && y == 18 && x == 17)
				{
				continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
