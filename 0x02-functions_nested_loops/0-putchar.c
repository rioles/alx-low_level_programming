#include <stdio.h>
#include "main.h"

/**
 * putChar - Entry point
 *
 * Return: Always 0 (Success)
 */

void putChar(void)
{
	char myString[100] = "_putchar";

	printf("%s\n", myString);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	putChar();
	return (0);
}
