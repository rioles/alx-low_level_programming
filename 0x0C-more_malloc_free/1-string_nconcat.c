#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int numofchar;

	for (numofchar = 0; *s != '\0'; s++)
		numofchar++;

	return (numofchar);
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
	unsigned int len_s1, i = 0, i2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	concat = malloc(sizeof(char) * (len_s1 + n + 1));

	if (concat == NULL)
		return (NULL);


	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i = i + 1;
	}

	while (s2[i2] != '\0' && i2 < n)
	{
		concat[i] = s2[i2];
		i = i + 1;
		i2 = i2 + 1;
	}
	concat[i] = '\0';

	return (concat);
}
