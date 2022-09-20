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
	int count;
	char ch;

	count = 0;
	num = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	len = count;
	while (num < len / 2)
	{
		ch = s[num];
		s[num] = s[count - 1];
		s[count - 1] = ch;
		num++;
		count--;
	}
}
