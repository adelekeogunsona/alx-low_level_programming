#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: String one
* @s2: String two
*
* Return: Differences
*/

int _strcmp(char *s1, char *s2)
{
	int a, b;
	int diff = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] == s2[a])
		{
			continue;
		}
		else
		{
			if (s2[a] != '\0')
			{
				diff = s1[a] - s2[a];
				break;
			}
		}
	}

	return (diff);
}
