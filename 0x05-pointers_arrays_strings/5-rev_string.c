#include "main.h"

/**
 * rev_string -  a fuction that reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int num;
	int len;
	int check;
	char ch;

	len = 0;
	num = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		ch = *(s + num);
		*(s + num) = *(s + (len - 1));
		*(s + (len - 1)) = ch;
		num++;
		len--;
	}
}
