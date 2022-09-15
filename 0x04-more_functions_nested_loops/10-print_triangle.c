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
		for (int i = 1; i <= size; i++)
		{
			for (int j = size; j >= i; j--)
			{
				if (j <= i)
				{
					for (int k = 1; k <= j; k++)
						_putchar('#');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		putchar('\n');
}
