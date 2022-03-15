#include <stdio.h>
#include "main.h"


/**
 * jack_bauer - Check if number is less or gretter than 0
 * and check the number's sign
 *
 *
 * Return: 1 if lowercase 0 otherwise(Success)
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int k;

		for (k = 0; k < 60; k++)
		{
			if (i < 10 && k < 10)
			{
				printf("0%d:0%d\n", i, k);
			}
			else if (i > 9 && k < 10)
			{
				printf("%d:0%d\n", i, k);
			}
			else if (i < 10 && k > 9)
			{
				printf("0%d:%d\n", i, k);
			}
			else
			{
				printf("%d:%d\n", i, k);
			}
		}
	}
}
