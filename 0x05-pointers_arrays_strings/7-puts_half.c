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
	int count = 0;

	while (str[count] != '\0')
		count++;

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
}
