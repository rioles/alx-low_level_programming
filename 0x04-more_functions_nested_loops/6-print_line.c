#include <stdio.h>

/**
 *print_line - print undescore
 *
 * @n: number time undescore will be print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar(10);
}
