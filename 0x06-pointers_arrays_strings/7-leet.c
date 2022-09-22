#include "main.h"

/**
* leet - Encodes a string into 1337
* @s: String
*
* Return: encoded string
*/

char *leet(char *s)
{
	int i, j;
	char sub[] = "AaEeOoTtLl";
	char rep[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
		{
			if (s[i] == sub[j])
			{
				if (j == 0 || j == 1)
					s[i] = rep[0];
				else if (j == 2 || j == 3)
					s[i] = rep[1];
				else if (j == 4 || j == 5)
					s[i] = rep[2];
				else if (j == 6 || j == 7)
					s[i] = rep[3];
				else
					s[i] = rep[4];
			}
		}
	}

	return (s);
}
