#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * , but prints Fizz when the number is divisible
 * by 3 , Buzz when it is divisible by 5 and
 * FizzBuzz when it is divisible by 15
 * Return: 0n success
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
		i++;
	}
	return (0);
}
