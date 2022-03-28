#include <stdio.h>
#include "main.h"

/**
 *_memset -  function that fills memory with a constant byte.
 *
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of byte to be filled starting
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
