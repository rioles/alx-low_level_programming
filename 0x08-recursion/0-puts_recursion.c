#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that print string recursively
 *
 * @s: given string
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
}
