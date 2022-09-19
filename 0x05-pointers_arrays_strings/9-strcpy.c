#include "main.h"
#include <stdio.h>

/**
* _strcpy - Copies the string from one pointer to the other
* @dest: string one
* @src: string two
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
