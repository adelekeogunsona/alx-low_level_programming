#include "main.h"
#include <stdio.h>

/**
* reverse_array - Reverses the content of an array of integers
* @a: Array
* @n: number of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	int rev[10000];

	while (i <= n)
	{
		rev[i] = a[i];
		i++;
	}

	n -= 1;

	while (n >= 0)
	{
		a[j] = rev[n];
		j++;
		n--;
	}
}
