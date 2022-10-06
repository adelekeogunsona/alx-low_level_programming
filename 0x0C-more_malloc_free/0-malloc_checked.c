#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: number of bytes to allocate
 * 
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
