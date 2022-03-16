#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - Print number ended to 98
 * and check the number's sign
 *
 *@n: number
 * Return: 1 if lowercase 0 otherwise(Success)
 */
void  print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n ; n <= 98; n++)
		{

			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(",");
			printf(" ");
		}

		printf("\n");
	}
	else if (n >= 98)
	{
		for (n = n ; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}

