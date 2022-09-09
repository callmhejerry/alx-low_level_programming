#include <stdio.h>

/**
 * main - prints the hexa decimal numbers
 * Return: 0 successful
 */
int main(void)
{
	int check;

	check = 48;
	while (check <= 57)
	{
		putchar(check);
		check++;
	}
	check = 97;
	while (check <= 102)
	{
		putchar(check);
		if (check == 102)
			putchar('\n');
		check++;
	}
	return (0);
}
