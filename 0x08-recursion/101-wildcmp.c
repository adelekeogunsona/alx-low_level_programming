#include "main.h"

/**
* wildcmp - Compares 2 strings
* @s1: String one
* @s2: String two
*
* Return: 1 if strings are identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	return (0);
}
