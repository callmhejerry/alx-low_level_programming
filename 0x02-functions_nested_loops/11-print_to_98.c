#include "main.h"

/**
 * greater_than_98 - checks if the number
 * n is greater than 98 , and print to it
 * @n: the number to be checked
 *
 * Return: void
 */
void greater_than_98(int n)
{
	while (n >= 98)
	{
		if (n > 99)
		{
			_putchar((n / 10) / 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		if (n == 98)
			_putchar('\n');
		else
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}

/**
 * less_than_98 - checks if the number is less than
 * 98 so that it can print to it
 * @n: the number to be checked
 *
 * Return: void
 */
void less_than_98(int n)
{
	while (n <= 98)
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar((-1 * n) + '0');
		}
		else if (n == 0)
			_putchar(n + '0');
		else
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
				_putchar(n + '0');
		}
		if (n == 98)
			_putchar('\n');
		else
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}

/**
 * equal_to_98 - check if the number is equal
 * to 98
 * @n: the number to check
 *
 * Return: void
 */
void equal_to_98(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	_putchar('\n');
}

/**
 * print_to_98 - prints all natural numbers
 * from n to 98
 * @n: the number to be printed from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		greater_than_98(n);
	else if (n < 98)
		less_than_98(n);
	else
		equal_to_98(n);
}
