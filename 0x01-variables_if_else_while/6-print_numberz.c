#include <stdio.h>

/**
* main - entry point
*
* Return: always 0
*/
int main(void)
{
	int digits;
	int number;

	for (digits = 0; digits < 10; digits++)
	{
		number = (digits % 10) + '0';
		putchar(number);
	}

	putchar('\n');

	return (0);
}
