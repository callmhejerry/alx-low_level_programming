#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0 succeful
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
