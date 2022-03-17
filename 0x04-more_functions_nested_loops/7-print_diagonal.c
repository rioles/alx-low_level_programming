#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - draw diagonal line
 *
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < 2 * i - i; j++)
		{
			putchar(32);
		}
		putchar(92);
		putchar(10);
	}
	if (i <= 0)
	{
		putchar(10);
	}
}
