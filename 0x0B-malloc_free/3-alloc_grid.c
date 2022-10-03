#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array
 * @width: array column
 * @height: array row
 *
 * Return: pointer to the 2 dimensional array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int *ptr, **arr;
	int len = 0, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **)malloc(len);

	if (arr != NULL)
	{
		ptr = (int *)(arr + height);

		for (i = 0; i < height; i++)
			arr[i] = (ptr + width * i);

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}

		return (arr);
	}
	return (0);
}
