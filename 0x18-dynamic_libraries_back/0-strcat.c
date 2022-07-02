#include <stdio.h>
#include "main.h"

/**
 *_strcat - concaterne two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: return a concatenate String (dest append source)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
