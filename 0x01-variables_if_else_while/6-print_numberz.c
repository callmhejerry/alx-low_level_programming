#include <stdio.h>

/**
 * main - printthe base 10 numbers from 0
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
		num++;
	}
	return (0);
}
