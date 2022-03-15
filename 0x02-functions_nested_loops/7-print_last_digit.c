#include <stdio.h>
#include "main.h"


/**
 * print_last_digit - Check if number is less or gretter than 0
 * and check the number's sign
 *
 * @n: The number to check
 *
 * Return: 1 if lowercase 0 otherwise(Success)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
