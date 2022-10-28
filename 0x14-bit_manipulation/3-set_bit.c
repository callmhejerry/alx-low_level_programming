#include "main.h"

/**
  * set_bit - A function that sets the value
  * of a bit to 1 at a given index
  * @n: the number to set the bit to
  * @index: the index to set
  * Return: 1, or -1 if it fails
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	check = 1 << index;
	*n |= check;
	return (1);
}
