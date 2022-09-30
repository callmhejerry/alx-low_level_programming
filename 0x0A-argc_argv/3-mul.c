#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two digits
 * @argc: the number of arguments passed
 * @argv: the array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", result);
	}
	return (0);
}
