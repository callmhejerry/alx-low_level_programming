#include <stdio.h>

/**
 * main - print all 4 combinations of
 * a base10 number
 * Return: 0 successful
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	while (a <= 57)
	{
		if ((a + b) < (c + d))
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if ((a + 1) > 57 && (b + 1) > 57)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (d == 57 && c == 57)
		{
			b++;
			c = 48;
			d = 48;
		}
		if (d == 57)
		{
			c++;
			d = 48;
		}
		if (b == 57)
		{
			a++;
			b = 48;
		}
		d++;
	}
	return (0);
}
