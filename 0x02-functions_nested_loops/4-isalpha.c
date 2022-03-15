#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Check if character is lower
 *
 * @value: The character to check
 *
 * Return: 1 if lowercase 0 otherwise(Success)
 */
int _isalpha(int value)
{
	if (islower(value) || isalpha(value))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
