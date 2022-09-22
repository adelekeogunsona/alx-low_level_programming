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
	int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
