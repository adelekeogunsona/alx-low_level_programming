#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int digits;
	int number;
	int alphabets;

	for (digits = 0; digits < 10; digits++)
	{
		number = ((digits % 10) + '0');
		putchar(number);
	}

	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
