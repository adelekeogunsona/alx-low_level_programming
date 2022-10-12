#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Gets correct function to use
 * @s: Operator
 *
 * Return: Correct function to use
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (s != ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (0);
}
