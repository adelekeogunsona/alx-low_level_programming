#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* coins_check - check for coins
* @cents: input
*
* Return: coins count
*/

int coins_check(int cents)
{
	int coins = 0, a = 25, b = 10, c = 5, d = 2, e = 1;

	while (cents > 0)
	{
		while (cents >= a)
		{
			cents -= a;
			coins++;
		}

		while (cents >= b)
		{
			cents -= b;
			coins++;
		}

		while (cents >= c)
		{
			cents -= c;
			coins++;
		}

		while (cents >= d)
		{
			cents -= d;
			coins++;
		}

		while (cents >= e)
		{
			cents -= e;
			coins++;
		}
	}

	return (coins);
}

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: always zero
*/

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		cents = atoi(argv[1]);
		coins = coins_check(cents);
		printf("%d\n", coins);
	}

	return (0);
}
