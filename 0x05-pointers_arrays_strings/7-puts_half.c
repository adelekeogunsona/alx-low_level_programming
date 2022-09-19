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

	while (str[total] != '\0')
		total++;

	count = total - 1;

	if ((count % 2) == 0)
	{
		int half = count / 2;

		for (; count > half; count--)
			_putchar(str[count]);
	}
	else
	{
		int half = (count - 1) / 2;

		for (; count > half; count--)
			_putchar(str[count]);
	}

	_putchar('\n');
}
