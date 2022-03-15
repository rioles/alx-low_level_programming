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
int _abs(int n)
{
	if (n < 0)
	{
		n  = n * -1;
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
