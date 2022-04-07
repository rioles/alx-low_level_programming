#include "main.h"
#include <stdlib.h>

/**
 * return_size_for - return string size
 * @string: string given
 * Return: size for string
 */
unsigned int _strlen(char *string)
{
	unsigned int i = 0;
	unsigned int string_length = 0;

	while (string[i] != '\0')
	{
		i++;
		string++;
	}
	return (string_length);
}

/**
 * string_nconcat- concatenate 2 strings
 * @s1: first string
 * @s2: second string to append to s1
 * @n: this number of bytes of s2 to append
 *
 * Description: concatenate 2 strings, which contains s1, followed by the first
 * n bytes of s2, and null terminated
 *
 * Return: Null if function fails
 * if n >= s2, use entire string
 * if null passed, treat as empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatern;
	unsigned int k, i, length_s1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length_s1 = _strlen(s1);
	concatern = malloc((length_s1 + n + 1) * sizeof(char));

	if (concatern == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(concatern + i) = *(s1 + i);
		i++;
	}

	k = 0;
	while (*(s2 + k) != '\0' && k < n)
	{
		*(concatern + i) = *(s2 + k);
		k++;
		i++;
	}
	*(concatern + i) = '\0';
	return (concatern);
}
