#include <stdlib.h>
#include "main.h"

/**
 *_strspn -  function that gets the length of a prefix substring..
 *
 * @s: the string gibening
 * @accept: prefix
 * Return: return n
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;
	int flag = 1;

	for (i = 0; s[i] != ' '; i++)
	{
		if (flag == 1)
		{
			flag = 0;
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					n++;
					flag = 1;
				}
			}
		}
		else
		{
			return (n);
		}
	}
	return (n);
}
