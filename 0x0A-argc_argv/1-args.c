#include <stdio.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: always zero
*/

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
