#include "main.h"

/**
* string_toupper - Changes lowercase to uppercase
* @a: String
*
* Return: string
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}

	return (a);
}
