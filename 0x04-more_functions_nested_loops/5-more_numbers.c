#include "main.h"

/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  *
  * Return: 10 times of the numbers since 0 up to 14
  */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num= 14; num)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}

			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
