#include <stdio.h>
#include <stdlib.h>

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
		printf("0");
	else
	{
		i = 1;
		while (i < argc)
		{
			if (*argv[i] < '1' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
			i++;
		}
	}
	printf("%i\n", result);
	return (0);
}
