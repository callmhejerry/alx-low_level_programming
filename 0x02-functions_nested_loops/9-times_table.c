#include "main.h"
/**
 * times_table - print 9 times table
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b <= 9)
		{
			_putchar(a * b + '0');
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
