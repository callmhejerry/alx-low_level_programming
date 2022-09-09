#include <stdio.h>

/**
 * main - prints the all the letters of the alphabets
 * in lower case except from q and e
 * Return: 0 succeful
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		if (ch == 'z')
			putchar('\n');
		ch++;
	}
	return (0);
}
