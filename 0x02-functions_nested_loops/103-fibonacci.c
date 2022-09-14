#include <stdio.h>

/**
 * main - prints the sum of the
 * even numbers of a fibonacci sequence
 * Return: 0 success
 */
int main(void)
{
	long a;
	long b;
	long c;
	long sum;

	sum = 2;
	c = 3;
	a = 2;
	b = 3;
	while (c <= 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%li\n", sum);
	return (0);
}
