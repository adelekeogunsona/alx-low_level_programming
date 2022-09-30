#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* check_number - Checks if string is a number
* @s: String
*
* Return: 0 if true, 1 otherwise
*/

int check_number(char *s)
{
	int i, check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			check = 1;
			break;
		}
		else
			check = 0;
	}

	return (check);
}

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always zero
*/

int main(int argc, char *argv[])
{
	int check = 0, sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		check = check_number(argv[i]);

		if (check == 1)
			break;
	}

	if (check == 1)
		printf("Error\n");
	else
	{
		for (j = 1; j < argc; j++)
			sum += atoi(argv[j]);

		printf("%d\n", sum);
	}

	return (0);
}
