#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
*
* Return: void
*/
void print_alphabet_x10(void)
{
	char letters;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}

	_putchar('\n');

	}
}
