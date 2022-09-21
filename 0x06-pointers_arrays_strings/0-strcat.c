#include "main.h"
#include <stdio.h>

/**
* _strcat - Concatenates two strings
* @dest: Destination
* @src: Source
*
* Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int total1 = 0, total2 = 0, a = 0, b = 0, i = 0;
	char all[5000];

	while (dest[total1] != '\0')
	{
		all[a] = dest[total1];
		total1++;
		a++;
	}

	while (src[total2] != '\0')
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
