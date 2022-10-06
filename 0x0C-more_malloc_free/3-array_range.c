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
	int i, total;
	int *arr;

	if (min > max)
		return (NULL);

	total = min + max + 1;
	arr = malloc(sizeof(int) * total);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		arr[i] = i;

	return (arr);
}
