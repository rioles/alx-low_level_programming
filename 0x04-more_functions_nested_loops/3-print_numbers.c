#include <stdio.h>
#include "main.h"

/**
 *print_numbers - function that print number from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar(10);

}
