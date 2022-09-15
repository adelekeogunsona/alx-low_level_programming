#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the Terminal
* @n: Number of times to be printed
*
* Return: void
*/

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
		}

		_putchar(92);
		_putchar('\n');

	}
	else
	{
		_putchar('\n');
	}
}
