#include <stdio.h>

/**
 * main - prints out all unique possible
 * digit of a base10 number
 * Return: 0 successfuk
 */
int main(void)
{
	int numa;
	int numb;
	int numc;

	numa = 48;
	numb = 48;
	numc = 48;
	while (numa < 57)
	{
		if (numc > numb && numb > numa)
		{
			putchar(numa);
			putchar(numb);
			putchar(numc);
			if (numb + 1 == 57)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (numc == 57)
		{
			numb++;
			numc = 48;
		}
		if (numb == 57)
		{
			numa++;
			numb = 48;
		}
		numc++;
	}
	return (0);
}
