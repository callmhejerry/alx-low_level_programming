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
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
