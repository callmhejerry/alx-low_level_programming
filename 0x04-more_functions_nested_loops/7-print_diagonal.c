#include "main.h"

/**
 * print_diagonal - draws a diagonal line on th terminal
 * @n: the number of times to draw the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		i = 1;
		while (i <= n)
		{
			int j;

			j = 1;
			while (j <= i)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
