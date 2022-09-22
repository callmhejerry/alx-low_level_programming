#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: the string to be printed
 * @size: the number of bytes to print
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int num, a, c;

	if (size % 10 == 0)
		num = size / 10;
	else if (size % 10 > 0)
		num = (size / 10) + 1;
	else
		num = 0;
	a = 0;
	for (int i = 1; i <= num; i++)
	{
		c = a;
		printf("%08x: ", a);
		do {
			if (a < size)
				printf("%02x", b[a]);
			else
				printf("  ");
			if ((a + 1) % 2 == 0)
				printf(" ");
			a++;
		} while (a % 10 != 0)
		do {
			if (c < size)
			{
				if (b[c] >= 32 && b[c] <= 126)
					printf("%c", b[c]);
				else
					printf(".");
			}
			c++;
		} while (c % 10 != 0);
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
