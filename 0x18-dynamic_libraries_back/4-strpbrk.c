#include <stdlib.h>
#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: Given string
 * @accept: set of bytes to look for
 * Return: return a pointer to the byte in 's'
 * that matches one of the byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
