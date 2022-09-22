#include "main.h"

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
	int rev[n];

	while (i < n)
	{
		rev[i] = a[i];
		i++;
	}

	while (n >= 0)
	{
		n--;
		a[j] = rev[n];
		j++;
	}
}
