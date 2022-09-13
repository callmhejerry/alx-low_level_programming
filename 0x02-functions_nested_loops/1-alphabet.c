#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the letterd of the
 * alphabets in lower case.
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

