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

	len = 0;
	num = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	check = len - 1;
	char ch[];

	while (num < len)
	{
		ch[num] = *(s + num);
		num++;
	}
	num = 0;
	while (num < len)
	{
		s[num] = ch[check];
		num++;
		check--;
	}
}
