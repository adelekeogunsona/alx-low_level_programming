#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Returns the index of first occurence of 0
 * @array: array to be indexed
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: the index that matches the search
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check, match = -1;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
		{
			match = i;
			break;
		}
	}

	return (match);
}
