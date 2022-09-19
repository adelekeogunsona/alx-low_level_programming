#include "main.h"
#include <stdio.h>

/**
* print_array - Prints nth number of an array
* @a: array
* @n: number of elements to print
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;
	int times;

	times = n - 1;

	for (i = 0; i <= times; i++)
	{
		printf("%d", a[i]);

		if (i < times)
			printf(", ");
	}

	printf("\n");
}
