#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocate memory for an array using malloc
 * @nmemb: elements of the array
 * @size: size of each array in bytes
 *
 * Description: void pointer array reassigned to char, also to enable
 * dereferencing in loop
 * chars in nmemb passed through loop and incremented
 * set values in memory to zero
 *
 * Return: a pointer to the allocated memory
 * if nmemb or size is 0, return null
 * if malloc fails, return null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	i = 0;
	temp = array;

	while (i < (size * nmemb))
	{
		temp[i] = '\0';
		i = i + 1;
	}
	return (array);
}
