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
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (haystack + i);
			}
			else
			{
				break;
			}
		}
	}
	return (NULL);
}
