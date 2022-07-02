#include <stdlib.h>
#include "main.h"

/**
 *_strchr -  function that locates a character in a string.
 *
 * @s: the string of characters that a character wants to be localized
 * @c: character that will be localized
 * Return: return c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
