#include <stdio.h>

/**
 * main - prints out all sinfgle digit numbers of
 * base 10 from 0
 * Return: 0 sucessful
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%i", num);
		if (num == 9)
			printf("\n");
		num++;
	}
	return (0);
}
