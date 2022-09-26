#include "main.h"

/**
* _memset - Fills memory with a constant byte
* @s: String
* @b: Constant byte
* @n: Number of bytes to be filled
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
