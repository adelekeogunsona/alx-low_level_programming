#include "main.h"

/**
* print_numbers - Print the number  0-9
*
* Return: The  number 0-9
*/
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}

