#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - A program that performs simple operations
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int result;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
if(argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
func = get_op_func(argv[2]);
result = func(atoi(argv[1]), atoi(argv[3]));
printf("%i\n", result);
return (0);
}
