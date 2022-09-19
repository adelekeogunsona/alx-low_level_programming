#include "main.h"
#include <stdio.h>

/**
* _strlen - Returns the length of a string
* @s: Character to be counted
*
* Return: The length of char s
*/

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;

	return (length);
}
