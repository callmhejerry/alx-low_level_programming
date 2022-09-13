#include "main.h"
/**
 * print_sign - checks if a number is negative
 * positive
 * @n: the number to be checked
 *
 * Return: 1 for positive number,
 * 0 for a zero number , -1 for a negative number
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
