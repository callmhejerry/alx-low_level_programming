#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		i = 1;
		while (i <= size)
		{
			int j;

			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
