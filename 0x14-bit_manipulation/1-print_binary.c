#include "main.h"
#include <stdio.h>

unsigned long int _pow(long x, long y);
/**
  * print_binary - A function that prints the binary
  * representation of a number
  * @n: the number to be converted to binary
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	long count;

	num = n;
	count = 0;
	if (num == 1)
	{
		_putchar('1');
		return;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	while (_pow(2, count) <= num)
		count++;
	count--;
	while (num > 0 || count >= 0)
	{
		if (num - _pow(2, count) >= 0)
		{
			num = num - _pow(2, count);
			_putchar('1');
		}
		else
			_putchar('0');
		count--;
	}
}

/**
 * _pow - return the value of x raised to power y
 * @x: base number
 * @y: the power
 *
 * Return: the value of x raised to power y
 */
unsigned long int _pow(long x, long y)
{
	unsigned long int result, count;

	if (y == 0)
		return (1);
	count = 0;
	result = 1;
	while (count < y)
	{
		result *= x;
		count++;
	}
	return (result);
}
