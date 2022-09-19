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
	int total = 0;
	int count = 0;

	while (src[total] != '\0')
		total++;

	count = total - 1;

	for (; i <= count; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
