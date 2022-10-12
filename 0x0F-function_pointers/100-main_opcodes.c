#include <stdio.h>
#include <string.h>

/**
 * main - A program that prints the opcodes of its main function
 * @argc: the number of arguments passed
 * @argv: the array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
return (0);
}
