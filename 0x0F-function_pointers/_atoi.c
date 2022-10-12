#include <stdio.h>
/**
 * _atoi - A function that converts a string to an integer
 * @str: the string to be converted
 * Return: an integer
 */

int _atoi(char *str)
{
if (*str == '-')
return (-1 * atoi(str));
return (atoi(str));
}
