#include "main.h"
/**
 * times_table - print 9 times table
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int count;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
		b = 1;
		while (b <= 9)
		{
			count = a * b;
			if (count > 9)
			{
				_putchar(count / 10 + '0');
				_putchar(count % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(count + '0');
			}
			if (b == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
		b = 0;
	}
}
