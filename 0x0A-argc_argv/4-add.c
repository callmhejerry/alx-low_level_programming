#include <stdio.h>
#include <stdlib.h>

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

/**
 * main - A program that adds positive numbers
 * @argc: the numbers of arguments passed
 * @argv: the array arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 0;

	if (argc == 1)
		printf("%i\n", result);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (check(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
			i++;
		}
		printf("%i\n", result);
	}
	return (0);
}
