#include <stdio.h>
#include "main.h"

/**
 *swap_int - reset variable n to 98 value
 *
 *@a: first value to swap
 *@b: second value to swap
 */
void swap_int(int *a, int *b)
{
	int temporaryValue;

	temporaryValue = *a;
	*a = *b;
	*b = temporaryValue;
}
