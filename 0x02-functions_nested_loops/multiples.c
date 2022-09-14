#include <stdio.h>

/**
 ** multiples - returns the multiples
 * of 3 or 5
 * Return: the sum of the multiples of
 * 3 or 5
 */
int multiples(void)
{
	int count;
	count = 0;
	for (int i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			count += i;
	}
	if (count > 99)
	{
		putchar((count / 10) / 10 + '0');
		putchar((count / 10) % 10 + '0');
		putchar(count % 10 + '0');
	}
	else if (count > 9)
	{
		putchar(count / 10 + '0');
		putchar(count % 10 + '0');
	}
	else
		putchar(count + '0');
	putchar('\n');
	return (count);
}
