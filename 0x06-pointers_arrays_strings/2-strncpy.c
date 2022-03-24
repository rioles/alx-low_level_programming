#include <stdio.h>
#include "main.h"

/**
 *_strncpy - concaterne two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: the limite to iterate
 * Return: return a concatenate String (dest append source)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
