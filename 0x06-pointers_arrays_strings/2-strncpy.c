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
	int total1 = 0, total2 = 0, a = 0, b = 0, i = 0;
	char all[500000];

	while (dest[total1] != '\0')
	{
		total1++;
	}

	while (total2 < n)
	{
		all[a] = src[total2];
		total2++;
		a++;
	}

	while (all[b] != '\0')
	{
		dest[i] = all[b];
		i++;
		b++;
	}

	while (i <= total1)
	{
		dest[i] = '*';
		i++;
	}

	return (dest);
}
