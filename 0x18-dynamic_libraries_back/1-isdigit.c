#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_isdigit - Check if input number is digit
 *
 *@c: int input
 *Return: 1 if c is a digit 0 otherwise (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
