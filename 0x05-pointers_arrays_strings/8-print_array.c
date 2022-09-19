#include "main.h"
#include <stdio.h>

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
		if (count == n - 1)
			printf("%d\n", count);
		else
			printf("%d, ", count);
		count++;
	}
}
