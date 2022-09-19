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
	int i;
	int count = -1;
	char reverse = s[0];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		reverse = s[i];
		s[i] = s[count];
		s[count] = reverse;
	}
}
