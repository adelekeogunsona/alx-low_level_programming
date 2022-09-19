#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints half of a string
* @str: String
*
* Return: void
*/

void puts_half(char *str)
{
	int count;
	int total = 0;
	int half;

	while (str[total] != '\0')
		total++;

	count = total - 1;

	if ((count % 2) == 0)
	{
		half = (count / 2) + 1;

		for (; half <= count; half++)
			_putchar(str[half]);
	}
	else
	{
		int half = (count - 1) / 2;

		for (half += 1; half <= count; half++)
			_putchar(str[half]);
	}

	_putchar('\n');
}
