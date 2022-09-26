#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: the pointer to the array of integers
 * @size: the size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, d1, d2;

	i = 0;
	d1 = 0;
	d2 = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				d1 += *(a + (i * size + j));
			j++;
		}
		i++;
	}
	i = 0;
	j = size - 1;
	while (i < size && j >= 0)
	{
		d2 += *(a + (i * size + j));
		i++;
		j--;
	}
	printf("%d, %d\n", d1, d2);
}
