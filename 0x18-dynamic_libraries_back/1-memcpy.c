#include "main.h"

/**
 *_memcpy -  function that copy n characters from the source object to
 *the destination object.
 *
 * @dest: pointer to the destination object
 * @src: pointer to the source object
 * @n: number of byte to copy
 * Return: return s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
