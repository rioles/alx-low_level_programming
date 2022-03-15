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
/**
 * print_alphabet_x10 - Print print_alphabet*10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		print_alphabet();
	}
}
