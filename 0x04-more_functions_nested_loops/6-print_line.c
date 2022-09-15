#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: the number of lines to be drawn
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
