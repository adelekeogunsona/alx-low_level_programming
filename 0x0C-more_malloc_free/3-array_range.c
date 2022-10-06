#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates and array of integers
 * @min: lower limit
 * @max: upper limit
 *
 * Return: array or NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (min + max + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		arr[i] = i;

	return (arr);
}
