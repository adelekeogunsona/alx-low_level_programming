#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary characters
 *
 * Return: the converted number, or 0
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int u_int = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		u_int = u_int << 1;
		if (b[i] == '1')
			u_int += 1;
	}

	return (u_int);
}
