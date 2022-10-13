#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints string
 * @separator: Separator
 * @n: number of arguments to pass
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *str;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(print, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(print);
}
