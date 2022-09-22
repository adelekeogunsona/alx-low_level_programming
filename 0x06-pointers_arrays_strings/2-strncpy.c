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
	int a = 0, count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (n >= 0 && a < n && a < count)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
