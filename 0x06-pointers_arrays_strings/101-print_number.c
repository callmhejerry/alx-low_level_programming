#include "main.h"

/**
 * print_number - A function to print integers
 * @n: the number to print
 *
 * return: void
 */
void print_number(int n)
{
	unsigned int tens, num;

	tens = 1;
	while (n / tens > 9 || n / tens < -9)
		tens *= 10;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (tens >= 1)
	{
		num = (n / tens) % 10;
		_putchar(num + '0');
		tens /= 10;
	}
}
