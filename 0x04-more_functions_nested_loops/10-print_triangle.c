#include <stdio.h>
#include "main.h"

/**
 *print_triangle - draw diagonal line
 *
 * @n: size of triangle
 */
void print_triangle(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;
		int k;

		for (j = 1; j < n - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= 2 * i - i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	if (i <= 0)
	{
		putchar(10);
	}
}

