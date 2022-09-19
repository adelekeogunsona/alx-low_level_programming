#include "main.h"
#include <stdio.h>

/**
* rev_string - Prints a string in reverse
* @s: String to be printed
*
* Return: void
*/

void rev_string(char *s)
{
	int count = -1;
	int i;
	char reverse;

	while (s[count] != '\0')
	{
		count++;
	}

	for (; count >= 0; count--)
	{
		i = 0;
		strcat(reverse, s[count]);
	}

	*s = reverse;
}
