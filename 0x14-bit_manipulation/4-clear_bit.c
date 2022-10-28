#include "main.h"
#include <stdio.h>

/**
  * clear_bit -  A function that sets the value of a
  * bit to 0 at a given index
  * @n: the value to change its bit
  * @index: the index to change
  * Return: 1, -1 if error occured
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
