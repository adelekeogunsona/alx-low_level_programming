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
	int a, b = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (min + max + 1));

	if (arr == NULL)
		return (NULL);

	for (a = min; a <= max; a++)
	{
		arr[b] = a;
		b++;
	}

	return (arr);
}
