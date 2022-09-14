#include <stdio.h>

/**
 * main - prints the first 50 fibonacci
 * numbers
 * Return: 0 success
 */
int main(void)
{
	long a;
	long b;
	long c;
	int count;

	a = 1;
	b = 2;
	count = 3;
	printf("%li, %li, ", a, b);
	while (count <= 50)
	{
		c = a + b;
		if (count == 50)
			printf("%li\n", c);
		else
			printf("%li, ", c);
		a = b;
		b = c;
		count++;
	}
	return (0);
}
