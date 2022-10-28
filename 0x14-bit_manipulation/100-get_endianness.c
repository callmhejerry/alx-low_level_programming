#include <stdio.h>

/**
  * get_endianness - A function that checks the endianness
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	unsigned int i;
	char *bte;

	i = 1;
	bte = (char *)&i;
	if (*btye)
		return (0);
	return (1);
}
