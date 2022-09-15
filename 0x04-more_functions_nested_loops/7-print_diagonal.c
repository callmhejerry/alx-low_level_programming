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
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
