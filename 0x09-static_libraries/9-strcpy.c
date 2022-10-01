#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: the pllace where the string is copied to
 * @src: the place where the string is copied from
 *
 * Return: the pointerof dest
 */
char *_strcpy(char *dest, char *src)
{
	int count, len;

	len = 0;
	while (*(src + len) != '\0')
		len++;
	count = 0;
	while (count <= len)
	{
		dest[count] = *(src + count);
		count++;
	}
	return (dest);
}
