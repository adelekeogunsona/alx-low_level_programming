#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: size to allocate
 * @c: character to intialize
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);

	if (str != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}

		return (str);
	}
	else
		return (NULL);
}