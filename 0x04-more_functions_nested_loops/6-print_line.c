#include "main.h"

/**
* print_line - Draws a straight line
* @n: Length of line
*
* Return: zero
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
