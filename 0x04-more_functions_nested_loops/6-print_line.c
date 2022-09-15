#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: the number of lines to be drawn
 *
 * Return: void
 */
void print_line(int n)
{
	int num;

	num = 1;
	if (n > 0)
	{
		while (num <= n)
		{
			_putchar('_');
			num++;
		}
	}
	_putchar('\n');
}
