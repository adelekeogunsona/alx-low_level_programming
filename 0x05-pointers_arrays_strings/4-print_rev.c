#include "main.h"

/**
* print_rev - Prints a string in reverse
* @s: String to be printed
*
* Return: void
*/

void print_rev(char *s)
{
	int count = 0;

	while (s[c] != '\0')
	{
		count++;
	}

	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
