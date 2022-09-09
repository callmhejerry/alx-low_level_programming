#include <stdio.h>

/**
 * main - prints unique combinations of base10 numbers
 * Return: 0 successful
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 48;
	num2 = 48;
	while (num1 <= 57)
	{
		if (num2 != num1)
		{
			putchar(num1);
			putchar(num2);
		}
		if (num2 == 57)
		{
			num1++;
		}
		if (num2 == 57 && num1 == 57)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
		num2++;
	}
	return (0);
}
