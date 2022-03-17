#include <stdio.h>
#include "main.h"

/**
 *print_square - printing scare
 *
 *@n: scare side
 */
void print_square(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			putchar(35);
		}
		putchar(10);
	}
	if (i <= 0)
	{
		putchar(10);
	}
}
