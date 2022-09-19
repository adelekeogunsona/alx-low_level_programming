#include "main.h"

/**
* rev_string - Prints a string in reverse
* @s: String to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int count = -1;

	while (s[count] != '\0')
	{
		count++;
	}

	char reverse[count-1];
	int i;

	for (; count >= 0; count--)
	{
		i = 0;
		char reverse[i] = s[count];
	}

	*s = reverse;
}
