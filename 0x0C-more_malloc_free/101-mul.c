#include <stdio.h>
#include <stdlib.h>

int int_check(char *str);

/**
 * main -  A program to multiply two base10 digit
 * @argc: the total number of arguments passed
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 1;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (int_check(argv[i]))
			result *= atoi(argv[i]);
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%i\n", result);
	return (0);
}

/**
 * int_check - A function that checks if a string
 * can be converted to an integer
 * @str: the string to check
 * Return: 1 if it can be converted to an integer
 * 0 if it cannot
 */
int int_check(char *str)
{
	int check, i;

	check = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (check);
}
