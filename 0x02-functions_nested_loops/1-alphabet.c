#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(10);
}
