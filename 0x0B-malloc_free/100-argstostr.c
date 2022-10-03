#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: result or NULL if fail
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, length = 0, next = 0;

	if (ac == NULL || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	str = malloc(sizeof(char) * length + ac + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[next] = av[i][j];
			next++;
		}
		str[next] = '\n';
		next++;
	}
	str[next] = '\0';
	return (str);
}
