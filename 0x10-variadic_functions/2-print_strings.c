#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to te function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
