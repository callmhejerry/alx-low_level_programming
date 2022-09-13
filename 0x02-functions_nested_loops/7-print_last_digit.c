#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be tested on
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	_putchar(last_num + '0');
	return (last_num);
}
