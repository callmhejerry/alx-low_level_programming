#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int z, b;

	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n >= -9 && n < 0)
	{
		_putchar('-');
		_putchar((-1 * n) + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -1 * n;
		}
		b = 10;
		while (n / b > 9)
			b = b * 10;
		while (b >= 1)
		{
			z = n / b;
			n = n % b;
			_putchar(z + '0');
			b /= 10;
		}
	}
}
