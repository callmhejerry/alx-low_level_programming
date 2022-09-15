#include <stdio.h>
#define LARGE 10000000000

/**
 * main - prints the fibonacci sequence frm
 * 1 to 98
 * Return: 0 success
 */
int main(void)
{
	unsigned long int a1 = 0, b1 = 1, a2 = 0, b2 = 2;
	unsigned long int h1, h2, h3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2; count < 98; count++)
	{
		if (b1 + b2 > LARGE || a2 > 0 || a1 > 0)
		{
			h1 = (b1 + b2) / LARGE;
			h2 = (b1 + b2) % LARGE;
			h3 = a1 + a2 + h1;
			a1 = a2, a2 = h3;
			b1 = b2, b2 = h2;
			printf("%lu%lu", a2, b2);
		}
		else
		{
			h2 = b1 + b2;
			b1 = b2, b2 = h2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
