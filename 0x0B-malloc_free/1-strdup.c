#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to dup string
 * (a string which are passing in parameter is duplicated)
 *
 * @str  : string which is duolicated
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	unsigned int j;
	unsigned int length = 0;

	j = 0;
	if (str == NULL)
		return (NULL);

	while (*(str + j) != '\0')
	{
		length++;
		j++;
	}
	array = malloc((length + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(array + i) = *(str + i);
		i++;
	}
	*(array + length) = '\0';
	return (array);
}
