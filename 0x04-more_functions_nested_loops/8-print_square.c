#include "main.h"

/**
* print_square - Prints a square
* @size: Size of the square
*
* Return: void
*/

void print_square(int size)
{
	int x;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
