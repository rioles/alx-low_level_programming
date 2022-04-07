#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range- create an array of integers
 * @min: minimum integer value
 * @max: maximum integer value;
 *
 * Description: create an array of integers
 *
 * Return: return null if malloc fails
 * if min > max, return null
 * else, return a pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int length;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < length)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
