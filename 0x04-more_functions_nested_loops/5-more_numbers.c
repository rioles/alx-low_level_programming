#include <stdio.h>
#include "main.h"

/**
 *print_number_from_zero_to_forteen - print number from 0 to 14
 *
 */

void print_number_from_zero_to_forteen(void)
{
	int number;

	for (number = 0; number < 15; number++)
	{
		printf("%d", number);
	}
	putchar(10);
}
/**
 *more_numbers - print number from 0 to 14 ten time
 */
void more_numbers(void)
{
	int time_to_print_number;

	for (time_to_print_number = 0; time_to_print_number < 10;
			time_to_print_number++)
	{
		print_number_from_zero_to_forteen();
	}
}
