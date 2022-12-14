#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - A program that prints the opcodes of its main function
 * @argc: the number of arguments passed
 * @argv: the array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *str;
int i;

str = (char *)main;
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
for (i = 0; i < atoi(argv[1]); i++)
{
printf("%02x", str[i] & 0xFF);
if (i != atoi(argv[1]) - 1)
printf(" ");
}
printf("\n");
return (0);
}
