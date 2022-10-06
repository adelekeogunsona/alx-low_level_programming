#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to use from s2
 *
 * Return: pointer to concatenated string or NULL on error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n >= b)
		n = b;

	concat = malloc(sizeof(char) * (a + n) + 1);
	for (i = 0; s1[i] != '\0'; i++)
		*(concat + i) = s1[i];
	for (j = 0; j < n; j++)
	{
		*(concat + i) = s2[j];
		i++;
	}
	*(concat + i) = '\0';

	return (concat);
}
