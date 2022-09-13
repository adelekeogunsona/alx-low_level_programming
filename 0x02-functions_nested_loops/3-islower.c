#include "main.h"

/**
* _islower - Function to check for lowercase character
*
* Return: 1 if lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
