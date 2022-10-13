#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: the separator
 * @n: number of integers
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(print);
}
