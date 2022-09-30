#include <stdio.h>

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
		result = argv[1] * argv[2];
		printf("%i\n", result);
	}
	return (0);
}
