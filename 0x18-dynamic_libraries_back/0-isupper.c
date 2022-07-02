#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Check if character is upperCase
 *
 * @value: The character to check
 * Return: 1 if lowercase 0 otherwise(Success)
 */
int _isupper(int value)
{
	if (isupper(value))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

