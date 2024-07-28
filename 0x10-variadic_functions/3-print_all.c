#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_chr - prints characters
 * @args: argument list
 */
void print_chr(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integers
 * @args: argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_flt - prints floats
 * @args: argument list
 */
void print_flt(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - prints strings
 * @args: argument list
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}



/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	const char all_arg[] = "cifs";

	void (*print_type[])(va_list) = {print_chr, print_int, print_flt, print_str};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (all_arg[j] != '\0')
		{
			if (format[i] == all_arg[j])
			{
				printf("%s", separator);
				print_type[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
