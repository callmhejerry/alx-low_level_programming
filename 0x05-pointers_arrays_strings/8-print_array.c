#include "main.h"

/**
 * print_array - A function that prints all the
 * elements of an array
 * @a: the Array to be printed
 * @n: the length of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d", *(a + count));
		count++;
		if (count == n)
			printf("\n");
		else
			printf(", ");
	}
}
