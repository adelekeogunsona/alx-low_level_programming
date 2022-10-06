#include "main.h"
#include <stdlib.h>

/**\
 * _realloc - Reallocates memory
 * @ptr: pointer to reallocate
 * @old_size: Old size
 * @new_size: New Size
 *
 * Return: Pointer to new memory block or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new;
	char *temp;

	if (new_size == old_size)
		return (ptr);

	else if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);

		temp = ptr;
		for (i = 0; i < new_size; i++)
		{
			new[i] = temp[i];
		}
		free(ptr);
	}
	return (new);
}
