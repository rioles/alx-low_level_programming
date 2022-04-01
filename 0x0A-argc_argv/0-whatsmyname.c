#include <stdio.h>

/**
 * main - prints name and a new line to stdout
 * @argc: counts arguments passed in
 * @argv: makes an array of strings of arguments passed in
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv + (argc - argc));
	return (0);
}
