#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *string, *temp = "(nil)";

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			string = va_arg(ap, char *);
			if (string != NULL)
				temp = string;
			printf("%s", temp);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		    format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
