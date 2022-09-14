#include "main.h"

/**
 * greater_than_99 - prints any number greater than 99
 * @n: number to be printed
 *
 * Return: void
 */
void greater_than_99(int n)
{
	_putchar((n / 10) / 10 + '0');
	_putchar((n / 10) % 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * less_than_100 - prints any number less than 100
 * @n: the number to be printed
 *
 * Return: void
 */
void less_than_100(int n)
{
	_putchar(' ');
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

/**
 * less_than_9 - prints any number less than 9
 * @n: number to be printed
 *
 * Return: void
 */
void less_than_9(int n)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(n + '0');
}

/**
 * print_times_table - print the n times table
 * @n: the number to be acted upon
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;
	int count;

	if (n > 15 || n < 0)
		return ;
	
	for (a = 0; a <= n; a++)
	{
		b = 0;
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
		for (b = 1; b <= n; b++)
		{
			count = a * b;
			if (count > 9)
			{
				if (count > 99)
					greater_than_99(count);
				else
					less_than_100(count);
			}
			else
				less_than_9(count);
			if (b == n)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

