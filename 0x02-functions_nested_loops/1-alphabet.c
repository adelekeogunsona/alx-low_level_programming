#include "main.h"

/**
* main- Entry point
*
* Return: always zero
*/
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');
}
