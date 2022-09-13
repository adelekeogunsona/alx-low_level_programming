#include "main.h"

/**
* print_last_digit - Function that prints the last digit of a number
* @n: Number
*
* Return: Last digit of n
*/
int print_last_digit(int n)
{
	int last = (n % 10);

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
