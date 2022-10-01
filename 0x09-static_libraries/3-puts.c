#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line
 * @str: The string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int num;

	num = 0;
	while (*(str + num) != '\0')
	{
		_putchar(*(str + num));
		num++;
	}
	_putchar('\n');
}
