#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int numbers;
	int number;

	for (numbers = 0; numbers < 10; numbers++)
	{
		number = ((numbers % 10) + '0');
		putchar(number);

		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
