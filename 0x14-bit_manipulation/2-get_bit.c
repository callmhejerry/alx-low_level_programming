#include "main.h"
#include <stdio.h>
/**
  * get_bit - A function that returns the value
  * of a bit at a given index
  * @n: the number to get the bit from
  * @index: the index to get
  * Return: the value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	check = 1 << index;
	return (((n & check) >> index));
}
