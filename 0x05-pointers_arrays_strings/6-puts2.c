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
	int i;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i+2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
