#include "main.h"

/**
* main- Entry point
*
* Return: always zero
*/
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');

	return (0);
}
