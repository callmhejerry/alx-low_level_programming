#include <stdio.h>

/**
 * main - prints out the letters of the alphabets in lower case
 * Return: 0 succeddful
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'z')
			putchar('\n');
		ch++;
	}
	return (0);
}
