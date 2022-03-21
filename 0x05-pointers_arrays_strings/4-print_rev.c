#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_rev - return Steing
 *
 *@s: String to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
