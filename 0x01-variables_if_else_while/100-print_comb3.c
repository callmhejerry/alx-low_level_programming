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
		if (numb > numa)
		{
			putchar(numa);
			putchar(numb);
			if (numa + 1 == 57)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (numb == 57)
		{
			numa++;
			numb = 48;
		}
		numb++;
	}
	return (0);
}
