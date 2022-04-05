#include "main.h"
#include <stdlib.h>

/**
 * return_size_for - return string size
 * @string: string given
 * Return: size for string
 */

unsigned int return_size_for(char *string)
{
	unsigned int  i = 0, string_length = 0;

	if (string == NULL)
		return (0);

	while (*(string + i) != '\0')
	{
		string_length++;
		i++;
	}
	return (string_length);

}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int k, p;
	unsigned int length_s1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	array = malloc((return_size_for(s1) + return_size_for(s2)) * sizeof(char)
			+ 1);
	length_s1 = return_size_for(s1);
	if (array == NULL)
		return (NULL);
	k = 0;
	while (k < length_s1)
	{
		*(array + k) = *(s1 + k);
		k++;
	}
	p = 0;
	while (length_s1 < (return_size_for(s1) + return_size_for(s2)))
	{
		*(array + length_s1) = *(s2 + p);
		length_s1++;
		p++;
	}
	*(array + (return_size_for(s1) + return_size_for(s2))) = '\0';
	return (array);
}
