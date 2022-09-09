#include <stdio.h>

/**
 * main - prints out the lower case alphabets
 * in reverse
 * Return: 0 successful
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
		ch--;
	}
	return (0);
}
