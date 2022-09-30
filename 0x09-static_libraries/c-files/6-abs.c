#include "main.h"

/**
* _abs - Function that computes the absoulte value of an integer
* @n: Number to be checked
*
* Return: Absolute value of n
*/
int _abs(int n)
{
	if (n <= 0)
		return (-n);
	else
		return (n);
}
