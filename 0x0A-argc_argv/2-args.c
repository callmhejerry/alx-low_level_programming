#include <stdio.h>

/**
 * main - A program that prints the arguments
 * passed to it
 * @argc: the number of arguments passed
 * @argv: the array of arguments pased
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
