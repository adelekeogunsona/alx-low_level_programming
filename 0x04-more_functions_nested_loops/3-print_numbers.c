#include <stdio.h>
#include "main.h"

/**
* print_numbers - Prints the numbers from 0-9
*
* Return: zero
*/

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}

	_putchar("\n");

	return (0);
}
