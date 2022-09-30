#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that that prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: the total number of arguments passed
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, digit;

	digit = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 0;
		while (digit != 0)
		{
			if (digit - 25 >= 0)
				digit = digit - 25;
			else if (digit - 10 >= 0)
				digit = digit - 10;
			else if (digit - 5 >= 0)
				digit = digit - 5;
			else if (digit - 2 >= 0)
				digit = digit - 2;
			else if (digit - 1 >= 0)
				digit = digit - 1;
			i++;
		}
		printf("%i\n", i);
	}
	return (0);
}
