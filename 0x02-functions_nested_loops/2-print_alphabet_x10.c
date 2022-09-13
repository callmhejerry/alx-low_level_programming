#include "main.h"

/**
 * print_alphabet_x10 - print the letters of the
 * alphabets in lower case 10 times
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int count;
	char ch;

	ch = 'a';
	count = 1;
	while (count <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		ch = 'a';
		count++;

	}
}
