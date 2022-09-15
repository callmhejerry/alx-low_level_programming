#include "main.h"

/**
 * print_triangle - prints a triangle followed by  new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int k;

		i = 1;
		while (i <= size)
		{
			j = size;
			while (j >= i)
			{
				if (j <= i)
				{
					k = 1;
					while (k <= j)
					{
						_putchar('#');
						k++;
					}
				}
				else
					_putchar(' ');
				j--;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
}
