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
		while (b <= 9)
		{
			count = a * b;
			if (b == 9)
			{
				if (count > 9)
				{
					_putchar(count / 10 + '0');
					_putchar(count % 10 + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
					_putchar(count);
					_putchar('\n');
				}
			}
			else
			{
				if (count > 9)
				{
					_putchar(count / 10 + '0');
					_putchar(count % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(count);
					_putchar(',');
					_putchar(' ');
				}
			}
			b++;
		}
		a++;
		b = 0;
	}
}
