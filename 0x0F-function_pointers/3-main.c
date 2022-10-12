#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: always zero
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2];
	if (*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%')
	{
		if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
		{
			printf("Error\n");
			exit(100);
		}

		printf("%d\n", get_op_func(op)(num1, num2));
	}
	else
	{
		printf("Error\n");
			exit(99);
	}

	return (0);
}
