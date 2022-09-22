#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copies a string
* @dest: Destination
* @src: Source
* @n: Limit
*
* Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
		a++;

	while (b < n)
	{
		if (b < a)
			dest[b] = src[b];
		else
			dest[b] = '\0';
		b++;
	}

	return (dest);
}
