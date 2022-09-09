#include <stdio.h>

/**
 * main - prints out the base10 numbers with a trailing ','
 * Return: 0 successful
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	return (0);
}
