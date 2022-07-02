#include <stdio.h>
#include "main.h"

/**
 *_strcmp - concaterne two strings
 *
 * @s1: destination string
 * @s2: source string
 * Return: 0 if s1 == s2, < 0 if s1 less than s2 and > 0 if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
