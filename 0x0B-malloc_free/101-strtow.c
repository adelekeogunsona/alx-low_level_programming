#include <stdlib.h>
#include "main.h"

/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: Char
*/

char **strtow(char *str)
{
	char **d;
	int count = 0;

	if (str == NULL || str == "")
		return (NULL);

	while (*str)
		count++;

	d = malloc(4193);
	return (d);
}
