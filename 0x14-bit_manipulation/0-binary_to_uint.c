#include <string.h>
#include "main.h"
#include <math.h>

unsigned int _pow(unsigned int x, unsigned int y);
/**
  * binary_to_uint - A fucntion that converts a
  * binary number to an unsigned int
  * @b: the binary number to be converted
  * Return: the equivalent decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, po, len, count;

	if (b == NULL)
		return (0);
	result = 0;
	len = strlen(b);
	po = len;
	count = 0;
	while (po != 0 && count < len)
	{
		po--;
		if (b[count] != '1' && b[count] != '0')
			return (0);
		result += (b[count] - '0') * _pow(2, po);
		count++;
	}
	return (result);
}

/**
 * _pow - return the value of x raised to power y
 * @x: base number
 * @y: the power
 *
 * Return: the value of x raised to power y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int result, count;

	if (y == 0)
		return (1);
	count = 0;
	result = 1;
	while (count < y)
	{
		result *= x;
		count++;
	}
	return (result);
}
