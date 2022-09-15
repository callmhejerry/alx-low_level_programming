#include <stdio.h>

/**
 * main - checks for prime numbers
 * Return: 0
 */
int main(void)
{
	long x, y;

	x = 612852475143;
	y = 2;
	while (x > y)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
		y++;
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
