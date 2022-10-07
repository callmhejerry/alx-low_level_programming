#include <stdlib.h>

/**
 * _realloc - A function that reallocates memory using
 * malloc and free
 * @ptr: the pointer to the previous allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the new memory
 *
 * Return: the address to the newly allocatd memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
