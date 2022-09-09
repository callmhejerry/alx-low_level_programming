#include <stdio.h>

/**
 * main - prints unique combinations of base10 numbers
 * Return: 0 successful
 */
int main(void)
{
	int numa;
	int numb;

	numa = 48;
	numb = 48;
	while (numa <= 57)
	{
		if (numb != numa)
		{
			putchar(numa);
			putchar(numb);
		}
		if (numb == 57)
		{
			numa++;
		}
		if (numb == 57 && numa == 57)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
		numb++;
	}
	return (0);
}
