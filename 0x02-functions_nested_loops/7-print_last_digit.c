#include "main.h"

/**
* print_last_digit - Function that prints the last digit of a number
* @n: Number
*
* Return: Last digit of n
*/
int print_last_digit(int n)
{
	_putchar(n % 10);

	return (n % 10);
}
