#include <stdio.h>
#include "main.h"


/**
 * print_sign - Check if number is less or gretter than 0
 * and check the number's sign
 *
 * @n: The number to check
 *
 * Return: 1 if lowercase 0 otherwise(Success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
