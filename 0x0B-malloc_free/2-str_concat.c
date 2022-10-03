#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 * 
 * Return: the concatenated string or NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, total = 0;
	int i, j = 0;
	char *join;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	
	join = malloc(sizeof(char) * (len1 + len2 + 1));

	if (join == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		join[i] = s1[i];
	}
	
	total = (len1 + len2);
	for (; i < total; i++)
	{
		join[i] = s2[j];
		j++;
	}

	return (join);
}