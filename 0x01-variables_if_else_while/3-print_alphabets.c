#include <stdio.h>

/**
 * main - prints the letters of the alpabet in lower
 * and upper case
 * Return: 0 successful
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		if (ch == 'Z')
			putchar('\n');
		ch++;
	}
	return (0);
}

