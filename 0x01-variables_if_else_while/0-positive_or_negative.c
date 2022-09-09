#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - this function checks if a random number is positive or negative
 * Return: 0 successful program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
