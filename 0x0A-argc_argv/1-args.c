#include <stdio.h>

/**
 * main - a program that prints the number of
 * arguments passed to it
 * @argc: the number of arguments passed
 * @argv: the array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
