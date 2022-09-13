#include "main.h"

/**
* print_alphabet - Prints lower case letters from a to z.
*
* Return: void
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
