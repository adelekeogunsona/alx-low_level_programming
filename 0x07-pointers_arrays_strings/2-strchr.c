#include "main.h"

/**
* _strchr - Locates a character in a string
* @s: String
* @c: Character
*
* Return: a pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
