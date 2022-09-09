#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/
int main(void)
{
	int digits1;
	int number1;
	int digits2;
	int number2;

	for (digits1 = 0; digits1 < 10; digits1++)
	{
		number1 = ((digits1 % 10) + '0');

		for (digits2 = 0; digits2 < 10; digits2++)
		{
			number2 = ((digits2 % 10) + '0');

			putchar(number1);
			putchar(number2);

			if (number1 == 9 && number2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
