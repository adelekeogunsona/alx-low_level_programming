#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: always zero
*/

int main (int argc, char* argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}