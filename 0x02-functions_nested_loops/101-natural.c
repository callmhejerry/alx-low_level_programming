#include <stdio.h>

/**
 * main - print the sum of the multiples
 * of 3 or 5
 * Return: 0 success
 */
int main(void)
{
	int count;

	count = 0;
	for (int i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			count += i;
	}
	putchar(count + '0');
	putchar('\n');
	return (0);
}
