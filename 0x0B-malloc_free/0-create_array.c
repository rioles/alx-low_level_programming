#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that return an array
 *
 * @size : array size
 * @c    : specific character that arry contain
 *
 * Return: return an array
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = (char *)malloc(size * sizeof(char));

	if (tab == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		*(tab + i) = c;
		i++;
	}

	return (tab);

}
