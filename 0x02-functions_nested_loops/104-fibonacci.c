#include <stdio.h>

/**
 * main - prints the fibonacci sequence frm
 * 1 to 98
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
	while (count <= 98)
	{
		c = a + b;
		if (count == 98)
			printf("%li\n", c);
		else
			printf("%li, ", c);
		a = b;
		b = c;
		count++;
	}
}
