#include <stdlib.h>
#include "main.h"

/**
 *_strstr - function that searches a string for any of a set of bytes.
 *
 * @haystack: Given string
 * @needle: set of bytes to look for
 * Return: return a pointer to the byte in 's'
 * that matches one of the byte in accept
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}
	return (NULL);
}
