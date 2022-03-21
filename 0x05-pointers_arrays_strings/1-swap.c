#include <stdio.h>
#include "main.h"

/**
 *reset_to_98 - reset variable n to 98 value
 *
 *@n: value to reset
 *
 */
void swap_int(int *a, int *b)
{
	int temporaryValue;

	temporaryValue = *a;
	*a = *b;
	*b = temporaryValue;
}
