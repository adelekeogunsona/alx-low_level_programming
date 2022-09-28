#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number
*
* Return: the factorial or -1 if n is lower than 0
*/

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
		return (-1);
}
