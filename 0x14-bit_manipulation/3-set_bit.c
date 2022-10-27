#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 or -1 if fail
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	s = 1 << index;
	*n = *n | s;

	return (1);
}
