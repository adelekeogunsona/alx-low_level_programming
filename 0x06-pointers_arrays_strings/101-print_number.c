#include "main.h"

/**
* print_number - Prints and integer
* @n: Number
*
* Return: void
*/

void print_number(int n)
{
	unsigned int tens, number, pos = n;
	double t = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (t <= pos)
			t *= 10;
		tens = t / 10;

		while (tens >= 1)
		{
			number = pos / tens;
			_putchar(number + '0');
			pos = (pos - (tens * number));
			tens /= 10;
		}
	}
}
