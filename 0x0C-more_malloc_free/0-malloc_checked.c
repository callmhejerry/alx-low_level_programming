#include <stdlib.h>

/**
 * malloc_checked -  A function that allocates memory using malloc
 * @b: the ammount of memory to be allocated
 *
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (b == NULL)
		exit(98);
	return (ptr);
}
