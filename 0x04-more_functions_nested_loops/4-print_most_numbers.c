#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print all number from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		putchar(number + '0');
	}
	putchar(10);
}
