#include "main.h"

/**
 * more_numbers - prints out 10 times the numbers
 * from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int b;

	a = 1;
	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			int rem, act;

			rem = b % 10;
			act = b / 10;
			if (act > 0)
				_putchar(act + '0');
			_putchar(rem + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
