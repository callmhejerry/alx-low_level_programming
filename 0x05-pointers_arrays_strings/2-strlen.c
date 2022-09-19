#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string to be used
 *
 * Return: the lenght of the string s
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*(s + num) != '\0')
	{
		num++;
	}
	return (num);
}
