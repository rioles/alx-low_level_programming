#include <stdio.h>
#include "main.h"

/**
 *_strncat - concaterne two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: the limite of concatenation
 * Return: return a concatenate String (dest append source)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
