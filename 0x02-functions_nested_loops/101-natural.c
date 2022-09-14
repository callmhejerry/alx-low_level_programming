#include <stdio.h>

/**
 * main - prints the multiples
 * of 3 or 5 from 1024
 * Return: 0 success
 */
int main(void)
{
	int num;
	int sum;

	num = 1;
	sum = 0;
	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
		num++;
	}
	printf("%d\n", sum);
	return (0);
}

