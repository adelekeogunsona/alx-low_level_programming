#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the Terminal
* @n: Number of times to be printed
*
* Return: void
*/

void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x < n; x++)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
