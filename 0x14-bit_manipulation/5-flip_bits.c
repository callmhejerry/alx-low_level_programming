#include <stdio.h>

/**
  * flip_bits - A function that returns the number of bits
  * you would need to flip to get from one number to another
  * @n: the first number
  * @m: the second number
  * Return: the numbers of flips
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result, xor;

	result = 0;
	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			result++;
		xor >>= 1;
	}
	return (result);
}
