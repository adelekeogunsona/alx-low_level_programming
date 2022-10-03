#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer or NULL if str is empty
 */

char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *ptr;

	while (str[length] != '\0')
		length++;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
