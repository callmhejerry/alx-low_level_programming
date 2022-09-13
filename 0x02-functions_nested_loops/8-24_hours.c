#include "main.h"
/**
 * jack_bauer - prints every minute of
 * the day of jack Bauer, starting from
 * 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
			b++;
		}
		a++;
		b = 0;
	}
}
