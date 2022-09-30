#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates two strings
* @dest: Destination
* @src: Source
* @n: Limit
*
* Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int total1 = 0, total2 = 0, a = 0, b = 0, i = 0;
	char all[10000];

	while (dest[total1] != '\0')
	{
		all[a] = dest[total1];
		total1++;
		a++;
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

	return (dest);
}
