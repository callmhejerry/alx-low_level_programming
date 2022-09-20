#include "main.h"

/**
 * _atoi - A function to convert a string to
 * an integer
 * @s: the string to be used
 *
 * Return: the converted string
 */
int _atoi(char *s)
{
	int minus, tens, count;
	unsigned int digit;

	minus = 0;
	count = 0;
	tens = 1;
	digit = 0;
	while (*(s + count) > '9' || *(s + count) < '0')
	{
		if (*(s + count) == '-')
			minus++;
		count++;
	}
	while (*(s + count) >= '0' && *(s + count) <= '9')
	{
		digit = digit * tens + (*(s + count) - '0');
		count++;
		tens = 10;
	}
	if (minus % 2 == 1 && digit > 0)
		digit = -1 * digit;
	return (digit);
}
