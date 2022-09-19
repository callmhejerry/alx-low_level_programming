#include "main.h"

/**
 * print_rev - A function that prints s in reverse
 * @s: the String to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len > 1)
	{
		if (*(s + (len - 1)) != '\0')
			_putchar(*(s + (len - 1)));
		len--;
	}
	_putchar('\n');
}
