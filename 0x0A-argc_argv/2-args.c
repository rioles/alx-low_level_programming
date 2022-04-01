#include <stdio.h>

/**
 * main - prints all the arguments received by the program with
 * a new line after each string
 * @argc: counts the number of arguments passed in
 * @argv: makes an array of strings of each argument passed in
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
