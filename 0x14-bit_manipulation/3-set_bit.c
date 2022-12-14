#include "main.h"
#include "stdio.h"
#include <stdlib.h>

/**
  * set_bit - A function that sets the value
  * of a bit to 1 at a given index
  * @n: the number to set the bit to
  * @index: the index to set
  * Return: 1, or -1 if it fails
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= (1 << index);
	return (1);
}
