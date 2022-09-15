#include "main.h"

/**
* more_numbers - Prints 1 to 14 ten times
*
* Return: void
*/

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num <= 9; num++)
			_putchar(num + '0');

		_putchar("\n");
	}
}
