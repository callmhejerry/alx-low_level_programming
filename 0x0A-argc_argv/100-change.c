#include <stdio.h>
#include <stdlib.h>

int check(char *str);

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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (check(argv[1]) == 0 || atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 0;
		digit = atoi(argv[1]);
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

/**
 * check - checks if a character is a digit
 * @str: the character to check
 *
 * Return: 0 if it is not a digit1 if itis a digit
 */
int check(char *str)
{
	int i, j;

	j = 1;
	if (str[0] == '-' && str[1] != '\0')
	{
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
			{
				j = 0;
				break;
			}
			i++;
		}
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] < '0' || str[i] > '9')
			{
				j = 0;
				break;
			}
			i++;
		}
	}
	return (j);
}
