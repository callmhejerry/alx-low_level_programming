#include <stdlib.h>
#include <std.io>
#include <time.h>
/**
 * main - A function to print the last random digit
 * Return: 0 successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastNum = n % 10;

	if (lastNum > 5)
		printf("Last digit of %i is %i and is greater than %i\n", n, lastNum, 5);
	else if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %i is %i and is less than %i and not %i\n", n, lastNum, 6, 0);
	else
		printf("Last digit of %i is %i and is %i\n", n, lastNum, 0);
	return (0);
}
