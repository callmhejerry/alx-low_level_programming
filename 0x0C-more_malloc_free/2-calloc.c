#include <stdlib.h>

/**
 * _calloc - A function that allocates memmory for an array
 * @nmemb: the number of elements of the array
 * @size: the size of each element
 * Return: the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
