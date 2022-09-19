#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, half, count;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
	{
		half = len / 2;
		count = len - half;
		while (count < len)
		{
			_putchar(*(str + count));
			count++;
		}
	}
	else
	{
		half = (len - 1) / 2;
		count = len - half;
		while (count < len)
		{
			_putchar(*str + count);
			count++;
		}
	}
	_putchar('\n');
}
