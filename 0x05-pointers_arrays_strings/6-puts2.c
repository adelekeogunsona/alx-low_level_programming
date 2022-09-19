#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints every other character of a string
* @str: String
*
* Return: void
*/

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (str[count] != '\0')
		count++;

	while (i < count)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
