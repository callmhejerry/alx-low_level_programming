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
	check = len;
	while (num < len)
	{
		ch = *(s + num);
		s[num] = *(s + (check - 1));
		s[check - 1] = ch;
		check--;
		num++;
	}
}
