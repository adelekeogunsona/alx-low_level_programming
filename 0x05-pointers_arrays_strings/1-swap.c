#include "main.h"
#include <stdio.h>

/**
* swap_int - Function that swaps the values of two integers
* @a: First value
* @b: Second value
*/

void swap_int(int *a, int *b)
{
	int first = *a;
	int second = *b;

	*a = second;
	*b = first;
}
