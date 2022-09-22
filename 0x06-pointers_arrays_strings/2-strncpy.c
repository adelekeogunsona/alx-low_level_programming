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
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;

	while (c < n)
	{
		if (c < b)
			dest[c] = src[c];
		else
			dest[c] = '\0';
		c++;
	}

	return (dest);
}
