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

		i = 1;
		while (i <= size)
		{
			j = size;
			while (j >= i)
			{
				if (j <= i)
				{
					for (int k = 1; k <= j; k++)
						_putchar('#');
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
